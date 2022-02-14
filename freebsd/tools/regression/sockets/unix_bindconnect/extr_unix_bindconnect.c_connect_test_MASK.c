
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sun ;
struct sockaddr_un {int sun_len; int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int socket_path ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (struct sockaddr_un*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int,char*,char const*,...) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int
FUNC_11(const char *VAR_8)
{
 char VAR_9[VAR_3];
 struct sockaddr_un VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_7(VAR_4, VAR_6, 0);
 if (VAR_11 < 0) {
  FUNC_9("connect_test: socket(PF_UNIX, SOCK_STREAM, 0)");
  return (-1);
 }

 if (FUNC_6(VAR_9, sizeof(VAR_9), "%s/%s",
     VAR_8, VAR_5) >= VAR_3) {
  FUNC_9("connect_test: snprintf(socket_path)");
  FUNC_2(VAR_11);
  return (-1);
 }

 FUNC_1(&VAR_10, sizeof(VAR_10));
 VAR_10.sun_len = sizeof(VAR_10);
 VAR_10.sun_family = VAR_0;
 if (FUNC_6(VAR_10.sun_path, sizeof(VAR_10.sun_path), "%s", VAR_9)
     >= (int)sizeof(VAR_10.sun_path)) {
  FUNC_9("connect_test: snprintf(sun.sun_path)");
  FUNC_2(VAR_11);
  return (-1);
 }





 if (FUNC_3(VAR_11, (struct sockaddr *)&VAR_10, sizeof(VAR_10)) == 0) {
  FUNC_10("connect_test: connect(sun) #1 succeeded");
  FUNC_2(VAR_11);
  return (-1);
 }
 if (VAR_7 != VAR_2) {
  FUNC_9("connect_test: connect(sun) #1");
  FUNC_2(VAR_11);
  return (-1);
 }

 if (FUNC_0(VAR_11, (struct sockaddr *)&VAR_10, sizeof(VAR_10)) < 0) {
  FUNC_9("connect_test: bind(sun) #1");
  FUNC_2(VAR_11);
  return (-1);
 }

 if (FUNC_4(VAR_11, 3) < 0) {
  FUNC_9("connect_test: listen(sock1)");
  FUNC_2(VAR_11);
  return (-1);
 }

 FUNC_5(VAR_9);

 VAR_12 = FUNC_7(VAR_4, VAR_6, 0);
 if (VAR_12 < 0) {
  FUNC_9("socket(PF_UNIX, SOCK_STREAM, 0)");
  FUNC_2(VAR_11);
  return (-1);
 }




 if (FUNC_3(VAR_12, (struct sockaddr *)&VAR_10, sizeof(VAR_10)) < 0) {
  FUNC_9("connect(sun) #2");
  FUNC_2(VAR_11);
  return (-1);
 }

 FUNC_2(VAR_12);

 FUNC_2(VAR_11);

 VAR_12 = FUNC_7(VAR_4, VAR_6, 0);
 if (VAR_12 < 0) {
  FUNC_9("socket(PF_UNIX, SOCK_STREAM, 0)");
  return (-1);
 }






 if (FUNC_3(VAR_12, (struct sockaddr *)&VAR_10, sizeof(VAR_10)) == 0) {
  FUNC_10("connect(sun) #3 succeeded");
  FUNC_2(VAR_12);
  return (-1);
 }
 if (VAR_7 != VAR_1) {
  FUNC_9("connect(sun) #3");
  FUNC_2(VAR_12);
  return (-1);
 }

 FUNC_2(VAR_12);
 FUNC_8(VAR_9);
 return (0);
}

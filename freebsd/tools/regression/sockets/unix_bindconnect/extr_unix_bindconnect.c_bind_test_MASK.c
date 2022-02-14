
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
 scalar_t__ VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,char const*,...) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_8)
{
 char VAR_9[VAR_3];
 struct sockaddr_un VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_5(VAR_4, VAR_6, 0);
 if (VAR_11 < 0) {
  FUNC_7("bind_test: socket(PF_UNIX, SOCK_STREAM, 0)");
  return (-1);
 }

 if (FUNC_4(VAR_9, sizeof(VAR_9), "%s/%s",
     VAR_8, VAR_5) >= VAR_3) {
  FUNC_7("bind_test: snprintf(socket_path)");
  FUNC_2(VAR_11);
  return (-1);
 }

 FUNC_1(&VAR_10, sizeof(VAR_10));
 VAR_10.sun_len = sizeof(VAR_10);
 VAR_10.sun_family = VAR_0;
 if (FUNC_4(VAR_10.sun_path, sizeof(VAR_10.sun_path), "%s", VAR_9)
     >= (int)sizeof(VAR_10.sun_path)) {
  FUNC_7("bind_test: snprintf(sun.sun_path)");
  FUNC_2(VAR_11);
  return (-1);
 }

 if (FUNC_0(VAR_11, (struct sockaddr *)&VAR_10, sizeof(VAR_10)) < 0) {
  FUNC_7("bind_test: bind(sun) #1");
  FUNC_2(VAR_11);
  return (-1);
 }

 FUNC_3(VAR_9);





 if (FUNC_0(VAR_11, (struct sockaddr *)&VAR_10, sizeof(VAR_10)) == 0) {
  FUNC_8("bind_test: bind(sun) #2 succeeded");
  FUNC_2(VAR_11);
  return (-1);
 }
 if (VAR_7 != VAR_2) {
  FUNC_7("bind_test: bind(sun) #2");
  FUNC_2(VAR_11);
  return (-1);
 }

 VAR_12 = FUNC_5(VAR_4, VAR_6, 0);
 if (VAR_12 < 0) {
  FUNC_7("bind_test: socket(PF_UNIX, SOCK_STREAM, 0)");
  FUNC_2(VAR_11);
  return (-1);
 }





 if (FUNC_0(VAR_12, (struct sockaddr *)&VAR_10, sizeof(VAR_10)) == 0) {
  FUNC_8("bind_test: bind(sun) #3 succeeded");
  FUNC_2(VAR_11);
  FUNC_2(VAR_12);
  return (-1);
 }
 if (VAR_7 != VAR_1) {
  FUNC_7("bind_test: bind(sun) #2");
  FUNC_2(VAR_11);
  FUNC_2(VAR_12);
  return (-1);
 }

 FUNC_2(VAR_11);






 if (FUNC_0(VAR_12, (struct sockaddr *)&VAR_10, sizeof(VAR_10)) == 0) {
  FUNC_8("bind_test: bind(sun) #4 succeeded");
  FUNC_2(VAR_12);
  return (-1);
 }
 if (VAR_7 != VAR_1) {
  FUNC_7("bind_test: bind(sun) #4");
  FUNC_2(VAR_12);
  return (-1);
 }

 FUNC_6(VAR_9);





 if (FUNC_0(VAR_12, (struct sockaddr *)&VAR_10, sizeof(VAR_10)) < 0) {
  FUNC_7("bind_test: bind(sun) #5");
  FUNC_2(VAR_12);
  return (-1);
 }

 FUNC_2(VAR_12);
 return (0);
}

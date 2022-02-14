
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sun ;
struct sockaddr_un {int sun_len; int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sockaddr_un*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(void)
{
 struct sockaddr_un VAR_5;
 ssize_t VAR_6;
 char VAR_7 = 0;
 int VAR_8, VAR_9;

 FUNC_0(&VAR_5, sizeof(VAR_5));
 VAR_5.sun_len = sizeof(VAR_5);
 VAR_5.sun_family = VAR_0;
 FUNC_4(VAR_5.sun_path, VAR_4);
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_8 = FUNC_3(VAR_2, VAR_3, 0);
  if (VAR_8 < 0) {
   FUNC_5("stream_client: socket");
   return;
  }
  VAR_6 = FUNC_2(VAR_8, &VAR_7, sizeof(VAR_7), 0, (struct sockaddr *)&VAR_5,
      sizeof(VAR_5));
  if (VAR_6 < 0)
   FUNC_5("stream_client: sendto");
  FUNC_1(VAR_8);
 }
}

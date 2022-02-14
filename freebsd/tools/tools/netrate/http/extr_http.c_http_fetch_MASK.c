
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_2 (int,int *,int,int ) ;
 scalar_t__ FUNC_3 (int,int *,size_t,int ) ;
 int FUNC_4 (int *,int,char*,char*) ;
 int FUNC_5 (int ,int ,int ) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(struct sockaddr_in *VAR_3, char *VAR_4, int VAR_5)
{
 u_char VAR_6[VAR_0];
 ssize_t VAR_7;
 size_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_5(VAR_1, VAR_2, 0);
 if (VAR_9 < 0) {
  if (!VAR_5)
   FUNC_7("socket(PF_INET, SOCK_STREAM)");
  return (-1);
 }



 if (FUNC_1(VAR_9, (struct sockaddr *)VAR_3, sizeof(*VAR_3)) < 0) {
  if (!VAR_5)
   FUNC_7("connect");
  FUNC_0(VAR_9);
  return (-1);
 }




 FUNC_4(VAR_6, VAR_0, "GET %s HTTP/1.0\n\n", VAR_4);
 VAR_8 = 0;
 while (VAR_8 < FUNC_6(VAR_6)) {
  VAR_7 = FUNC_3(VAR_9, VAR_6, FUNC_6(VAR_6), 0);
  if (VAR_7 < 0) {
   if (!VAR_5)
    FUNC_7("send");
   FUNC_0(VAR_9);
   return (-1);
  }
  if (VAR_7 == 0) {
   if (!VAR_5)
    FUNC_8("send: len == 0");
  }
  VAR_8 += VAR_7;
 }


 while (1) {
  VAR_7 = FUNC_2(VAR_9, VAR_6, VAR_0, 0);
  if (VAR_7 < 0) {
   if (!VAR_5)
    FUNC_7("recv");
   FUNC_0(VAR_9);
   return (-1);
  }
  if (VAR_7 == 0)
   break;
 }

 FUNC_0(VAR_9);
 return (0);
}

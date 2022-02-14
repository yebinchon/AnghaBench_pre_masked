
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_msghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rt_msghdr*,int) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int ,int ,int ) ;

int
FUNC_4(int VAR_3, char *VAR_4[])
{
 int VAR_5, VAR_6;
 char VAR_7[2048];

 VAR_6 = FUNC_3(VAR_1, VAR_2, 0);
 if (VAR_6 < 0)
  FUNC_0(VAR_0, "socket");
 for(;;) {
  VAR_5 = FUNC_2(VAR_6, VAR_7, 2048);
  FUNC_1((struct rt_msghdr *)VAR_7, VAR_5);
 }
 return 0;
}

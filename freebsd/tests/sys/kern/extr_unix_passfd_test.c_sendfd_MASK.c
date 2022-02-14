
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ch ;


 int FUNC_0 (int,char*,size_t,int,int ) ;
 int VAR_0 ;
 size_t FUNC_1 (int,int,char*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_1, int VAR_2)
{
 size_t VAR_3;
 char VAR_4;

 VAR_4 = 0;
 VAR_3 = FUNC_1(VAR_1, VAR_2, &VAR_4, sizeof(VAR_4));
 FUNC_0(VAR_3 == sizeof(VAR_4),
     "sendmsg: %zu bytes sent; expected %zu; %s", VAR_3, sizeof(VAR_4),
     FUNC_2(VAR_0));
}

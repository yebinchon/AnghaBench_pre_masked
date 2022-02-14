
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int*,int,int *,size_t*,int ,int ) ;

void
FUNC_2(void)
{
 size_t VAR_6;
 int VAR_7[4];

 VAR_7[0] = VAR_0;
 VAR_7[1] = VAR_2;
 VAR_7[2] = VAR_1;
 VAR_7[3] = VAR_3;

 VAR_6 = sizeof VAR_4;
 if (FUNC_1(VAR_7, 4, &VAR_4, &VAR_6, 0, 0) < 0) {
  FUNC_0("sysctl getting tcpstat failed");
 }
 VAR_5 = VAR_4;
}

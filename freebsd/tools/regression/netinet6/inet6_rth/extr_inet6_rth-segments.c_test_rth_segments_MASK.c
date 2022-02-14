
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_rthdr {int ip6r_type; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int,int ,char*) ;
 int * FUNC_2 (void*,int,int ,int) ;
 int FUNC_3 (void const*) ;
 int FUNC_4 (char*,int) ;

void
FUNC_5()
{
 int VAR_1;
 char VAR_2[10240];

 FUNC_4("test_rth_segments", sizeof("test_rth_segments\0"));




 if (((void*)0) == FUNC_2((void *)VAR_2, 10240, VAR_0, 0))
  FUNC_0();
 ((struct ip6_rthdr *)VAR_2)->ip6r_type = ~VAR_0;
 VAR_1 = FUNC_3((const void *)VAR_2);
 FUNC_1(-1, VAR_1, 0, "invalid routing header type\0");




 if (((void*)0) == FUNC_2((void *)VAR_2, 10240, VAR_0, 0))
  FUNC_0();
 VAR_1 = FUNC_3((const void *)VAR_2);
 FUNC_1(0, VAR_1, 0, "0 segments\0");




 if (((void*)0) == FUNC_2((void *)VAR_2, 10240, VAR_0, 127))
  FUNC_0();
 VAR_1 = FUNC_3((const void *)VAR_2);
 FUNC_1(127, VAR_1, 0, "127 segments\0");
}

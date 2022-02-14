
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsw_mt753x {int cpu_port; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct gsw_mt753x*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct gsw_mt753x *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  FUNC_3(VAR_6, FUNC_1(VAR_7),
     FUNC_0(VAR_6->cpu_port) << VAR_2);

 FUNC_3(VAR_6, FUNC_1(VAR_6->cpu_port), VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  FUNC_3(VAR_6, FUNC_2(VAR_7),
     (0x8100 << VAR_3) |
     (VAR_4 << VAR_5));
}

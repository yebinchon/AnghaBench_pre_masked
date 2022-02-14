
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,unsigned int) ;
 int FUNC_1 () ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void)
{
 unsigned int VAR_3;


 VAR_3 = FUNC_2(VAR_1);
 VAR_3 |= VAR_0;
 FUNC_3(VAR_1, VAR_3);

 VAR_2 = 0;

 FUNC_0("stop on cpu %d, mmcr0 %x\n", FUNC_4(), VAR_3);

 FUNC_1();
}

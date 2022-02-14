
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 u64 VAR_3;


 VAR_3 = FUNC_0(VAR_1);
 VAR_3 |= VAR_0;
 FUNC_1(VAR_1, VAR_3);

 VAR_2 = 0;

 FUNC_2("stop on cpu %d, mmcr0 %llx\n", FUNC_3(), VAR_3);
}

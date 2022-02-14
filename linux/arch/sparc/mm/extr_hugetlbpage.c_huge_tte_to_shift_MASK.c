
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static unsigned int FUNC_4(pte_t VAR_3)
{
 unsigned long VAR_4;

 if (VAR_2 == VAR_1)
  VAR_4 = FUNC_3(VAR_3);
 else
  VAR_4 = FUNC_2(VAR_3);

 if (VAR_4 == VAR_0)
  FUNC_0(1, "tto_to_shift: invalid hugepage tte=0x%lx\n",
     FUNC_1(VAR_3));

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_pgtable_cfg {int dummy; } ;
typedef int phys_addr_t ;
typedef int arm_v7s_iopte ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct io_pgtable_cfg*) ;

__attribute__((used)) static arm_v7s_iopte FUNC_3(phys_addr_t VAR_2, int VAR_3,
        struct io_pgtable_cfg *VAR_4)
{
 arm_v7s_iopte VAR_5 = VAR_2 & FUNC_0(VAR_3);

 if (!FUNC_2(VAR_4))
  return VAR_5;

 if (VAR_2 & FUNC_1(32))
  VAR_5 |= VAR_0;
 if (VAR_2 & FUNC_1(33))
  VAR_5 |= VAR_1;
 return VAR_5;
}

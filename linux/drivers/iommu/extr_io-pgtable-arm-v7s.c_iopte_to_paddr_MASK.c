
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_pgtable_cfg {int dummy; } ;
typedef int phys_addr_t ;
typedef int arm_v7s_iopte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct io_pgtable_cfg*) ;
 scalar_t__ FUNC_4 (int,int) ;

__attribute__((used)) static phys_addr_t FUNC_5(arm_v7s_iopte VAR_4, int VAR_5,
      struct io_pgtable_cfg *VAR_6)
{
 arm_v7s_iopte VAR_7;
 phys_addr_t VAR_8;

 if (FUNC_1(VAR_4, VAR_5))
  VAR_7 = VAR_3;
 else if (FUNC_4(VAR_4, VAR_5))
  VAR_7 = FUNC_0(VAR_5) * VAR_2;
 else
  VAR_7 = FUNC_0(VAR_5);

 VAR_8 = VAR_4 & VAR_7;
 if (!FUNC_3(VAR_6))
  return VAR_8;

 if (VAR_4 & VAR_0)
  VAR_8 |= FUNC_2(32);
 if (VAR_4 & VAR_1)
  VAR_8 |= FUNC_2(33);
 return VAR_8;
}

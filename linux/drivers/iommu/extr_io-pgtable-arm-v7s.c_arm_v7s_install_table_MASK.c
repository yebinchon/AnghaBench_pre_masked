
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_pgtable_cfg {int quirks; } ;
typedef int arm_v7s_iopte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int,struct io_pgtable_cfg*) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int*) ;

__attribute__((used)) static arm_v7s_iopte FUNC_4(arm_v7s_iopte *VAR_3,
        arm_v7s_iopte *VAR_4,
        arm_v7s_iopte VAR_5,
        struct io_pgtable_cfg *VAR_6)
{
 arm_v7s_iopte VAR_7, VAR_8;

 VAR_8 = FUNC_3(VAR_3) | VAR_1;
 if (VAR_6->quirks & VAR_2)
  VAR_8 |= VAR_0;






 FUNC_2();

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_8);
 FUNC_0(VAR_4, 1, VAR_6);

 return VAR_7;
}

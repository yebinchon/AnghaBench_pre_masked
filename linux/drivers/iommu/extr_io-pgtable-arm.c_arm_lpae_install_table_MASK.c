
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_pgtable_cfg {int quirks; scalar_t__ coherent_walk; } ;
typedef int arm_lpae_iopte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,struct io_pgtable_cfg*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 () ;

__attribute__((used)) static arm_lpae_iopte FUNC_5(arm_lpae_iopte *VAR_4,
          arm_lpae_iopte *VAR_5,
          arm_lpae_iopte VAR_6,
          struct io_pgtable_cfg *VAR_7)
{
 arm_lpae_iopte VAR_8, VAR_9;

 VAR_9 = FUNC_2(VAR_4) | VAR_2;
 if (VAR_7->quirks & VAR_3)
  VAR_9 |= VAR_0;






 FUNC_4();

 VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_9);

 if (VAR_7->coherent_walk || (VAR_8 & VAR_1))
  return VAR_8;


 FUNC_1(VAR_5, VAR_7);
 if (VAR_8 == VAR_6)
  FUNC_0(*VAR_5, VAR_9 | VAR_1);

 return VAR_8;
}

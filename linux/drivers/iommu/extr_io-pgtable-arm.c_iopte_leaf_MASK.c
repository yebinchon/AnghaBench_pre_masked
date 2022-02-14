
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum io_pgtable_fmt { ____Placeholder_io_pgtable_fmt } io_pgtable_fmt ;
typedef int arm_lpae_iopte ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static inline bool FUNC_1(arm_lpae_iopte VAR_4, int VAR_5,
         enum io_pgtable_fmt VAR_6)
{
 if (VAR_5 == (VAR_0 - 1) && VAR_6 != VAR_3)
  return FUNC_0(VAR_4, VAR_5) == VAR_2;

 return FUNC_0(VAR_4, VAR_5) == VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtrr_var_range {int mask_hi; int mask_lo; int base_hi; int base_lo; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(unsigned int VAR_0, struct mtrr_var_range *VAR_1)
{
 FUNC_2(FUNC_0(VAR_0), VAR_1->base_lo, VAR_1->base_hi);
 FUNC_2(FUNC_1(VAR_0), VAR_1->mask_lo, VAR_1->mask_hi);
}

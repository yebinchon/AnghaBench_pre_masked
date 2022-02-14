
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_icu_subset_data {scalar_t__ icu_group; scalar_t__ offset_clr_al; scalar_t__ offset_clr_ah; scalar_t__ offset_set_al; scalar_t__ offset_set_ah; } ;
struct mvebu_icu_msi_data {int initialized; struct mvebu_icu_subset_data* subset_data; } ;
struct mvebu_icu {scalar_t__ base; } ;
struct msi_msg {int address_lo; int address_hi; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mvebu_icu *VAR_1,
      struct mvebu_icu_msi_data *VAR_2,
      struct msi_msg *VAR_3)
{
 const struct mvebu_icu_subset_data *VAR_4 = VAR_2->subset_data;

 if (FUNC_0(&VAR_2->initialized, 0, 1))
  return;


 FUNC_1(VAR_3[0].address_hi, VAR_1->base + VAR_4->offset_set_ah);
 FUNC_1(VAR_3[0].address_lo, VAR_1->base + VAR_4->offset_set_al);

 if (VAR_4->icu_group != VAR_0)
  return;


 FUNC_1(VAR_3[1].address_hi, VAR_1->base + VAR_4->offset_clr_ah);
 FUNC_1(VAR_3[1].address_lo, VAR_1->base + VAR_4->offset_clr_al);
}

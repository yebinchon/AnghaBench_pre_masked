
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_drconf_cell_v2 {void* flags; void* aa_index; void* drc_index; int base_addr; } ;
struct drmem_lmb {int aa_index; int drc_index; int base_addr; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drmem_lmb*) ;

__attribute__((used)) static void FUNC_3(struct of_drconf_cell_v2 *VAR_0,
    struct drmem_lmb *VAR_1)
{
 VAR_0->base_addr = FUNC_1(VAR_1->base_addr);
 VAR_0->drc_index = FUNC_0(VAR_1->drc_index);
 VAR_0->aa_index = FUNC_0(VAR_1->aa_index);
 VAR_0->flags = FUNC_0(FUNC_2(VAR_1));
}

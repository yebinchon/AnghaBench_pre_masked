
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmrr_iter_args {int dev_domain; int dev_busno; int dev_path_len; struct dmar_map_entries_tailq* rmrr_entries; int const* dev_path; struct dmar_domain* domain; } ;
struct dmar_map_entries_tailq {int dummy; } ;
struct dmar_domain {int dummy; } ;
typedef int ACPI_DMAR_PCI_PATH ;


 int FUNC_0 (int ,struct rmrr_iter_args*) ;
 int VAR_0 ;

void
FUNC_1(struct dmar_domain *VAR_1, int VAR_2, int VAR_3,
    const void *VAR_4, int VAR_5,
    struct dmar_map_entries_tailq *VAR_6)
{
 struct rmrr_iter_args VAR_7;

 VAR_7.domain = VAR_1;
 VAR_7.dev_domain = VAR_2;
 VAR_7.dev_busno = VAR_3;
 VAR_7.dev_path = (const ACPI_DMAR_PCI_PATH *)VAR_4;
 VAR_7.dev_path_len = VAR_5;
 VAR_7.rmrr_entries = VAR_6;
 FUNC_0(VAR_0, &VAR_7);
}

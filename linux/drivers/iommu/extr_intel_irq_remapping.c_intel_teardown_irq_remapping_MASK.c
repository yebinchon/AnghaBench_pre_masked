
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_iommu {TYPE_1__* ir_table; int * ir_domain; int * ir_msi_domain; } ;
struct TYPE_2__ {int bitmap; scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct intel_iommu *VAR_1)
{
 if (VAR_1 && VAR_1->ir_table) {
  if (VAR_1->ir_msi_domain) {
   FUNC_2(VAR_1->ir_msi_domain);
   VAR_1->ir_msi_domain = ((void*)0);
  }
  if (VAR_1->ir_domain) {
   FUNC_2(VAR_1->ir_domain);
   VAR_1->ir_domain = ((void*)0);
  }
  FUNC_1((unsigned long)VAR_1->ir_table->base,
      VAR_0);
  FUNC_0(VAR_1->ir_table->bitmap);
  FUNC_3(VAR_1->ir_table);
  VAR_1->ir_table = ((void*)0);
 }
}

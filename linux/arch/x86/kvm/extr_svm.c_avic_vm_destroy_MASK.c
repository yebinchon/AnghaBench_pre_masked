
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_svm {int hnode; scalar_t__ avic_physical_id_table_page; scalar_t__ avic_logical_id_table_page; } ;
struct kvm {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_1 ;
 struct kvm_svm* FUNC_4 (struct kvm*) ;

__attribute__((used)) static void FUNC_5(struct kvm *VAR_2)
{
 unsigned long VAR_3;
 struct kvm_svm *VAR_4 = FUNC_4(VAR_2);

 if (!VAR_0)
  return;

 if (VAR_4->avic_logical_id_table_page)
  FUNC_0(VAR_4->avic_logical_id_table_page);
 if (VAR_4->avic_physical_id_table_page)
  FUNC_0(VAR_4->avic_physical_id_table_page);

 FUNC_2(&VAR_1, VAR_3);
 FUNC_1(&VAR_4->hnode);
 FUNC_3(&VAR_1, VAR_3);
}

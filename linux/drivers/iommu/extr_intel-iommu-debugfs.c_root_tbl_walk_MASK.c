
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct seq_file {int dummy; } ;
struct intel_iommu {int lock; int root_entry; int name; } ;


 int FUNC_0 (struct seq_file*,struct intel_iommu*,int) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ) ;
 int FUNC_2 (struct seq_file*,char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct seq_file *VAR_0, struct intel_iommu *VAR_1)
{
 unsigned long VAR_2;
 u16 VAR_3;

 FUNC_3(&VAR_1->lock, VAR_2);
 FUNC_1(VAR_0, "IOMMU %s: Root Table Address: 0x%llx\n", VAR_1->name,
     (u64)FUNC_5(VAR_1->root_entry));
 FUNC_2(VAR_0, "B.D.F\tRoot_entry\t\t\t\tContext_entry\t\t\t\tPASID\tPASID_table_entry\n");






 for (VAR_3 = 0; VAR_3 < 256; VAR_3++)
  FUNC_0(VAR_0, VAR_1, VAR_3);

 FUNC_4(&VAR_1->lock, VAR_2);
}

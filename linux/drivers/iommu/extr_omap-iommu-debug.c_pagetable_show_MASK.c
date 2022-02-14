
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct omap_iommu* private; } ;
struct omap_iommu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct omap_iommu*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct seq_file*,char*,char*,char*) ;
 int FUNC_5 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_2, void *VAR_3)
{
 struct omap_iommu *VAR_4 = VAR_2->private;

 if (FUNC_1(VAR_4))
  return -VAR_0;

 FUNC_2(&VAR_1);

 FUNC_4(VAR_2, "L: %8s %8s\n", "da:", "pte:");
 FUNC_5(VAR_2, "--------------------------\n");
 FUNC_0(VAR_2);

 FUNC_3(&VAR_1);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {struct omap_iommu* private; } ;
struct omap_iommu {int page_table_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_0 (struct omap_iommu*,int ) ;
 int* FUNC_1 (int*,int ) ;
 int FUNC_2 (struct seq_file*,char*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct seq_file *VAR_5)
{
 int VAR_6, VAR_7;
 u32 VAR_8;
 u32 *VAR_9, *VAR_10;
 struct omap_iommu *VAR_11 = VAR_5->private;

 FUNC_3(&VAR_11->page_table_lock);

 VAR_9 = FUNC_0(VAR_11, 0);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++, VAR_9++) {
  if (!*VAR_9)
   continue;

  if (!(*VAR_9 & VAR_1)) {
   VAR_8 = VAR_6 << VAR_0;
   FUNC_2(VAR_5, "1: 0x%08x 0x%08x\n", VAR_8, *VAR_9);
   continue;
  }

  VAR_10 = FUNC_1(VAR_9, 0);
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++, VAR_10++) {
   if (!*VAR_10)
    continue;

   VAR_8 = (VAR_6 << VAR_0) + (VAR_7 << VAR_2);
   FUNC_2(VAR_5, "2: 0x%08x 0x%08x\n", VAR_8, *VAR_10);
  }
 }

 FUNC_4(&VAR_11->page_table_lock);
}

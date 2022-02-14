
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct mm_iommu_table_group_mem_t {scalar_t__ used; scalar_t__ dev_hpa; unsigned long entries; int mapped; } ;


 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mm_struct*,unsigned long,int) ;
 int FUNC_1 (int *,int,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct mm_iommu_table_group_mem_t*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

long FUNC_5(struct mm_struct *VAR_4, struct mm_iommu_table_group_mem_t *VAR_5)
{
 long VAR_6 = 0;
 unsigned long VAR_7 = 0;

 FUNC_3(&VAR_3);

 if (VAR_5->used == 0) {
  VAR_6 = -VAR_1;
  goto unlock_exit;
 }

 --VAR_5->used;

 if (VAR_5->used)
  goto unlock_exit;


 if (FUNC_1(&VAR_5->mapped, 1, 0) != 1) {
  ++VAR_5->used;
  VAR_6 = -VAR_0;
  goto unlock_exit;
 }

 if (VAR_5->dev_hpa == VAR_2)
  VAR_7 = VAR_5->entries;


 FUNC_2(VAR_5);

unlock_exit:
 FUNC_4(&VAR_3);

 FUNC_0(VAR_4, VAR_7, 0);

 return VAR_6;
}

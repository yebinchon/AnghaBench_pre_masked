
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_dev_info {int mmap_offset_lock; int mmap_offset; int pending_lock; int pending_mmaps; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct rvt_dev_info *VAR_1)
{
 FUNC_0(&VAR_1->pending_mmaps);
 FUNC_1(&VAR_1->pending_lock);
 VAR_1->mmap_offset = VAR_0;
 FUNC_1(&VAR_1->mmap_offset_lock);
}

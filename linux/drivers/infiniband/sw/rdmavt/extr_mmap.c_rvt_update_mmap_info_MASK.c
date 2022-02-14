
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rvt_mmap_info {scalar_t__ offset; scalar_t__ size; void* obj; } ;
struct rvt_dev_info {scalar_t__ mmap_offset; int mmap_offset_lock; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct rvt_dev_info *VAR_1, struct rvt_mmap_info *VAR_2,
     u32 VAR_3, void *VAR_4)
{
 VAR_3 = FUNC_0(VAR_3);

 FUNC_1(&VAR_1->mmap_offset_lock);
 if (VAR_1->mmap_offset == 0)
  VAR_1->mmap_offset = VAR_0;
 VAR_2->offset = VAR_1->mmap_offset;
 VAR_1->mmap_offset += VAR_3;
 FUNC_2(&VAR_1->mmap_offset_lock);

 VAR_2->size = VAR_3;
 VAR_2->obj = VAR_4;
}

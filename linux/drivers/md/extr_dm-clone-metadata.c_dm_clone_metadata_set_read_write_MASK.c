
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_metadata {int lock; int bm; int fail_io; int bitmap_lock; scalar_t__ read_only; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct dm_clone_metadata *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->lock);

 FUNC_2(&VAR_0->bitmap_lock, VAR_1);
 VAR_0->read_only = 0;
 FUNC_3(&VAR_0->bitmap_lock, VAR_1);

 if (!VAR_0->fail_io)
  FUNC_0(VAR_0->bm);

 FUNC_4(&VAR_0->lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {scalar_t__ index; } ;
struct bitmap_storage {unsigned long file_pages; } ;
struct TYPE_2__ {unsigned long chunkshift; } ;
struct bitmap {unsigned long cluster_slot; scalar_t__ allclean; int flags; struct bitmap_storage storage; int mddev; TYPE_1__ counts; } ;
typedef unsigned long sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,void*) ;
 int FUNC_1 (unsigned long,void*) ;
 unsigned long FUNC_2 (struct bitmap_storage*,unsigned long) ;
 struct page* FUNC_3 (struct bitmap_storage*,unsigned long) ;
 void* FUNC_4 (struct page*) ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct bitmap*,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (struct bitmap*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_10(struct bitmap *VAR_3, sector_t VAR_4)
{
 unsigned long VAR_5;
 struct page *VAR_6;
 void *VAR_7;
 unsigned long VAR_8 = VAR_4 >> VAR_3->counts.chunkshift;
 struct bitmap_storage *VAR_9 = &VAR_3->storage;
 unsigned long VAR_10 = 0;

 if (FUNC_6(VAR_3->mddev))
  VAR_10 = VAR_3->cluster_slot * VAR_9->file_pages;

 VAR_6 = FUNC_3(&VAR_3->storage, VAR_8);
 if (!VAR_6)
  return;
 VAR_5 = FUNC_2(&VAR_3->storage, VAR_8);
 VAR_7 = FUNC_4(VAR_6);
 if (FUNC_8(VAR_0, &VAR_3->flags))
  FUNC_0(VAR_5, VAR_7);
 else
  FUNC_1(VAR_5, VAR_7);
 FUNC_5(VAR_7);
 if (!FUNC_9(VAR_3, VAR_6->index - VAR_10, VAR_1)) {
  FUNC_7(VAR_3, VAR_6->index - VAR_10, VAR_2);
  VAR_3->allclean = 0;
 }
}

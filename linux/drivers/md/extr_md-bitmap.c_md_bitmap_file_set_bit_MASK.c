
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {scalar_t__ index; } ;
struct bitmap_storage {unsigned long file_pages; } ;
struct TYPE_2__ {unsigned long chunkshift; } ;
struct bitmap {unsigned long cluster_slot; int flags; struct bitmap_storage storage; int mddev; TYPE_1__ counts; } ;
typedef unsigned long sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct bitmap_storage*,unsigned long) ;
 struct page* FUNC_1 (struct bitmap_storage*,unsigned long) ;
 void* FUNC_2 (struct page*) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,unsigned long,scalar_t__) ;
 int FUNC_6 (unsigned long,void*) ;
 int FUNC_7 (unsigned long,void*) ;
 int FUNC_8 (struct bitmap*,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct bitmap *VAR_2, sector_t VAR_3)
{
 unsigned long VAR_4;
 struct page *VAR_5;
 void *VAR_6;
 unsigned long VAR_7 = VAR_3 >> VAR_2->counts.chunkshift;
 struct bitmap_storage *VAR_8 = &VAR_2->storage;
 unsigned long VAR_9 = 0;

 if (FUNC_4(VAR_2->mddev))
  VAR_9 = VAR_2->cluster_slot * VAR_8->file_pages;

 VAR_5 = FUNC_1(&VAR_2->storage, VAR_7);
 if (!VAR_5)
  return;
 VAR_4 = FUNC_0(&VAR_2->storage, VAR_7);


 VAR_6 = FUNC_2(VAR_5);
 if (FUNC_9(VAR_0, &VAR_2->flags))
  FUNC_6(VAR_4, VAR_6);
 else
  FUNC_7(VAR_4, VAR_6);
 FUNC_3(VAR_6);
 FUNC_5("set file bit %lu page %lu\n", VAR_4, VAR_5->index);

 FUNC_8(VAR_2, VAR_5->index - VAR_9, VAR_1);
}

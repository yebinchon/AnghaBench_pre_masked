
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_metadata {unsigned long nr_words; int bitmap_lock; } ;
struct dirty_map {scalar_t__ changed; int dirty_words; } ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (struct dm_clone_metadata*) ;
 int FUNC_2 (struct dm_clone_metadata*,unsigned long) ;
 unsigned long FUNC_3 (int ,unsigned long,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct dm_clone_metadata *VAR_0, struct dirty_map *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3, VAR_4;

 VAR_3 = 0;
 do {
  VAR_3 = FUNC_3(VAR_1->dirty_words, VAR_0->nr_words, VAR_3);

  if (VAR_3 == VAR_0->nr_words)
   break;

  VAR_2 = FUNC_2(VAR_0, VAR_3);

  if (VAR_2)
   return VAR_2;

  FUNC_0(VAR_3, VAR_1->dirty_words);
  VAR_3++;
 } while (VAR_3 < VAR_0->nr_words);

 VAR_2 = FUNC_1(VAR_0);

 if (VAR_2)
  return VAR_2;


 FUNC_4(&VAR_0->bitmap_lock, VAR_4);
 VAR_1->changed = 0;
 FUNC_5(&VAR_0->bitmap_lock, VAR_4);

 return 0;
}

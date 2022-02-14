
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct revindex_entry {int offset; scalar_t__ nr; } ;
struct object_id {int dummy; } ;
struct ewah_iterator {int dummy; } ;
struct ewah_bitmap {int dummy; } ;
struct bitmap_index {scalar_t__ reuse_objects; TYPE_1__* pack; scalar_t__ hashes; struct bitmap* result; } ;
struct bitmap {size_t word_alloc; size_t* words; } ;
typedef int (* show_reachable_fn ) (struct object_id*,int,int ,size_t,TYPE_1__*,int ) ;
typedef size_t eword_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_4__ {scalar_t__ num_objects; struct revindex_entry* revindex; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (struct ewah_iterator*,struct ewah_bitmap*) ;
 scalar_t__ FUNC_2 (size_t*,struct ewah_iterator*) ;
 size_t FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct object_id*,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(
 struct bitmap_index *VAR_1,
 struct ewah_bitmap *VAR_2,
 enum object_type VAR_3,
 show_reachable_fn VAR_4)
{
 size_t VAR_5 = 0, VAR_6 = 0;
 uint32_t VAR_7;

 struct ewah_iterator VAR_8;
 eword_t VAR_9;

 struct bitmap *VAR_10 = VAR_1->result;

 if (VAR_1->reuse_objects == VAR_1->pack->num_objects)
  return;

 FUNC_1(&VAR_8, VAR_2);

 while (VAR_6 < VAR_10->word_alloc && FUNC_2(&VAR_9, &VAR_8)) {
  eword_t VAR_11 = VAR_10->words[VAR_6] & VAR_9;

  for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
   struct object_id VAR_12;
   struct revindex_entry *VAR_13;
   uint32_t VAR_14 = 0;

   if ((VAR_11 >> VAR_7) == 0)
    break;

   VAR_7 += FUNC_0(VAR_11 >> VAR_7);

   if (VAR_5 + VAR_7 < VAR_1->reuse_objects)
    continue;

   VAR_13 = &VAR_1->pack->revindex[VAR_5 + VAR_7];
   FUNC_4(&VAR_12, VAR_1->pack, VAR_13->nr);

   if (VAR_1->hashes)
    VAR_14 = FUNC_3(VAR_1->hashes + VAR_13->nr);

   VAR_4(&VAR_12, VAR_3, 0, VAR_14, VAR_1->pack, VAR_13->offset);
  }

  VAR_5 += VAR_0;
  VAR_6++;
 }
}

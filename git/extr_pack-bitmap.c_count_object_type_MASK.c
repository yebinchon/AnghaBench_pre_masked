
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct ewah_iterator {int dummy; } ;
struct eindex {size_t count; TYPE_1__** objects; } ;
struct bitmap_index {TYPE_2__* pack; int tags; int blobs; int trees; int commits; struct eindex ext_index; struct bitmap* result; } ;
struct bitmap {size_t word_alloc; int* words; } ;
typedef int eword_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_4__ {scalar_t__ num_objects; } ;
struct TYPE_3__ {int type; } ;






 scalar_t__ FUNC_0 (struct bitmap*,scalar_t__) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (struct ewah_iterator*,int ) ;
 scalar_t__ FUNC_3 (int*,struct ewah_iterator*) ;

__attribute__((used)) static uint32_t FUNC_4(struct bitmap_index *VAR_0,
      enum object_type VAR_1)
{
 struct bitmap *VAR_2 = VAR_0->result;
 struct eindex *VAR_3 = &VAR_0->ext_index;

 uint32_t VAR_4 = 0, VAR_5 = 0;
 struct ewah_iterator VAR_6;
 eword_t VAR_7;

 switch (VAR_1) {
 case 130:
  FUNC_2(&VAR_6, VAR_0->commits);
  break;

 case 128:
  FUNC_2(&VAR_6, VAR_0->trees);
  break;

 case 131:
  FUNC_2(&VAR_6, VAR_0->blobs);
  break;

 case 129:
  FUNC_2(&VAR_6, VAR_0->tags);
  break;

 default:
  return 0;
 }

 while (VAR_4 < VAR_2->word_alloc && FUNC_3(&VAR_7, &VAR_6)) {
  eword_t VAR_8 = VAR_2->words[VAR_4++] & VAR_7;
  VAR_5 += FUNC_1(VAR_8);
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->count; ++VAR_4) {
  if (VAR_3->objects[VAR_4]->type == VAR_1 &&
   FUNC_0(VAR_2, VAR_0->pack->num_objects + VAR_4))
   VAR_5++;
 }

 return VAR_5;
}

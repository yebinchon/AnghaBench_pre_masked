
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pack_list {void* unique_objects; TYPE_1__* pack; int remaining_objects; } ;
struct object_id {int dummy; } ;
struct llist_item {int dummy; } ;
struct TYPE_4__ {unsigned int rawsz; } ;
struct TYPE_3__ {unsigned char* index_data; int index_version; unsigned long num_objects; } ;


 int FUNC_0 (unsigned char const*,unsigned char const*) ;
 void* FUNC_1 (int ) ;
 struct llist_item* FUNC_2 (void*,struct object_id const*,struct llist_item*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct pack_list *VAR_1, struct pack_list *VAR_2)
{
 unsigned long VAR_3 = 0, VAR_4 = 0, VAR_5, VAR_6;
 const unsigned char *VAR_7, *VAR_8;
 struct llist_item *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 const unsigned int VAR_11 = VAR_0->rawsz;

 if (!VAR_1->unique_objects)
  VAR_1->unique_objects = FUNC_1(VAR_1->remaining_objects);
 if (!VAR_2->unique_objects)
  VAR_2->unique_objects = FUNC_1(VAR_2->remaining_objects);

 VAR_7 = VAR_1->pack->index_data;
 VAR_8 = VAR_2->pack->index_data;
 VAR_7 += 256 * 4 + ((VAR_1->pack->index_version < 2) ? 4 : 8);
 VAR_8 += 256 * 4 + ((VAR_2->pack->index_version < 2) ? 4 : 8);
 VAR_5 = VAR_11 + ((VAR_1->pack->index_version < 2) ? 4 : 0);
 VAR_6 = VAR_11 + ((VAR_2->pack->index_version < 2) ? 4 : 0);

 while (VAR_3 < VAR_1->pack->num_objects * VAR_5 &&
        VAR_4 < VAR_2->pack->num_objects * VAR_6)
 {
  const int VAR_12 = FUNC_0(VAR_7 + VAR_3, VAR_8 + VAR_4);

  if (VAR_12 == 0) {
   VAR_9 = FUNC_2(VAR_1->unique_objects,
     (const struct object_id *)(VAR_7 + VAR_3),
     VAR_9);
   VAR_10 = FUNC_2(VAR_2->unique_objects,
     (const struct object_id *)(VAR_7 + VAR_3),
     VAR_10);
   VAR_3 += VAR_5;
   VAR_4 += VAR_6;
   continue;
  }
  if (VAR_12 < 0) {
   VAR_3 += VAR_5;
  } else {
   VAR_4 += VAR_6;
  }
 }
}

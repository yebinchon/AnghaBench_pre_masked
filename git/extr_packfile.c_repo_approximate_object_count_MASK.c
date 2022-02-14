
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* objects; } ;
struct packed_git {scalar_t__ num_objects; struct packed_git* next; } ;
struct multi_pack_index {scalar_t__ num_objects; struct multi_pack_index* next; } ;
struct TYPE_2__ {unsigned long approximate_object_count; struct packed_git* packed_git; int approximate_object_count_valid; } ;


 struct multi_pack_index* FUNC_0 (struct repository*) ;
 scalar_t__ FUNC_1 (struct packed_git*) ;
 int FUNC_2 (struct repository*) ;

unsigned long FUNC_3(struct repository *VAR_0)
{
 if (!VAR_0->objects->approximate_object_count_valid) {
  unsigned long VAR_1;
  struct multi_pack_index *VAR_2;
  struct packed_git *VAR_3;

  FUNC_2(VAR_0);
  VAR_1 = 0;
  for (VAR_2 = FUNC_0(VAR_0); VAR_2; VAR_2 = VAR_2->next)
   VAR_1 += VAR_2->num_objects;
  for (VAR_3 = VAR_0->objects->packed_git; VAR_3; VAR_3 = VAR_3->next) {
   if (FUNC_1(VAR_3))
    continue;
   VAR_1 += VAR_3->num_objects;
  }
  VAR_0->objects->approximate_object_count = VAR_1;
 }
 return VAR_0->objects->approximate_object_count;
}

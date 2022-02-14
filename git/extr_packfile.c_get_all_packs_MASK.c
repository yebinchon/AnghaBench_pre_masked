
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct repository {TYPE_1__* objects; } ;
struct packed_git {int dummy; } ;
struct multi_pack_index {scalar_t__ num_packs; struct multi_pack_index* next; } ;
struct TYPE_2__ {struct packed_git* packed_git; struct multi_pack_index* multi_pack_index; } ;


 int FUNC_0 (struct repository*,struct multi_pack_index*,scalar_t__) ;
 int FUNC_1 (struct repository*) ;

struct packed_git *FUNC_2(struct repository *VAR_0)
{
 struct multi_pack_index *VAR_1;

 FUNC_1(VAR_0);
 for (VAR_1 = VAR_0->objects->multi_pack_index; VAR_1; VAR_1 = VAR_1->next) {
  uint32_t VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1->num_packs; VAR_2++)
   FUNC_0(VAR_0, VAR_1, VAR_2);
 }

 return VAR_0->objects->packed_git;
}

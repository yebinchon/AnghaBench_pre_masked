
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct multi_pack_index {int fd; size_t num_packs; TYPE_1__** pack_names; TYPE_1__** packs; int data_len; scalar_t__ data; } ;
struct TYPE_2__ {scalar_t__ multi_pack_index; } ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,int ) ;

void FUNC_3(struct multi_pack_index *VAR_0)
{
 uint32_t VAR_1;

 if (!VAR_0)
  return;

 FUNC_2((unsigned char *)VAR_0->data, VAR_0->data_len);
 FUNC_1(VAR_0->fd);
 VAR_0->fd = -1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_packs; VAR_1++) {
  if (VAR_0->packs[VAR_1])
   VAR_0->packs[VAR_1]->multi_pack_index = 0;
 }
 FUNC_0(VAR_0->packs);
 FUNC_0(VAR_0->pack_names);
}

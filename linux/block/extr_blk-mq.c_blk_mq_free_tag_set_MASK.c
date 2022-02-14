
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blk_mq_tag_set {int nr_maps; int * tags; TYPE_1__* map; } ;
struct TYPE_2__ {int * mq_map; } ;


 int FUNC_0 (struct blk_mq_tag_set*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct blk_mq_tag_set*) ;

void FUNC_3(struct blk_mq_tag_set *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < FUNC_2(VAR_0); VAR_1++)
  FUNC_0(VAR_0, VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_maps; VAR_2++) {
  FUNC_1(VAR_0->map[VAR_2].mq_map);
  VAR_0->map[VAR_2].mq_map = ((void*)0);
 }

 FUNC_1(VAR_0->tags);
 VAR_0->tags = ((void*)0);
}

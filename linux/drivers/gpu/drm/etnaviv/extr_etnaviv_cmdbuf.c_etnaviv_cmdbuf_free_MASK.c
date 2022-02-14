
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_cmdbuf_suballoc {int free_space; int free_event; int lock; int granule_map; } ;
struct etnaviv_cmdbuf {int suballoc_offset; int size; struct etnaviv_cmdbuf_suballoc* suballoc; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct etnaviv_cmdbuf *VAR_1)
{
 struct etnaviv_cmdbuf_suballoc *VAR_2 = VAR_1->suballoc;
 int VAR_3 = FUNC_4(FUNC_0(VAR_1->size, VAR_0) /
     VAR_0);

 FUNC_2(&VAR_2->lock);
 FUNC_1(VAR_2->granule_map,
         VAR_1->suballoc_offset / VAR_0,
         VAR_3);
 VAR_2->free_space = 1;
 FUNC_3(&VAR_2->lock);
 FUNC_5(&VAR_2->free_event);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etnaviv_cmdbuf_suballoc {scalar_t__ vaddr; int lock; int dev; scalar_t__ free_space; int free_event; int granule_map; } ;
struct etnaviv_cmdbuf {int suballoc_offset; scalar_t__ vaddr; int size; struct etnaviv_cmdbuf_suballoc* suballoc; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,scalar_t__,int ) ;

int FUNC_8(struct etnaviv_cmdbuf_suballoc *VAR_3,
   struct etnaviv_cmdbuf *VAR_4, u32 VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_4->suballoc = VAR_3;
 VAR_4->size = VAR_5;

 VAR_7 = FUNC_6(FUNC_0(VAR_5, VAR_1) / VAR_1);
retry:
 FUNC_4(&VAR_3->lock);
 VAR_6 = FUNC_1(VAR_3->granule_map,
     VAR_2, VAR_7);
 if (VAR_6 < 0) {
  VAR_3->free_space = 0;
  FUNC_5(&VAR_3->lock);
  VAR_8 = FUNC_7(VAR_3->free_event,
             VAR_3->free_space,
             FUNC_3(10 * 1000));
  if (!VAR_8) {
   FUNC_2(VAR_3->dev,
    "Timeout waiting for cmdbuf space\n");
   return -VAR_0;
  }
  goto retry;
 }
 FUNC_5(&VAR_3->lock);
 VAR_4->suballoc_offset = VAR_6 * VAR_1;
 VAR_4->vaddr = VAR_3->vaddr + VAR_4->suballoc_offset;

 return 0;
}

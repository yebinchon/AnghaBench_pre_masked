
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {unsigned int nr_zones; int seq_zones_bitmap; int seq_zones_wlock; int node; } ;
struct gendisk {int disk_name; struct request_queue* queue; } ;
struct blk_zone {scalar_t__ type; } ;
typedef unsigned int sector_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (struct request_queue*,int ) ;
 unsigned long* FUNC_2 (int ,unsigned int) ;
 struct blk_zone* FUNC_3 (unsigned int*) ;
 int FUNC_4 (struct request_queue*) ;
 int FUNC_5 (struct request_queue*) ;
 int FUNC_6 (struct request_queue*) ;
 int FUNC_7 (struct request_queue*) ;
 unsigned int FUNC_8 (struct request_queue*) ;
 int FUNC_9 (struct gendisk*,unsigned int,struct blk_zone*,unsigned int*) ;
 int FUNC_10 (struct gendisk*) ;
 int FUNC_11 (unsigned long*) ;
 int FUNC_12 (struct blk_zone*) ;
 int FUNC_13 (unsigned int) ;
 unsigned int FUNC_14 () ;
 unsigned int FUNC_15 (unsigned int,unsigned int) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (struct request_queue*) ;
 int FUNC_18 (unsigned int,unsigned long*) ;
 int FUNC_19 (int ,unsigned long*) ;

int FUNC_20(struct gendisk *VAR_3)
{
 struct request_queue *VAR_4 = VAR_3->queue;
 unsigned int VAR_5 = FUNC_1(VAR_4, FUNC_10(VAR_3));
 unsigned long *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 unsigned int VAR_8, VAR_9 = 0, VAR_10 = 0, VAR_11;
 struct blk_zone *VAR_12 = ((void*)0);
 unsigned int VAR_13;
 sector_t VAR_14 = 0;
 int VAR_15 = 0;





 if (!FUNC_17(VAR_4)) {
  VAR_4->nr_zones = VAR_5;
  return 0;
 }





 VAR_13 = FUNC_14();

 if (!FUNC_7(VAR_4) || !VAR_5) {
  VAR_5 = 0;
  goto update;
 }


 VAR_15 = -VAR_2;
 VAR_6 = FUNC_2(VAR_4->node, VAR_5);
 if (!VAR_6)
  goto out;
 VAR_7 = FUNC_2(VAR_4->node, VAR_5);
 if (!VAR_7)
  goto out;


 VAR_9 = VAR_5;
 VAR_12 = FUNC_3(&VAR_9);
 if (!VAR_12)
  goto out;

 while (VAR_10 < VAR_5) {
  VAR_11 = FUNC_15(VAR_5 - VAR_10, VAR_9);
  VAR_15 = FUNC_9(VAR_3, VAR_14, VAR_12, &VAR_11);
  if (VAR_15)
   goto out;
  if (!VAR_11)
   break;
  for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
   if (VAR_12[VAR_8].type != VAR_0)
    FUNC_18(VAR_10, VAR_7);
   VAR_10++;
  }
  VAR_14 += VAR_11 * FUNC_8(VAR_4);
 }

 if (FUNC_0(VAR_10 != VAR_5)) {
  VAR_15 = -VAR_1;
  goto out;
 }

update:





 FUNC_4(VAR_4);
 VAR_4->nr_zones = VAR_5;
 FUNC_19(VAR_4->seq_zones_wlock, VAR_6);
 FUNC_19(VAR_4->seq_zones_bitmap, VAR_7);
 FUNC_5(VAR_4);

out:
 FUNC_13(VAR_13);

 FUNC_12(VAR_12);
 FUNC_11(VAR_6);
 FUNC_11(VAR_7);

 if (VAR_15) {
  FUNC_16("%s: failed to revalidate zones\n", VAR_3->disk_name);
  FUNC_4(VAR_4);
  FUNC_6(VAR_4);
  FUNC_5(VAR_4);
 }

 return VAR_15;
}

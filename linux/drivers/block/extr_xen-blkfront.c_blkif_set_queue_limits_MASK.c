
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int discard_alignment; int discard_granularity; } ;
struct request_queue {TYPE_1__ limits; } ;
struct gendisk {int dummy; } ;
struct blkfront_info {int physical_sector_size; int sector_size; scalar_t__ feature_secdiscard; int discard_alignment; int discard_granularity; scalar_t__ feature_discard; scalar_t__ max_indirect_segments; struct gendisk* gd; struct request_queue* rq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct request_queue*,int) ;
 int FUNC_1 (int ,struct request_queue*) ;
 int FUNC_2 (struct request_queue*,int ) ;
 int FUNC_3 (struct request_queue*,int ) ;
 int FUNC_4 (struct request_queue*,unsigned int) ;
 int FUNC_5 (struct request_queue*,scalar_t__) ;
 int FUNC_6 (struct request_queue*,unsigned int) ;
 int FUNC_7 (struct request_queue*,int ) ;
 int FUNC_8 (struct request_queue*,scalar_t__) ;
 int FUNC_9 (struct gendisk*) ;

__attribute__((used)) static void FUNC_10(struct blkfront_info *VAR_7)
{
 struct request_queue *VAR_8 = VAR_7->rq;
 struct gendisk *VAR_9 = VAR_7->gd;
 unsigned int VAR_10 = VAR_7->max_indirect_segments ? :
    VAR_0;

 FUNC_1(VAR_5, VAR_8);

 if (VAR_7->feature_discard) {
  FUNC_1(VAR_3, VAR_8);
  FUNC_3(VAR_8, FUNC_9(VAR_9));
  VAR_8->limits.discard_granularity = VAR_7->discard_granularity;
  VAR_8->limits.discard_alignment = VAR_7->discard_alignment;
  if (VAR_7->feature_secdiscard)
   FUNC_1(VAR_4, VAR_8);
 }


 FUNC_2(VAR_8, VAR_7->sector_size);
 FUNC_7(VAR_8, VAR_7->physical_sector_size);
 FUNC_4(VAR_8, (VAR_10 * VAR_6) / 512);


 FUNC_8(VAR_8, VAR_2 - 1);
 FUNC_5(VAR_8, VAR_2);


 FUNC_6(VAR_8, VAR_10 / VAR_1);


 FUNC_0(VAR_8, 511);
}

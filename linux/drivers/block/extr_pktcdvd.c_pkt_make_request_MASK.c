
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {struct pktcdvd_device* queuedata; } ;
struct TYPE_3__ {scalar_t__ size; } ;
struct pktcdvd_device {TYPE_1__ settings; int flags; } ;
struct TYPE_4__ {scalar_t__ bi_sector; int bi_size; } ;
struct bio {TYPE_2__ bi_iter; } ;
typedef scalar_t__ sector_t ;
typedef int blk_qc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct bio*,struct bio*) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,char*) ;
 scalar_t__ FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*) ;
 struct bio* FUNC_6 (struct bio*,scalar_t__,int ,int *) ;
 int FUNC_7 (struct request_queue*,struct bio**) ;
 scalar_t__ FUNC_8 (scalar_t__,struct pktcdvd_device*) ;
 int VAR_6 ;
 int FUNC_9 (int,struct pktcdvd_device*,char*,unsigned long long,unsigned long long) ;
 int FUNC_10 (struct pktcdvd_device*,char*) ;
 int FUNC_11 (struct pktcdvd_device*,struct bio*) ;
 int FUNC_12 (struct request_queue*,struct bio*) ;
 int FUNC_13 (struct pktcdvd_device*,char*,unsigned long long) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static blk_qc_t FUNC_16(struct request_queue *VAR_7, struct bio *VAR_8)
{
 struct pktcdvd_device *VAR_9;
 char VAR_10[VAR_0];
 struct bio *VAR_11;

 FUNC_7(VAR_7, &VAR_8);

 VAR_9 = VAR_7->queuedata;
 if (!VAR_9) {
  FUNC_14("%s incorrect request queue\n", FUNC_3(VAR_8, VAR_10));
  goto end_io;
 }

 FUNC_9(2, VAR_9, "start = %6llx stop = %6llx\n",
  (unsigned long long)VAR_8->bi_iter.bi_sector,
  (unsigned long long)FUNC_4(VAR_8));




 if (FUNC_2(VAR_8) == VAR_5) {
  FUNC_11(VAR_9, VAR_8);
  return VAR_1;
 }

 if (!FUNC_15(VAR_4, &VAR_9->flags)) {
  FUNC_13(VAR_9, "WRITE for ro device (%llu)\n",
      (unsigned long long)VAR_8->bi_iter.bi_sector);
  goto end_io;
 }

 if (!VAR_8->bi_iter.bi_size || (VAR_8->bi_iter.bi_size % VAR_2)) {
  FUNC_10(VAR_9, "wrong bio size\n");
  goto end_io;
 }

 do {
  sector_t VAR_12 = FUNC_8(VAR_8->bi_iter.bi_sector, VAR_9);
  sector_t VAR_13 = FUNC_8(FUNC_4(VAR_8) - 1, VAR_9);

  if (VAR_13 != VAR_12) {
   FUNC_0(VAR_13 != VAR_12 + VAR_9->settings.size);

   VAR_11 = FUNC_6(VAR_8, VAR_13 -
       VAR_8->bi_iter.bi_sector,
       VAR_3, &VAR_6);
   FUNC_1(VAR_11, VAR_8);
  } else {
   VAR_11 = VAR_8;
  }

  FUNC_12(VAR_7, VAR_11);
 } while (VAR_11 != VAR_8);

 return VAR_1;
end_io:
 FUNC_5(VAR_8);
 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r5l_recovery_ctx {int pos; int meta_page; } ;
struct r5l_payload_flush {int size; } ;
struct TYPE_4__ {int type; } ;
struct r5l_payload_data_parity {int size; TYPE_2__ header; int * checksum; } ;
struct r5l_meta_block {int meta_size; } ;
struct r5l_log {TYPE_1__* rdev; } ;
struct r5conf {int max_degraded; } ;
struct page {int dummy; } ;
struct mddev {struct r5conf* private; } ;
typedef int sector_t ;
typedef int __le32 ;
struct TYPE_3__ {struct mddev* mddev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct page* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct r5l_meta_block* FUNC_3 (int ) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct r5l_log*,struct r5l_recovery_ctx*,struct page*,int,int ) ;
 int FUNC_6 (struct r5l_log*,int,int) ;

__attribute__((used)) static int
FUNC_7(struct r5l_log *VAR_8,
      struct r5l_recovery_ctx *VAR_9)
{
 struct mddev *VAR_10 = VAR_8->rdev->mddev;
 struct r5conf *VAR_11 = VAR_10->private;
 struct r5l_meta_block *VAR_12 = FUNC_3(VAR_9->meta_page);
 sector_t VAR_13 = sizeof(struct r5l_meta_block);
 sector_t VAR_14 = FUNC_6(VAR_8, VAR_9->pos, VAR_0);
 struct page *VAR_15;
 struct r5l_payload_data_parity *VAR_16;
 struct r5l_payload_flush *VAR_17;

 VAR_15 = FUNC_0(VAR_3);
 if (!VAR_15)
  return -VAR_2;

 while (VAR_13 < FUNC_2(VAR_12->meta_size)) {
  VAR_16 = (void *)VAR_12 + VAR_13;
  VAR_17 = (void *)VAR_12 + VAR_13;

  if (FUNC_1(VAR_16->header.type) == VAR_5) {
   if (FUNC_5(
        VAR_8, VAR_9, VAR_15, VAR_14,
        VAR_16->checksum[0]) < 0)
    goto mismatch;
  } else if (FUNC_1(VAR_16->header.type) == VAR_7) {
   if (FUNC_5(
        VAR_8, VAR_9, VAR_15, VAR_14,
        VAR_16->checksum[0]) < 0)
    goto mismatch;
   if (VAR_11->max_degraded == 2 &&
       FUNC_5(
        VAR_8, VAR_9, VAR_15,
        FUNC_6(VAR_8, VAR_14,
       VAR_0),
        VAR_16->checksum[1]) < 0)
    goto mismatch;
  } else if (FUNC_1(VAR_16->header.type) == VAR_6) {

  } else
   goto mismatch;

  if (FUNC_1(VAR_16->header.type) == VAR_6) {
   VAR_13 += sizeof(struct r5l_payload_flush) +
    FUNC_2(VAR_17->size);
  } else {

   VAR_14 = FUNC_6(VAR_8, VAR_14,
        FUNC_2(VAR_16->size));
   VAR_13 += sizeof(struct r5l_payload_data_parity) +
    sizeof(__le32) *
    (FUNC_2(VAR_16->size) >> (VAR_4 - 9));
  }

 }

 FUNC_4(VAR_15);
 return 0;

mismatch:
 FUNC_4(VAR_15);
 return -VAR_1;
}

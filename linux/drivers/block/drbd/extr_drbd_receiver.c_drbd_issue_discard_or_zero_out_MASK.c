
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int discard_granularity; int max_discard_sectors; } ;
struct request_queue {TYPE_2__ limits; } ;
struct drbd_device {TYPE_1__* ldev; } ;
struct block_device {int dummy; } ;
typedef unsigned int sector_t ;
struct TYPE_3__ {struct block_device* backing_bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct block_device*) ;
 struct request_queue* FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*,unsigned int,unsigned int,int ,int ) ;
 int FUNC_3 (struct block_device*,unsigned int,unsigned int,int ,int ) ;
 unsigned int FUNC_4 (int,unsigned int) ;
 unsigned int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct drbd_device *VAR_4, sector_t VAR_5, unsigned int VAR_6, int VAR_7)
{
 struct block_device *VAR_8 = VAR_4->ldev->backing_bdev;
 struct request_queue *VAR_9 = FUNC_1(VAR_8);
 sector_t VAR_10, VAR_11;
 unsigned int VAR_12, VAR_13;
 int VAR_14;
 int VAR_15 = 0;

 if ((VAR_7 & VAR_2) || !(VAR_7 & VAR_1))
  goto zero_out;


 VAR_13 = FUNC_4(VAR_9->limits.discard_granularity >> 9, 1U);
 VAR_14 = (FUNC_0(VAR_8) >> 9) % VAR_13;

 VAR_12 = FUNC_5(VAR_9->limits.max_discard_sectors, (1U << 22));
 VAR_12 -= VAR_12 % VAR_13;
 if (FUNC_7(!VAR_12))
  goto zero_out;

 if (VAR_6 < VAR_13)
  goto zero_out;

 VAR_10 = VAR_5;
 if (FUNC_6(VAR_10, VAR_13) != VAR_14) {
  if (VAR_6 < 2*VAR_13)
   goto zero_out;

  VAR_10 = VAR_5 + VAR_13 - VAR_14;
  VAR_10 = VAR_5 + VAR_13 - FUNC_6(VAR_10, VAR_13);

  VAR_11 = VAR_10 - VAR_5;


  VAR_15 |= FUNC_3(VAR_8, VAR_5, VAR_11, VAR_3, 0);
  VAR_6 -= VAR_11;
  VAR_5 = VAR_10;
 }
 while (VAR_6 >= VAR_12) {
  VAR_15 |= FUNC_2(VAR_8, VAR_5, VAR_12, VAR_3, 0);
  VAR_6 -= VAR_12;
  VAR_5 += VAR_12;
 }
 if (VAR_6) {




  VAR_11 = VAR_6;
  VAR_11 -= (unsigned int)VAR_11 % VAR_13;
  if (VAR_11) {
   VAR_15 |= FUNC_2(VAR_8, VAR_5, VAR_11, VAR_3, 0);
   VAR_6 -= VAR_11;
   VAR_5 += VAR_11;
  }
 }
 zero_out:
 if (VAR_6) {
  VAR_15 |= FUNC_3(VAR_8, VAR_5, VAR_6, VAR_3,
    (VAR_7 & VAR_1) ? 0 : VAR_0);
 }
 return VAR_15 != 0;
}

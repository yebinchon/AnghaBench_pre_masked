
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct st_lsm6dsx_sensor {int sip; scalar_t__ ts_ref; } ;
struct st_lsm6dsx_hw {int sip; int ts_sip; int dev; int * iio_devs; int * buff; TYPE_3__* settings; } ;
typedef int s64 ;
typedef int fifo_status ;
typedef int data ;
typedef int __le16 ;
struct TYPE_4__ {int mask; int addr; } ;
struct TYPE_5__ {TYPE_1__ fifo_diff; } ;
struct TYPE_6__ {TYPE_2__ fifo_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct st_lsm6dsx_sensor* FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*,int *,int) ;
 int FUNC_6 (struct st_lsm6dsx_hw*,int ,int *,int,int ) ;
 int FUNC_7 (struct st_lsm6dsx_hw*,int ,int*,int) ;
 int FUNC_8 (struct st_lsm6dsx_hw*) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct st_lsm6dsx_hw *VAR_9)
{
 u16 VAR_10, VAR_11 = VAR_9->sip * VAR_7;
 u16 VAR_12 = VAR_9->settings->fifo_ops.fifo_diff.mask;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 struct st_lsm6dsx_sensor *VAR_19, *VAR_20;
 u8 VAR_21[VAR_4];
 u8 VAR_22[VAR_4];
 bool VAR_23 = 0;
 __le16 VAR_24;
 s64 VAR_25 = 0;

 VAR_13 = FUNC_7(VAR_9,
         VAR_9->settings->fifo_ops.fifo_diff.addr,
         &VAR_24, sizeof(VAR_24));
 if (VAR_13 < 0) {
  FUNC_1(VAR_9->dev, "failed to read fifo status (err=%d)\n",
   VAR_13);
  return VAR_13;
 }

 if (VAR_24 & FUNC_0(VAR_1))
  return 0;

 VAR_10 = (FUNC_4(VAR_24) & VAR_12) *
     VAR_0;
 VAR_10 = (VAR_10 / VAR_11) * VAR_11;

 VAR_19 = FUNC_2(VAR_9->iio_devs[VAR_2]);
 VAR_20 = FUNC_2(VAR_9->iio_devs[VAR_3]);

 for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17 += VAR_11) {
  VAR_13 = FUNC_6(VAR_9, VAR_6,
         VAR_9->buff, VAR_11,
         VAR_5);
  if (VAR_13 < 0) {
   FUNC_1(VAR_9->dev,
    "failed to read pattern from fifo (err=%d)\n",
    VAR_13);
   return VAR_13;
  }
  VAR_15 = VAR_20->sip;
  VAR_14 = VAR_19->sip;
  VAR_16 = VAR_9->ts_sip;
  VAR_18 = 0;

  while (VAR_14 > 0 || VAR_15 > 0) {
   if (VAR_15 > 0) {
    FUNC_5(VAR_21, &VAR_9->buff[VAR_18],
           VAR_7);
    VAR_18 += VAR_7;
   }
   if (VAR_14 > 0) {
    FUNC_5(VAR_22, &VAR_9->buff[VAR_18],
           VAR_7);
    VAR_18 += VAR_7;
   }

   if (VAR_16-- > 0) {
    u8 VAR_26[VAR_7];

    FUNC_5(VAR_26, &VAR_9->buff[VAR_18], sizeof(VAR_26));






    VAR_25 = VAR_26[1] << 16 | VAR_26[0] << 8 | VAR_26[3];






    if (!VAR_23 && VAR_25 >= 0xff0000)
     VAR_23 = 1;
    VAR_25 *= VAR_8;

    VAR_18 += VAR_7;
   }

   if (VAR_15-- > 0)
    FUNC_3(
     VAR_9->iio_devs[VAR_3],
     VAR_21, VAR_20->ts_ref + VAR_25);
   if (VAR_14-- > 0)
    FUNC_3(
     VAR_9->iio_devs[VAR_2],
     VAR_22, VAR_19->ts_ref + VAR_25);
  }
 }

 if (FUNC_9(VAR_23)) {
  VAR_13 = FUNC_8(VAR_9);
  if (VAR_13 < 0) {
   FUNC_1(VAR_9->dev, "failed to reset hw ts (err=%d)\n",
    VAR_13);
   return VAR_13;
  }
 }
 return VAR_17;
}

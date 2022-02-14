
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct st_lsm6dsx_hw {int sip; int* buff; int dev; TYPE_3__* settings; } ;
typedef int s64 ;
typedef int fifo_status ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_4__ {int mask; int addr; } ;
struct TYPE_5__ {TYPE_1__ fifo_diff; } ;
struct TYPE_6__ {TYPE_2__ fifo_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int*,int ) ;
 int FUNC_4 (struct st_lsm6dsx_hw*,int,int*,int) ;
 int FUNC_5 (struct st_lsm6dsx_hw*,int ,int*,int,int ) ;
 int FUNC_6 (struct st_lsm6dsx_hw*,int ,int *,int) ;
 int FUNC_7 (struct st_lsm6dsx_hw*) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct st_lsm6dsx_hw *VAR_8)
{
 u16 VAR_9 = VAR_8->sip * VAR_4;
 u16 VAR_10, VAR_11;
 u8 VAR_12[VAR_0], VAR_13;
 bool VAR_14 = 0;
 int VAR_15, VAR_16, VAR_17;
 __le16 VAR_18;
 s64 VAR_19 = 0;

 VAR_16 = FUNC_6(VAR_8,
         VAR_8->settings->fifo_ops.fifo_diff.addr,
         &VAR_18, sizeof(VAR_18));
 if (VAR_16 < 0) {
  FUNC_0(VAR_8->dev, "failed to read fifo status (err=%d)\n",
   VAR_16);
  return VAR_16;
 }

 VAR_11 = VAR_8->settings->fifo_ops.fifo_diff.mask;
 VAR_10 = (FUNC_1(VAR_18) & VAR_11) *
     VAR_4;
 if (!VAR_10)
  return 0;

 for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17 += VAR_9) {
  VAR_16 = FUNC_5(VAR_8,
         VAR_2,
         VAR_8->buff, VAR_9,
         VAR_1);
  if (VAR_16 < 0) {
   FUNC_0(VAR_8->dev,
    "failed to read pattern from fifo (err=%d)\n",
    VAR_16);
   return VAR_16;
  }

  for (VAR_15 = 0; VAR_15 < VAR_9;
       VAR_15 += VAR_4) {
   FUNC_3(VAR_12, &VAR_8->buff[VAR_15 + VAR_5],
          VAR_3);

   VAR_13 = VAR_8->buff[VAR_15] >> 3;
   if (VAR_13 == VAR_7) {






    VAR_19 = FUNC_2(*((__le32 *)VAR_12));






    if (!VAR_14 && VAR_19 >= 0xffff0000)
     VAR_14 = 1;
    VAR_19 *= VAR_6;
   } else {
    FUNC_4(VAR_8, VAR_13, VAR_12,
           VAR_19);
   }
  }
 }

 if (FUNC_8(VAR_14)) {
  VAR_16 = FUNC_7(VAR_8);
  if (VAR_16 < 0)
   return VAR_16;
 }
 return VAR_17;
}

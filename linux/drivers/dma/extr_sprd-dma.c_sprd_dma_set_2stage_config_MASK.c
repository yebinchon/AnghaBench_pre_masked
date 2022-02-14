
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int dev; } ;
struct sprd_dma_dev {TYPE_2__ dma_dev; } ;
struct TYPE_3__ {int chan; } ;
struct sprd_dma_chn {int chn_num; int chn_mode; int int_type; int trg_mode; TYPE_1__ vc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct sprd_dma_dev*,int ,int,int) ;
 struct sprd_dma_dev* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct sprd_dma_chn *VAR_11)
{
 struct sprd_dma_dev *VAR_12 = FUNC_3(&VAR_11->vc.chan);
 u32 VAR_13, VAR_14 = VAR_11->chn_num + 1;

 switch (VAR_11->chn_mode) {
 case 129:
  VAR_13 = VAR_14 & VAR_7;
  VAR_13 |= FUNC_0(VAR_11->trg_mode - 1) << VAR_9;
  VAR_13 |= VAR_1;
  if (VAR_11->int_type != VAR_10)
   VAR_13 |= VAR_8;

  FUNC_2(VAR_12, VAR_2, VAR_13, VAR_13);
  break;

 case 128:
  VAR_13 = VAR_14 & VAR_7;
  VAR_13 |= FUNC_0(VAR_11->trg_mode - 1) << VAR_9;
  VAR_13 |= VAR_1;
  if (VAR_11->int_type != VAR_10)
   VAR_13 |= VAR_8;

  FUNC_2(VAR_12, VAR_3, VAR_13, VAR_13);
  break;

 case 131:
  VAR_13 = (VAR_14 << VAR_5) &
   VAR_4;
  VAR_13 |= VAR_1;
  if (VAR_11->int_type != VAR_10)
   VAR_13 |= VAR_6;

  FUNC_2(VAR_12, VAR_2, VAR_13, VAR_13);
  break;

 case 130:
  VAR_13 = (VAR_14 << VAR_5) &
   VAR_4;
  VAR_13 |= VAR_1;
  if (VAR_11->int_type != VAR_10)
   VAR_13 |= VAR_6;

  FUNC_2(VAR_12, VAR_3, VAR_13, VAR_13);
  break;

 default:
  FUNC_1(VAR_12->dma_dev.dev, "invalid channel mode setting %d\n",
   VAR_11->chn_mode);
  return -VAR_0;
 }

 return 0;
}

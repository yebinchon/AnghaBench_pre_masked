
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ipu_channel_param {int dummy; } ipu_channel_param ;
typedef int uint32_t ;
struct ipu {long channel_init_mask; int lock; int dev; } ;
struct TYPE_2__ {int chan_id; } ;
struct idmac_channel {int desc; TYPE_1__ dma_chan; union ipu_channel_param params; } ;
struct idmac {int dummy; } ;
typedef enum ipu_channel { ____Placeholder_ipu_channel } ipu_channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ipu*) ;
 int FUNC_2 (struct idmac_channel*,int) ;
 int FUNC_3 (struct ipu*,int ) ;
 int FUNC_4 (struct ipu*,int ) ;
 int FUNC_5 (struct ipu*,int,int ) ;
 int FUNC_6 (struct ipu*,int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ipu*,union ipu_channel_param*,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 struct ipu* FUNC_11 (struct idmac*) ;

__attribute__((used)) static int FUNC_12(struct idmac *VAR_6, struct idmac_channel *VAR_7)
{
 union ipu_channel_param *VAR_8 = &VAR_7->params;
 uint32_t VAR_9;
 enum ipu_channel VAR_10 = VAR_7->dma_chan.chan_id;
 unsigned long VAR_11;
 uint32_t VAR_12;
 struct ipu *VAR_13 = FUNC_11(VAR_6);
 int VAR_14 = 0, VAR_15 = 0;

 FUNC_0(VAR_13->dev, "init channel = %d\n", VAR_10);

 if (VAR_10 != 129 && VAR_10 != 128 &&
     VAR_10 != 130)
  return -VAR_0;

 FUNC_9(&VAR_13->lock, VAR_11);

 switch (VAR_10) {
 case 130:
  VAR_15 = 16;
  VAR_12 = FUNC_3(VAR_13, VAR_2);
  FUNC_5(VAR_13, VAR_12 & ~VAR_3, VAR_2);
  break;
 case 131:
  VAR_15 = 16;
  VAR_12 = FUNC_4(VAR_13, VAR_5);
  FUNC_6(VAR_13, VAR_12 & ~VAR_1, VAR_5);
  VAR_14 = FUNC_8(VAR_13, VAR_8, 1);
  break;
 case 129:
 case 128:
  VAR_15 = 4;
 default:
  break;
 }

 VAR_13->channel_init_mask |= 1L << VAR_10;


 VAR_9 = FUNC_4(VAR_13, VAR_4) |
  FUNC_7(VAR_10);
 FUNC_6(VAR_13, VAR_9, VAR_4);

 FUNC_10(&VAR_13->lock, VAR_11);

 if (VAR_15 && !VAR_7->desc)
  VAR_14 = FUNC_2(VAR_7, VAR_15);

 FUNC_1(VAR_13);

 return VAR_14;
}

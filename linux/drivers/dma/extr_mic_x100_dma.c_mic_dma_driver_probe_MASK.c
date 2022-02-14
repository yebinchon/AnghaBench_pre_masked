
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mic_dma_device {int dbg_dir; } ;
struct TYPE_2__ {scalar_t__ device; } ;
struct mbus_device {int dev; TYPE_1__ id; } ;
typedef enum mic_dma_chan_owner { ____Placeholder_mic_dma_chan_owner } mic_dma_chan_owner ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (char*,int,int ,struct mic_dma_device*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct mic_dma_device*) ;
 scalar_t__ VAR_3 ;
 struct mic_dma_device* FUNC_4 (struct mbus_device*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct mbus_device *VAR_5)
{
 struct mic_dma_device *VAR_6;
 enum mic_dma_chan_owner VAR_7;

 if (VAR_0 == VAR_5->id.device)
  VAR_7 = VAR_2;
 else
  VAR_7 = VAR_1;

 VAR_6 = FUNC_4(VAR_5, VAR_7);
 FUNC_3(&VAR_5->dev, VAR_6);

 if (VAR_3) {
  VAR_6->dbg_dir = FUNC_0(FUNC_2(&VAR_5->dev),
         VAR_3);
  FUNC_1("mic_dma_reg", 0444, VAR_6->dbg_dir,
        VAR_6, &VAR_4);
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_mdmac_device {int ddev; scalar_t__ reg_base; struct uniphier_mdmac_chan* channels; } ;
struct TYPE_2__ {int desc_free; } ;
struct uniphier_mdmac_chan {int chan_id; TYPE_1__ vc; scalar_t__ reg_ch_base; struct uniphier_mdmac_device* mdev; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (struct device*,int ,char*,int) ;
 int FUNC_1 (struct device*,int,int ,int ,char*,struct uniphier_mdmac_chan*) ;
 int FUNC_2 (struct platform_device*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_7,
        struct uniphier_mdmac_device *VAR_8,
        int VAR_9)
{
 struct device *VAR_10 = &VAR_7->dev;
 struct uniphier_mdmac_chan *VAR_11 = &VAR_8->channels[VAR_9];
 char *VAR_12;
 int VAR_13, VAR_14;

 VAR_13 = FUNC_2(VAR_7, VAR_9);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = FUNC_0(VAR_10, VAR_1, "uniphier-mio-dmac-ch%d",
      VAR_9);
 if (!VAR_12)
  return -VAR_0;

 VAR_14 = FUNC_1(VAR_10, VAR_13, VAR_6,
          VAR_2, VAR_12, VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_11->mdev = VAR_8;
 VAR_11->reg_ch_base = VAR_8->reg_base + VAR_3 +
     VAR_4 * VAR_9;
 VAR_11->chan_id = VAR_9;
 VAR_11->vc.desc_free = VAR_5;
 FUNC_3(&VAR_11->vc, &VAR_8->ddev);

 return 0;
}

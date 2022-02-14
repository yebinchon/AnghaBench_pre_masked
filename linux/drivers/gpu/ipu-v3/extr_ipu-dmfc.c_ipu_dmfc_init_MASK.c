
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipu_soc {struct ipu_dmfc_priv* dmfc_priv; } ;
struct ipu_dmfc_priv {scalar_t__ base; TYPE_1__* channels; int mutex; struct ipu_soc* ipu; struct device* dev; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_4__ {scalar_t__ ipu_channel; } ;
struct TYPE_3__ {int slots; TYPE_2__* data; struct ipu_soc* ipu; struct ipu_dmfc_priv* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct device*,unsigned long,int ) ;
 struct ipu_dmfc_priv* FUNC_1 (struct device*,int,int ) ;
 TYPE_2__* VAR_12 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;

int FUNC_4(struct ipu_soc *VAR_13, struct device *VAR_14, unsigned long VAR_15,
  struct clk *VAR_16)
{
 struct ipu_dmfc_priv *VAR_17;
 int VAR_18;

 VAR_17 = FUNC_1(VAR_14, sizeof(*VAR_17), VAR_7);
 if (!VAR_17)
  return -VAR_6;

 VAR_17->base = FUNC_0(VAR_14, VAR_15, VAR_11);
 if (!VAR_17->base)
  return -VAR_6;

 VAR_17->dev = VAR_14;
 VAR_17->ipu = VAR_13;
 FUNC_2(&VAR_17->mutex);

 VAR_13->dmfc_priv = VAR_17;

 for (VAR_18 = 0; VAR_18 < VAR_3; VAR_18++) {
  VAR_17->channels[VAR_18].priv = VAR_17;
  VAR_17->channels[VAR_18].ipu = VAR_13;
  VAR_17->channels[VAR_18].data = &VAR_12[VAR_18];

  if (VAR_12[VAR_18].ipu_channel == VAR_8 ||
      VAR_12[VAR_18].ipu_channel == VAR_10 ||
      VAR_12[VAR_18].ipu_channel == VAR_9)
   VAR_17->channels[VAR_18].slots = 2;
 }

 FUNC_3(0x00000050, VAR_17->base + VAR_4);
 FUNC_3(0x00005654, VAR_17->base + VAR_0);
 FUNC_3(0x202020f6, VAR_17->base + VAR_5);
 FUNC_3(0x2020f6f6, VAR_17->base + VAR_1);
 FUNC_3(0x00000003, VAR_17->base + VAR_2);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ipu_soc {struct ipu_dp_priv* dp_priv; } ;
struct ipu_dp_priv {TYPE_3__* flow; scalar_t__ base; int mutex; struct ipu_soc* ipu; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int foreground; void* in_cs; } ;
struct TYPE_4__ {void* in_cs; } ;
struct TYPE_6__ {struct ipu_dp_priv* priv; scalar_t__ base; TYPE_2__ foreground; TYPE_1__ background; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct device*,unsigned long,int ) ;
 struct ipu_dp_priv* FUNC_1 (struct device*,int,int ) ;
 scalar_t__* VAR_5 ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ipu_soc *VAR_6, struct device *VAR_7, unsigned long VAR_8)
{
 struct ipu_dp_priv *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_7, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;
 VAR_9->dev = VAR_7;
 VAR_9->ipu = VAR_6;

 VAR_6->dp_priv = VAR_9;

 VAR_9->base = FUNC_0(VAR_7, VAR_8, VAR_4);
 if (!VAR_9->base)
  return -VAR_0;

 FUNC_2(&VAR_9->mutex);

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  VAR_9->flow[VAR_10].background.in_cs = VAR_2;
  VAR_9->flow[VAR_10].foreground.in_cs = VAR_2;
  VAR_9->flow[VAR_10].foreground.foreground = 1;
  VAR_9->flow[VAR_10].base = VAR_9->base + VAR_5[VAR_10];
  VAR_9->flow[VAR_10].priv = VAR_9;
 }

 return 0;
}

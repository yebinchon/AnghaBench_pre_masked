
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipu_soc {struct ipu_dp_priv* dp_priv; } ;
struct ipu_dp_priv {TYPE_1__* flow; } ;
struct ipu_dp {int in_use; } ;
struct TYPE_2__ {struct ipu_dp background; struct ipu_dp foreground; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipu_dp* FUNC_0 (int ) ;
 unsigned int VAR_2 ;

struct ipu_dp *FUNC_1(struct ipu_soc *VAR_3, unsigned int VAR_4)
{
 struct ipu_dp_priv *VAR_5 = VAR_3->dp_priv;
 struct ipu_dp *VAR_6;

 if ((VAR_4 >> 1) >= VAR_2)
  return FUNC_0(-VAR_1);

 if (VAR_4 & 1)
  VAR_6 = &VAR_5->flow[VAR_4 >> 1].foreground;
 else
  VAR_6 = &VAR_5->flow[VAR_4 >> 1].background;

 if (VAR_6->in_use)
  return FUNC_0(-VAR_0);

 VAR_6->in_use = 1;

 return VAR_6;
}

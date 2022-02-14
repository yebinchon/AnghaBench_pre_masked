
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipu_soc {struct ipu_dmfc_priv* dmfc_priv; } ;
struct ipu_dmfc_priv {struct dmfc_channel* channels; } ;
struct dmfc_channel {int dummy; } ;
struct TYPE_2__ {int ipu_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dmfc_channel* FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;

struct dmfc_channel *FUNC_1(struct ipu_soc *VAR_3, int VAR_4)
{
 struct ipu_dmfc_priv *VAR_5 = VAR_3->dmfc_priv;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_2[VAR_6].ipu_channel == VAR_4)
   return &VAR_5->channels[VAR_6];
 return FUNC_0(-VAR_1);
}

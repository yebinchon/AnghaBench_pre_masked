
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vadc_priv {unsigned int nchannels; int dev; struct vadc_channel_prop* chan_props; } ;
struct vadc_channel_prop {unsigned int channel; } ;


 int FUNC_0 (int ,char*,unsigned int) ;

__attribute__((used)) static struct vadc_channel_prop *FUNC_1(struct vadc_priv *VAR_0,
        unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nchannels; VAR_2++)
  if (VAR_0->chan_props[VAR_2].channel == VAR_1)
   return &VAR_0->chan_props[VAR_2];

 FUNC_0(VAR_0->dev, "no such channel %02x\n", VAR_1);

 return ((void*)0);
}

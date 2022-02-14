
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pm8xxx_xoadc {int nchans; struct pm8xxx_chan_info* chans; } ;
struct pm8xxx_chan_info {TYPE_1__* hwchan; } ;
struct TYPE_2__ {scalar_t__ amux_channel; } ;



__attribute__((used)) static struct pm8xxx_chan_info *
FUNC_0(struct pm8xxx_xoadc *VAR_0, u8 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nchans; VAR_2++) {
  struct pm8xxx_chan_info *VAR_3 = &VAR_0->chans[VAR_2];
  if (VAR_3->hwchan->amux_channel == VAR_1)
   return VAR_3;
 }
 return ((void*)0);
}

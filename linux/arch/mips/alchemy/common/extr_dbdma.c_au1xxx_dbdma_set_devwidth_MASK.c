
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dev_flags; int dev_devwidth; } ;
typedef TYPE_1__ dbdev_tab_t ;
struct TYPE_4__ {TYPE_1__* chan_dest; TYPE_1__* chan_src; } ;
typedef TYPE_2__ chan_tab_t ;


 int VAR_0 ;
 int VAR_1 ;

u32 FUNC_0(u32 VAR_2, int VAR_3)
{
 u32 VAR_4;
 chan_tab_t *VAR_5;
 dbdev_tab_t *VAR_6, *VAR_7;

 VAR_5 = *((chan_tab_t **)VAR_2);
 VAR_6 = VAR_5->chan_src;
 VAR_7 = VAR_5->chan_dest;
 VAR_4 = 0;

 if (VAR_6->dev_flags & VAR_0) {
  VAR_4 = VAR_6->dev_devwidth;
  VAR_6->dev_devwidth = VAR_3;
 }
 if (VAR_7->dev_flags & VAR_1) {
  VAR_4 = VAR_7->dev_devwidth;
  VAR_7->dev_devwidth = VAR_3;
 }

 return VAR_4;
}

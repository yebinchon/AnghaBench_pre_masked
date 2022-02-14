
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hdmiphy_configs {int count; TYPE_2__* data; } ;
struct hdmi_context {int dev; TYPE_1__* drv_data; } ;
struct TYPE_4__ {scalar_t__ pixel_clock; } ;
struct TYPE_3__ {struct hdmiphy_configs phy_confs; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct hdmi_context *VAR_1, u32 VAR_2)
{
 const struct hdmiphy_configs *VAR_3 = &VAR_1->drv_data->phy_confs;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++)
  if (VAR_3->data[VAR_4].pixel_clock == VAR_2)
   return VAR_4;

 FUNC_0(VAR_1->dev, "Could not find phy config for %d\n",
     VAR_2);
 return -VAR_0;
}

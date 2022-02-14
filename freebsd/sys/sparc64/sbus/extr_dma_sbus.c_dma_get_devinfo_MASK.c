
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_bus_devinfo {int dummy; } ;
struct dma_devinfo {struct ofw_bus_devinfo const ddi_obdinfo; } ;
typedef int device_t ;


 struct dma_devinfo* FUNC_0 (int ) ;

__attribute__((used)) static const struct ofw_bus_devinfo *
FUNC_1(device_t VAR_0, device_t VAR_1)
{
 struct dma_devinfo *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 return (&VAR_2->ddi_obdinfo);
}

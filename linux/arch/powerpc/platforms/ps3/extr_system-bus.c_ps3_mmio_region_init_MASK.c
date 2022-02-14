
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps3_system_bus_device {int dev_type; } ;
struct ps3_mmio_region {unsigned long bus_addr; unsigned long len; int page_size; int * mmio_ops; struct ps3_system_bus_device* dev; } ;
typedef enum ps3_mmio_page_size { ____Placeholder_ps3_mmio_page_size } ps3_mmio_page_size ;


 int FUNC_0 () ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(struct ps3_system_bus_device *VAR_3,
 struct ps3_mmio_region *VAR_4, unsigned long VAR_5, unsigned long VAR_6,
 enum ps3_mmio_page_size VAR_7)
{
 VAR_4->dev = VAR_3;
 VAR_4->bus_addr = VAR_5;
 VAR_4->len = VAR_6;
 VAR_4->page_size = VAR_7;
 switch (VAR_3->dev_type) {
 case 128:
  VAR_4->mmio_ops = &VAR_2;
  break;
 case 129:
  VAR_4->mmio_ops = &VAR_1;
  break;
 default:
  FUNC_0();
  return -VAR_0;
 }
 return 0;
}

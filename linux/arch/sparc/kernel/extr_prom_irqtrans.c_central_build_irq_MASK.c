
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int start; } ;
struct platform_device {struct resource* resource; } ;
struct device_node {int dummy; } ;


 unsigned int FUNC_0 (int ,unsigned long,unsigned long) ;
 struct platform_device* FUNC_1 (struct device_node*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_5(struct device_node *VAR_0,
          unsigned int VAR_1,
          void *VAR_2)
{
 struct device_node *VAR_3 = VAR_2;
 struct platform_device *VAR_4 = FUNC_1(VAR_3);
 struct resource *VAR_5;
 unsigned long VAR_6, VAR_7;
 u32 VAR_8;

 if (FUNC_2(VAR_0, "eeprom")) {
  VAR_5 = &VAR_4->resource[5];
 } else if (FUNC_2(VAR_0, "zs")) {
  VAR_5 = &VAR_4->resource[4];
 } else if (FUNC_2(VAR_0, "clock-board")) {
  VAR_5 = &VAR_4->resource[3];
 } else {
  return VAR_1;
 }

 VAR_6 = VAR_5->start + 0x00UL;
 VAR_7 = VAR_5->start + 0x10UL;


 FUNC_4(0, VAR_7);
 FUNC_3(VAR_7);

 VAR_8 = FUNC_3(VAR_6);
 VAR_8 &= ~0x80000000;
 FUNC_4(VAR_8, VAR_6);

 return FUNC_0(0, VAR_7, VAR_6);
}

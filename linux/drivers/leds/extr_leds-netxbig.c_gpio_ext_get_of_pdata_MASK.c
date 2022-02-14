
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxbig_gpio_ext {int* addr; int num_addr; int* data; int num_data; int enable; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int* FUNC_1 (struct device*,int,int,int ) ;
 int FUNC_2 (struct device_node*,char*,int) ;
 int FUNC_3 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct device_node *VAR_3,
     struct netxbig_gpio_ext *VAR_4)
{
 int *VAR_5, *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_3, "addr-gpios");
 if (VAR_9 < 0) {
  FUNC_0(VAR_2,
   "Failed to count GPIOs in DT property addr-gpios\n");
  return VAR_9;
 }
 VAR_7 = VAR_9;
 VAR_5 = FUNC_1(VAR_2, VAR_7, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_9 = FUNC_2(VAR_3, "addr-gpios", VAR_10);
  if (VAR_9 < 0)
   return VAR_9;
  VAR_5[VAR_10] = VAR_9;
 }
 VAR_4->addr = VAR_5;
 VAR_4->num_addr = VAR_7;

 VAR_9 = FUNC_3(VAR_3, "data-gpios");
 if (VAR_9 < 0) {
  FUNC_0(VAR_2,
   "Failed to count GPIOs in DT property data-gpios\n");
  return VAR_9;
 }
 VAR_8 = VAR_9;
 VAR_6 = FUNC_1(VAR_2, VAR_8, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  VAR_9 = FUNC_2(VAR_3, "data-gpios", VAR_10);
  if (VAR_9 < 0)
   return VAR_9;
  VAR_6[VAR_10] = VAR_9;
 }
 VAR_4->data = VAR_6;
 VAR_4->num_data = VAR_8;

 VAR_9 = FUNC_2(VAR_3, "enable-gpio", 0);
 if (VAR_9 < 0) {
  FUNC_0(VAR_2,
   "Failed to get GPIO from DT property enable-gpio\n");
  return VAR_9;
 }
 VAR_4->enable = VAR_9;

 return 0;
}

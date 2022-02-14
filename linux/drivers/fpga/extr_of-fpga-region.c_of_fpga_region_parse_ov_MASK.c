
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct fpga_region {scalar_t__ info; struct device dev; } ;
struct fpga_image_info {int flags; int firmware_name; int config_complete_timeout_us; int disable_timeout_us; int enable_timeout_us; struct device_node* overlay; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fpga_image_info* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char const*,int ) ;
 struct fpga_image_info* FUNC_4 (struct device*) ;
 int FUNC_5 (struct fpga_image_info*) ;
 scalar_t__ FUNC_6 (struct device_node*,char*) ;
 int FUNC_7 (struct device_node*,char*,char const**) ;
 int FUNC_8 (struct device_node*,char*,int *) ;

__attribute__((used)) static struct fpga_image_info *FUNC_9(
      struct fpga_region *VAR_6,
      struct device_node *VAR_7)
{
 struct device *VAR_8 = &VAR_6->dev;
 struct fpga_image_info *VAR_9;
 const char *VAR_10;
 int VAR_11;

 if (VAR_6->info) {
  FUNC_2(VAR_8, "Region already has overlay applied.\n");
  return FUNC_0(-VAR_0);
 }






 VAR_11 = FUNC_1(VAR_7);
 if (VAR_11)
  return FUNC_0(VAR_11);

 VAR_9 = FUNC_4(VAR_8);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_9->overlay = VAR_7;


 if (FUNC_6(VAR_7, "partial-fpga-config"))
  VAR_9->flags |= VAR_4;

 if (FUNC_6(VAR_7, "external-fpga-config"))
  VAR_9->flags |= VAR_3;

 if (FUNC_6(VAR_7, "encrypted-fpga-config"))
  VAR_9->flags |= VAR_2;

 if (!FUNC_7(VAR_7, "firmware-name",
         &VAR_10)) {
  VAR_9->firmware_name = FUNC_3(VAR_8, VAR_10,
         VAR_5);
  if (!VAR_9->firmware_name)
   return FUNC_0(-VAR_1);
 }

 FUNC_8(VAR_7, "region-unfreeze-timeout-us",
        &VAR_9->enable_timeout_us);

 FUNC_8(VAR_7, "region-freeze-timeout-us",
        &VAR_9->disable_timeout_us);

 FUNC_8(VAR_7, "config-complete-timeout-us",
        &VAR_9->config_complete_timeout_us);


 if (!VAR_9->firmware_name) {
  VAR_11 = 0;
  goto ret_no_info;
 }





 if (VAR_9->flags & VAR_3) {
  FUNC_2(VAR_8, "error: specified firmware and external-fpga-config");
  VAR_11 = -VAR_0;
  goto ret_no_info;
 }

 return VAR_9;
ret_no_info:
 FUNC_5(VAR_9);
 return FUNC_0(VAR_11);
}

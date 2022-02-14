
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpga_bridge {TYPE_1__* br_ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* enable_show ) (struct fpga_bridge*) ;} ;


 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (struct fpga_bridge*) ;
 struct fpga_bridge* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 struct fpga_bridge *VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = 1;

 if (VAR_3->br_ops && VAR_3->br_ops->enable_show)
  VAR_4 = VAR_3->br_ops->enable_show(VAR_3);

 return FUNC_0(VAR_2, "%s\n", VAR_4 ? "enabled" : "disabled");
}

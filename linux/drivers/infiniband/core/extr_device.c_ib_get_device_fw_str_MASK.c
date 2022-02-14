
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* get_dev_fw_str ) (struct ib_device*,char*) ;} ;
struct ib_device {TYPE_1__ ops; } ;


 int FUNC_0 (struct ib_device*,char*) ;

void FUNC_1(struct ib_device *VAR_0, char *VAR_1)
{
 if (VAR_0->ops.get_dev_fw_str)
  VAR_0->ops.get_dev_fw_str(VAR_0, VAR_1);
 else
  VAR_1[0] = '\0';
}

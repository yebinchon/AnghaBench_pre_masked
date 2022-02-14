
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct fpga_manager {TYPE_1__* mops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* status ) (struct fpga_manager*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (struct fpga_manager*) ;
 struct fpga_manager* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_6,
      struct device_attribute *VAR_7, char *VAR_8)
{
 struct fpga_manager *VAR_9 = FUNC_2(VAR_6);
 u64 VAR_10;
 int VAR_11 = 0;

 if (!VAR_9->mops->status)
  return -VAR_0;

 VAR_10 = VAR_9->mops->status(VAR_9);

 if (VAR_10 & VAR_5)
  VAR_11 += FUNC_0(VAR_8 + VAR_11, "reconfig operation error\n");
 if (VAR_10 & VAR_1)
  VAR_11 += FUNC_0(VAR_8 + VAR_11, "reconfig CRC error\n");
 if (VAR_10 & VAR_3)
  VAR_11 += FUNC_0(VAR_8 + VAR_11, "reconfig incompatible image\n");
 if (VAR_10 & VAR_4)
  VAR_11 += FUNC_0(VAR_8 + VAR_11, "reconfig IP protocol error\n");
 if (VAR_10 & VAR_2)
  VAR_11 += FUNC_0(VAR_8 + VAR_11, "reconfig fifo overflow error\n");

 return VAR_11;
}

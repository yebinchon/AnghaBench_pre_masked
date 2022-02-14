
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t si_type; size_t addr_space; int slave_addr; int irq; int regshift; int regsize; int regspacing; int addr_data; } ;
struct smi_info {TYPE_1__ io; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 char** VAR_0 ;
 struct smi_info* FUNC_0 (struct device*) ;
 char** VAR_1 ;
 int FUNC_1 (char*,int,char*,char*,char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
      struct device_attribute *VAR_3,
      char *VAR_4)
{
 struct smi_info *VAR_5 = FUNC_0(VAR_2);

 return FUNC_1(VAR_4, 200,
   "%s,%s,0x%lx,rsp=%d,rsi=%d,rsh=%d,irq=%d,ipmb=%d\n",
   VAR_1[VAR_5->io.si_type],
   VAR_0[VAR_5->io.addr_space],
   VAR_5->io.addr_data,
   VAR_5->io.regspacing,
   VAR_5->io.regsize,
   VAR_5->io.regshift,
   VAR_5->io.irq,
   VAR_5->io.slave_addr);
}

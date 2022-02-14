
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; int addr_info; int addr_source; } ;
struct smi_info {TYPE_1__ io; } ;
struct ipmi_smi_info {int addr_info; int dev; int addr_src; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, struct ipmi_smi_info *VAR_1)
{
 struct smi_info *VAR_2 = VAR_0;

 VAR_1->addr_src = VAR_2->io.addr_source;
 VAR_1->dev = VAR_2->io.dev;
 VAR_1->addr_info = VAR_2->io.addr_info;
 FUNC_0(VAR_2->io.dev);

 return 0;
}

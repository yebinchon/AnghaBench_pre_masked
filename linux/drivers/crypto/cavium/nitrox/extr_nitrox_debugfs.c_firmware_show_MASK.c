
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct nitrox_device* private; } ;
struct TYPE_2__ {int * fw_name; } ;
struct nitrox_device {TYPE_1__ hw; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct nitrox_device *VAR_2 = VAR_0->private;

 FUNC_0(VAR_0, "Version: %s\n", VAR_2->hw.fw_name[0]);
 FUNC_0(VAR_0, "Version: %s\n", VAR_2->hw.fw_name[1]);
 return 0;
}

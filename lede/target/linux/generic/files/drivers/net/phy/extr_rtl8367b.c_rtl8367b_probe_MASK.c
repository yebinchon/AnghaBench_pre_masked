
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8366_smi {int clk_delay; int cmd_read; int cmd_write; scalar_t__ num_ports; scalar_t__ cpu_port; int num_mib_counters; int mib_counters; int num_vlan_mc; int * ops; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct rtl8366_smi*) ;
 int FUNC_2 (struct rtl8366_smi*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct rtl8366_smi*) ;
 scalar_t__ FUNC_4 (int ,char*,scalar_t__*) ;
 int FUNC_5 (struct platform_device*,struct rtl8366_smi*) ;
 int FUNC_6 (struct rtl8366_smi*) ;
 int FUNC_7 (struct rtl8366_smi*) ;
 struct rtl8366_smi* FUNC_8 (struct platform_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (struct rtl8366_smi*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 struct rtl8366_smi *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_8(VAR_5);
 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);

 VAR_6->clk_delay = 1500;
 VAR_6->cmd_read = 0xb9;
 VAR_6->cmd_write = 0xb8;
 VAR_6->ops = &VAR_4;
 VAR_6->num_ports = VAR_1;
 if (FUNC_4(VAR_5->dev.of_node, "cpu_port", &VAR_6->cpu_port)
     || VAR_6->cpu_port >= VAR_6->num_ports)
  VAR_6->cpu_port = VAR_0;
 VAR_6->num_vlan_mc = VAR_2;
 VAR_6->mib_counters = VAR_3;
 VAR_6->num_mib_counters = FUNC_0(VAR_3);

 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7)
  goto err_free_smi;

 FUNC_5(VAR_5, VAR_6);

 VAR_7 = FUNC_9(VAR_6);
 if (VAR_7)
  goto err_clear_drvdata;

 return 0;

 err_clear_drvdata:
 FUNC_5(VAR_5, ((void*)0));
 FUNC_6(VAR_6);
 err_free_smi:
 FUNC_3(VAR_6);
 return VAR_7;
}

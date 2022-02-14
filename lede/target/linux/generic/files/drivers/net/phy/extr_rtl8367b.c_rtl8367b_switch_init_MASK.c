
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {char* name; int alias; int * ops; int vlans; int ports; int cpu_port; } ;
struct rtl8366_smi {int parent; int cpu_port; struct switch_dev sw_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct switch_dev*,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct rtl8366_smi *VAR_3)
{
 struct switch_dev *VAR_4 = &VAR_3->sw_dev;
 int VAR_5;

 VAR_4->name = "RTL8367B";
 VAR_4->cpu_port = VAR_3->cpu_port;
 VAR_4->ports = VAR_0;
 VAR_4->vlans = VAR_1;
 VAR_4->ops = &VAR_2;
 VAR_4->alias = FUNC_1(VAR_3->parent);

 VAR_5 = FUNC_2(VAR_4, ((void*)0));
 if (VAR_5)
  FUNC_0(VAR_3->parent, "switch registration failed\n");

 return VAR_5;
}

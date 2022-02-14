
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {char* name; int alias; int * ops; int vlans; int ports; int cpu_port; } ;
struct rtl8366_smi {int parent; struct switch_dev sw_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct switch_dev*,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct rtl8366_smi *VAR_4)
{
 struct switch_dev *VAR_5 = &VAR_4->sw_dev;
 int VAR_6;

 VAR_5->name = "RTL8366S";
 VAR_5->cpu_port = VAR_2;
 VAR_5->ports = VAR_0;
 VAR_5->vlans = VAR_1;
 VAR_5->ops = &VAR_3;
 VAR_5->alias = FUNC_1(VAR_4->parent);

 VAR_6 = FUNC_2(VAR_5, ((void*)0));
 if (VAR_6)
  FUNC_0(VAR_4->parent, "switch registration failed\n");

 return VAR_6;
}

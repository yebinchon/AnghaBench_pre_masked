
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {char* name; int mode; } ;
struct TYPE_9__ {TYPE_4__ attr; int * store; int show; } ;
struct TYPE_8__ {TYPE_4__ attr; int store; int show; } ;
struct mlx4_port {scalar_t__ slave; TYPE_3__ smi_enabled; int kobj; TYPE_2__ enable_smi_admin; TYPE_1__* dev; int port_num; } ;
struct TYPE_7__ {int dev; int ib_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,TYPE_4__*) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct mlx4_port *VAR_4)
{
 int VAR_5 = FUNC_2(&VAR_4->dev->ib_dev, VAR_4->port_num) ==
   VAR_0;
 int VAR_6;


 if (VAR_5 || VAR_4->slave == FUNC_0(VAR_4->dev->dev))
  return 0;

 FUNC_3(&VAR_4->smi_enabled.attr);
 VAR_4->smi_enabled.show = VAR_2;
 VAR_4->smi_enabled.store = ((void*)0);
 VAR_4->smi_enabled.attr.name = "smi_enabled";
 VAR_4->smi_enabled.attr.mode = 0444;
 VAR_6 = FUNC_4(&VAR_4->kobj, &VAR_4->smi_enabled.attr);
 if (VAR_6) {
  FUNC_1("failed to create smi_enabled\n");
  return VAR_6;
 }

 FUNC_3(&VAR_4->enable_smi_admin.attr);
 VAR_4->enable_smi_admin.show = VAR_1;
 VAR_4->enable_smi_admin.store = VAR_3;
 VAR_4->enable_smi_admin.attr.name = "enable_smi_admin";
 VAR_4->enable_smi_admin.attr.mode = 0644;
 VAR_6 = FUNC_4(&VAR_4->kobj, &VAR_4->enable_smi_admin.attr);
 if (VAR_6) {
  FUNC_1("failed to create enable_smi_admin\n");
  FUNC_5(&VAR_4->kobj, &VAR_4->smi_enabled.attr);
  return VAR_6;
 }
 return 0;
}

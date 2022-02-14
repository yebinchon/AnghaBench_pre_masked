
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {int dev; TYPE_1__* bus; struct i5100_priv* pvt_info; } ;
struct i5100_priv {int debugfs; int inject_eccmask2; int inject_eccmask1; int inject_deviceptr2; int inject_deviceptr1; int inject_hlinesel; int inject_channel; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,int ,int *,int *) ;
 int FUNC_2 (char*,int,int ,int *) ;
 int FUNC_3 (char*,int,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct mem_ctl_info *VAR_6)
{
 struct i5100_priv *VAR_7 = VAR_6->pvt_info;

 if (!VAR_4)
  return -VAR_0;

 VAR_7->debugfs = FUNC_0(VAR_6->bus->name, VAR_4);

 if (!VAR_7->debugfs)
  return -VAR_1;

 FUNC_3("inject_channel", VAR_2 | VAR_3, VAR_7->debugfs,
    &VAR_7->inject_channel);
 FUNC_3("inject_hlinesel", VAR_2 | VAR_3, VAR_7->debugfs,
    &VAR_7->inject_hlinesel);
 FUNC_3("inject_deviceptr1", VAR_2 | VAR_3, VAR_7->debugfs,
    &VAR_7->inject_deviceptr1);
 FUNC_3("inject_deviceptr2", VAR_2 | VAR_3, VAR_7->debugfs,
    &VAR_7->inject_deviceptr2);
 FUNC_2("inject_eccmask1", VAR_2 | VAR_3, VAR_7->debugfs,
    &VAR_7->inject_eccmask1);
 FUNC_2("inject_eccmask2", VAR_2 | VAR_3, VAR_7->debugfs,
    &VAR_7->inject_eccmask2);
 FUNC_1("inject_enable", VAR_3, VAR_7->debugfs,
    &VAR_6->dev, &VAR_5);

 return 0;

}

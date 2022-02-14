
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hci_dev {int debugfs; } ;
struct TYPE_4__ {int tx_dnld_rdy; int hsmode; int gpio_gap; int psmode; } ;
struct btmrvl_private {TYPE_2__ btmrvl_dev; TYPE_1__* adapter; struct btmrvl_debugfs_data* debugfs_data; } ;
struct btmrvl_debugfs_data {void* status_dir; void* config_dir; } ;
struct TYPE_3__ {int hs_state; int ps_state; int psmode; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,void*,struct btmrvl_private*,int *) ;
 int FUNC_3 (char*,int,void*,int *) ;
 int FUNC_4 (char*,int,void*,int *) ;
 struct btmrvl_private* FUNC_5 (struct hci_dev*) ;
 struct btmrvl_debugfs_data* FUNC_6 (int,int ) ;

void FUNC_7(struct hci_dev *VAR_4)
{
 struct btmrvl_private *VAR_5 = FUNC_5(VAR_4);
 struct btmrvl_debugfs_data *VAR_6;

 if (!VAR_4->debugfs)
  return;

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_0);
 VAR_5->debugfs_data = VAR_6;

 if (!VAR_6) {
  FUNC_0("Can not allocate memory for btmrvl_debugfs_data.");
  return;
 }

 VAR_6->config_dir = FUNC_1("config", VAR_4->debugfs);

 FUNC_3("psmode", 0644, VAR_6->config_dir,
     &VAR_5->btmrvl_dev.psmode);
 FUNC_2("pscmd", 0644, VAR_6->config_dir,
       VAR_5, &VAR_3);
 FUNC_4("gpiogap", 0644, VAR_6->config_dir,
      &VAR_5->btmrvl_dev.gpio_gap);
 FUNC_3("hsmode", 0644, VAR_6->config_dir,
     &VAR_5->btmrvl_dev.hsmode);
 FUNC_2("hscmd", 0644, VAR_6->config_dir,
       VAR_5, &VAR_2);
 FUNC_2("hscfgcmd", 0644, VAR_6->config_dir,
       VAR_5, &VAR_1);

 VAR_6->status_dir = FUNC_1("status", VAR_4->debugfs);
 FUNC_3("curpsmode", 0444, VAR_6->status_dir,
     &VAR_5->adapter->psmode);
 FUNC_3("psstate", 0444, VAR_6->status_dir,
     &VAR_5->adapter->ps_state);
 FUNC_3("hsstate", 0444, VAR_6->status_dir,
     &VAR_5->adapter->hs_state);
 FUNC_3("txdnldready", 0444, VAR_6->status_dir,
     &VAR_5->btmrvl_dev.tx_dnld_rdy);
}

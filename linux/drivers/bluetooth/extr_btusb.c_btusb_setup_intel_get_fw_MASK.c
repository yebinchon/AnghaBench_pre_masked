
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_version {int hw_platform; int hw_variant; int hw_revision; int fw_variant; int fw_revision; int fw_build_num; int fw_build_ww; int fw_build_yy; } ;
struct hci_dev {int dev; } ;
struct firmware {int dummy; } ;
typedef int fwname ;


 int VAR_0 ;
 int FUNC_0 (struct hci_dev*,char*,...) ;
 int FUNC_1 (struct hci_dev*,char*,char*) ;
 int FUNC_2 (struct firmware const**,char*,int *) ;
 int FUNC_3 (char*,int,char*,int,int,...) ;

__attribute__((used)) static const struct firmware *FUNC_4(struct hci_dev *VAR_1,
             struct intel_version *VAR_2)
{
 const struct firmware *VAR_3;
 char VAR_4[64];
 int VAR_5;

 FUNC_3(VAR_4, sizeof(VAR_4),
   "intel/ibt-hw-%x.%x.%x-fw-%x.%x.%x.%x.%x.bseq",
   VAR_2->hw_platform, VAR_2->hw_variant, VAR_2->hw_revision,
   VAR_2->fw_variant, VAR_2->fw_revision, VAR_2->fw_build_num,
   VAR_2->fw_build_ww, VAR_2->fw_build_yy);

 VAR_5 = FUNC_2(&VAR_3, VAR_4, &VAR_1->dev);
 if (VAR_5 < 0) {
  if (VAR_5 == -VAR_0) {
   FUNC_0(VAR_1, "Intel firmware file request failed (%d)",
       VAR_5);
   return ((void*)0);
  }

  FUNC_0(VAR_1, "failed to open Intel firmware file: %s (%d)",
      VAR_4, VAR_5);




  FUNC_3(VAR_4, sizeof(VAR_4), "intel/ibt-hw-%x.%x.bseq",
    VAR_2->hw_platform, VAR_2->hw_variant);
  if (FUNC_2(&VAR_3, VAR_4, &VAR_1->dev) < 0) {
   FUNC_0(VAR_1, "failed to open default fw file: %s",
       VAR_4);
   return ((void*)0);
  }
 }

 FUNC_1(VAR_1, "Intel Bluetooth firmware file: %s", VAR_4);

 return VAR_3;
}

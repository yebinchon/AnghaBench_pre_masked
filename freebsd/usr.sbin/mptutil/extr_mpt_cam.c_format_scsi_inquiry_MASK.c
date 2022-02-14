
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vendor ;
struct scsi_inquiry_data {int revision; int product; int vendor; } ;
struct mpt_standalone_disk {int inqstring; } ;
typedef int rstr ;
typedef int revision ;
typedef int product ;



 int FUNC_0 (struct scsi_inquiry_data*) ;
 scalar_t__ FUNC_1 (struct scsi_inquiry_data*) ;
 scalar_t__ FUNC_2 (struct scsi_inquiry_data*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (struct scsi_inquiry_data*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*,int ,int,int) ;
 int FUNC_5 (char*,int,char*,...) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static void
FUNC_8(struct mpt_standalone_disk *VAR_2,
    struct scsi_inquiry_data *VAR_3)
{
 char VAR_4[16], VAR_5[48], VAR_6[16], VAR_7[12];

 if (FUNC_2(VAR_3))
  return;
 if (FUNC_3(VAR_3) != VAR_1)
  return;
 if (FUNC_1(VAR_3) != VAR_0)
  return;

 FUNC_4(VAR_4, VAR_3->vendor, sizeof(VAR_3->vendor),
     sizeof(VAR_4));
 FUNC_4(VAR_5, VAR_3->product, sizeof(VAR_3->product),
     sizeof(VAR_5));
 FUNC_4(VAR_6, VAR_3->revision, sizeof(VAR_3->revision),
     sizeof(VAR_6));


 if (FUNC_6(VAR_4, "ATA") == 0) {
  FUNC_5(VAR_2->inqstring, sizeof(VAR_2->inqstring),
      "<%s %s> SATA", VAR_5, VAR_6);
  return;
 }

 switch (FUNC_0(VAR_3)) {
 case 128:
  FUNC_7(VAR_7, "SCSI-CCS");
  break;
 case 5:
  FUNC_7(VAR_7, "SAS");
  break;
 default:
  FUNC_5(VAR_7, sizeof (VAR_7), "SCSI-%d",
      FUNC_0(VAR_3));
  break;
 }
 FUNC_5(VAR_2->inqstring, sizeof(VAR_2->inqstring), "<%s %s %s> %s",
     VAR_4, VAR_5, VAR_6, VAR_7);
}

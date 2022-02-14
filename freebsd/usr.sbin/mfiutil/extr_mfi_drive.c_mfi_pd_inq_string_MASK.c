
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vendor ;
struct scsi_inquiry_data {char* vendor; char* product; char* revision; scalar_t__ vendor_specific0; } ;
struct mfi_pd_info {int inquiry_data; } ;
typedef int serial ;
typedef int rstr ;
typedef int revision ;
typedef int product ;
typedef int iqd ;
typedef int inq_string ;



 int FUNC_0 (struct scsi_inquiry_data*) ;
 scalar_t__ FUNC_1 (struct scsi_inquiry_data*) ;
 scalar_t__ FUNC_2 (struct scsi_inquiry_data*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (struct scsi_inquiry_data*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,char*,int,int) ;
 int FUNC_5 (struct scsi_inquiry_data*,int ,int) ;
 int FUNC_6 (char*,int,char*,...) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;

const char *
FUNC_9(struct mfi_pd_info *VAR_3)
{
 struct scsi_inquiry_data VAR_4, *VAR_5 = &VAR_4;
 char VAR_6[16], VAR_7[48], VAR_8[16], VAR_9[12], VAR_10[VAR_1];
 static char VAR_11[64];

 FUNC_5(VAR_5, VAR_3->inquiry_data,
     (sizeof (VAR_4) < sizeof (VAR_3->inquiry_data))?
     sizeof (VAR_4) : sizeof (VAR_3->inquiry_data));
 if (FUNC_2(VAR_5))
  return (((void*)0));
 if (FUNC_3(VAR_5) != VAR_2)
  return (((void*)0));
 if (FUNC_1(VAR_5) != VAR_0)
  return (((void*)0));

 FUNC_4(VAR_6, VAR_5->vendor, sizeof(VAR_5->vendor),
     sizeof(VAR_6));
 FUNC_4(VAR_7, VAR_5->product, sizeof(VAR_5->product),
     sizeof(VAR_7));
 FUNC_4(VAR_8, VAR_5->revision, sizeof(VAR_5->revision),
     sizeof(VAR_8));
 FUNC_4(VAR_10, (char *)VAR_5->vendor_specific0, sizeof(VAR_5->vendor_specific0),
     sizeof(VAR_10));


 if (FUNC_7(VAR_6, "ATA") == 0) {
  FUNC_6(VAR_11, sizeof(VAR_11), "<%s %s serial=%s> SATA",
      VAR_7, VAR_8, VAR_10);
  return (VAR_11);
 }

 switch (FUNC_0(VAR_5)) {
 case 128:
  FUNC_8(VAR_9, "SCSI-CCS");
  break;
 case 5:
  FUNC_8(VAR_9, "SAS");
  break;
 default:
  FUNC_6(VAR_9, sizeof (VAR_9), "SCSI-%d",
      FUNC_0(VAR_5));
  break;
 }
 FUNC_6(VAR_11, sizeof(VAR_11), "<%s %s %s serial=%s> %s", VAR_6,
     VAR_7, VAR_8, VAR_10, VAR_9);
 return (VAR_11);
}

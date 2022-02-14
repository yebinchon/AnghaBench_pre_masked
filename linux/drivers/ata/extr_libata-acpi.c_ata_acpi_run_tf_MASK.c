
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_taskfile {int command; int feature; int device; int lbah; int lbam; int lbal; int nsect; } ;
struct ata_device {int dummy; } ;
struct ata_acpi_gtf {scalar_t__* tf; } ;
typedef int msg ;



 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (struct ata_device*,struct ata_taskfile*,struct ata_taskfile*) ;
 int FUNC_1 (struct ata_device*,struct ata_acpi_gtf const*,struct ata_taskfile*) ;
 int FUNC_2 (struct ata_device*,char const*,char*,int,int,int ,int ,int ,int ,int ,char const*,char*) ;
 unsigned int FUNC_3 (struct ata_device*,struct ata_taskfile*,int *,int ,int *,int ,int ) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_6(struct ata_device *VAR_5,
      const struct ata_acpi_gtf *VAR_6,
      const struct ata_acpi_gtf *VAR_7)
{
 struct ata_taskfile *VAR_8 = ((void*)0);
 struct ata_taskfile VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12;
 const char *VAR_13;
 const char *VAR_14;
 char VAR_15[60];
 int VAR_16;

 if ((VAR_6->tf[0] == 0) && (VAR_6->tf[1] == 0) && (VAR_6->tf[2] == 0)
     && (VAR_6->tf[3] == 0) && (VAR_6->tf[4] == 0) && (VAR_6->tf[5] == 0)
     && (VAR_6->tf[6] == 0))
  return 0;

 FUNC_1(VAR_5, VAR_6, &VAR_9);
 if (VAR_7) {
  FUNC_1(VAR_5, VAR_7, &VAR_10);
  VAR_8 = &VAR_10;
 }

 if (!FUNC_0(VAR_5, &VAR_9, VAR_8)) {
  VAR_11 = VAR_9;
  VAR_12 = FUNC_3(VAR_5, &VAR_11, ((void*)0),
          VAR_0, ((void*)0), 0, 0);

  switch (VAR_12) {
  case 0:
   VAR_13 = VAR_2;
   FUNC_5(VAR_15, sizeof(VAR_15), "succeeded");
   VAR_16 = 1;
   break;

  case 128:
   VAR_13 = VAR_4;
   FUNC_5(VAR_15, sizeof(VAR_15),
     "rejected by device (Stat=0x%02x Err=0x%02x)",
     VAR_11.command, VAR_11.feature);
   VAR_16 = 0;
   break;

  default:
   VAR_13 = VAR_3;
   FUNC_5(VAR_15, sizeof(VAR_15),
     "failed (Emask=0x%x Stat=0x%02x Err=0x%02x)",
     VAR_12, VAR_11.command, VAR_11.feature);
   VAR_16 = -VAR_1;
   break;
  }
 } else {
  VAR_13 = VAR_4;
  FUNC_5(VAR_15, sizeof(VAR_15), "filtered out");
  VAR_16 = 0;
 }
 VAR_14 = FUNC_4(VAR_9.command);

 FUNC_2(VAR_5, VAR_13,
         "ACPI cmd %02x/%02x:%02x:%02x:%02x:%02x:%02x (%s) %s\n",
         VAR_9.command, VAR_9.feature, VAR_9.nsect, VAR_9.lbal,
         VAR_9.lbam, VAR_9.lbah, VAR_9.device,
         (VAR_14 ? VAR_14 : "unknown"), VAR_15);

 return VAR_16;
}

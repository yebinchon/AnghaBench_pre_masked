
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct sg_mapping_iter {char* addr; unsigned int length; } ;
struct scsi_cmnd {int dummy; } ;
struct ata_queued_cmd {struct scsi_cmnd* scsicmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ata_queued_cmd*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct scsi_cmnd*) ;
 int FUNC_10 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_11 (struct sg_mapping_iter*) ;
 int FUNC_12 (struct sg_mapping_iter*,int ,int ,int) ;
 int FUNC_13 (struct sg_mapping_iter*) ;

__attribute__((used)) static void FUNC_14(struct ata_queued_cmd *VAR_2)
{
 struct scsi_cmnd *VAR_3 = VAR_2->scsicmd;
 struct sg_mapping_iter VAR_4;
 unsigned long VAR_5;
 unsigned int VAR_6 = 0;

 FUNC_12(&VAR_4, FUNC_10(VAR_3), FUNC_9(VAR_3),
         VAR_1 | VAR_0);

 FUNC_6(VAR_5);
 while (FUNC_11(&VAR_4)) {
  unsigned int VAR_7 = 0;

  if (VAR_6 == 0) {
   char *VAR_8;
   u32 VAR_9;
   u64 VAR_10, VAR_11;
   u16 VAR_12;


   VAR_8 = VAR_4.addr;
   VAR_9 = FUNC_3(&VAR_8[0]);
   VAR_12 = FUNC_2(&VAR_8[4]);
   VAR_10 = FUNC_4(&VAR_8[8]);
   VAR_11 = FUNC_4(&VAR_8[16]);
   FUNC_7(VAR_9, &VAR_8[0]);
   VAR_8[4] = VAR_12 & 0xf;
   FUNC_8(VAR_10, &VAR_8[8]);
   FUNC_8(VAR_11, &VAR_8[16]);
   VAR_7 += 64;
   VAR_6 += 64;
  }
  while (VAR_7 < VAR_4.length) {
   char *VAR_13;
   u8 VAR_14, VAR_15, VAR_16, VAR_17;
   u64 VAR_18, VAR_19, VAR_20;


   VAR_13 = VAR_4.addr + VAR_7;
   VAR_15 = VAR_13[0] & 0xf;
   VAR_14 = (VAR_13[1] >> 4) & 0xf;
   VAR_16 = (VAR_13[1] & 2);
   VAR_17 = (VAR_13[1] & 1);
   VAR_18 = FUNC_4(&VAR_13[8]);
   VAR_19 = FUNC_4(&VAR_13[16]);
   VAR_20 = FUNC_4(&VAR_13[24]);
   VAR_13[0] = VAR_15;
   VAR_13[1] = (VAR_14 << 4) | VAR_16 | VAR_17;
   FUNC_8(VAR_18, &VAR_13[8]);
   FUNC_8(VAR_19, &VAR_13[16]);
   FUNC_8(VAR_20, &VAR_13[24]);
   FUNC_0(VAR_7 + 64 > VAR_4.length);
   VAR_7 += 64;
   VAR_6 += 64;
  }
 }
 FUNC_13(&VAR_4);
 FUNC_5(VAR_5);

 FUNC_1(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct scsi_cmnd {scalar_t__* cmnd; int cmd_len; int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct ata_device {scalar_t__ class; int cdb_len; } ;
typedef int * ata_xlat_func_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (char*,int,scalar_t__,int) ;
 int * FUNC_2 (struct ata_device*,scalar_t__) ;
 int FUNC_3 (struct ata_device*,struct scsi_cmnd*) ;
 int FUNC_4 (struct ata_device*,struct scsi_cmnd*,int *) ;
 int VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline int FUNC_8(struct scsi_cmnd *VAR_7,
          struct ata_device *VAR_8)
{
 u8 VAR_9 = VAR_7->cmnd[0];
 ata_xlat_func_t VAR_10;
 int VAR_11 = 0;

 if (VAR_8->class == VAR_2 || VAR_8->class == VAR_3) {
  if (FUNC_7(!VAR_7->cmd_len || VAR_7->cmd_len > VAR_8->cdb_len))
   goto bad_cdb_len;

  VAR_10 = FUNC_2(VAR_8, VAR_9);
 } else {
  if (FUNC_7(!VAR_7->cmd_len))
   goto bad_cdb_len;

  VAR_10 = ((void*)0);
  if (FUNC_5((VAR_9 != VAR_1) || !VAR_5)) {

   int VAR_12 = FUNC_0(VAR_9);
   if (FUNC_7(VAR_12 > VAR_7->cmd_len ||
         VAR_12 > VAR_8->cdb_len ||
         VAR_7->cmd_len > VAR_0))
    goto bad_cdb_len;

   VAR_10 = VAR_6;
  } else {

   if (FUNC_7(VAR_7->cmd_len > 16))
    goto bad_cdb_len;

   VAR_10 = FUNC_2(VAR_8, VAR_9);
  }
 }

 if (VAR_10)
  VAR_11 = FUNC_4(VAR_8, VAR_7, VAR_10);
 else
  FUNC_3(VAR_8, VAR_7);

 return VAR_11;

 bad_cdb_len:
 FUNC_1("bad CDB len=%u, scsi_op=0x%02x, max=%u\n",
  VAR_7->cmd_len, VAR_9, VAR_8->cdb_len);
 VAR_7->result = VAR_4 << 16;
 VAR_7->scsi_done(VAR_7);
 return 0;
}

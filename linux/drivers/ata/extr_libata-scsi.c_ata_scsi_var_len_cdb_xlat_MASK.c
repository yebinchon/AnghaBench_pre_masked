
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct scsi_cmnd {int * cmnd; } ;
struct ata_queued_cmd {struct scsi_cmnd* scsicmd; } ;


 scalar_t__ const VAR_0 ;
 unsigned int FUNC_0 (struct ata_queued_cmd*) ;
 scalar_t__ FUNC_1 (int const*) ;

__attribute__((used)) static unsigned int FUNC_2(struct ata_queued_cmd *VAR_1)
{
 struct scsi_cmnd *VAR_2 = VAR_1->scsicmd;
 const u8 *VAR_3 = VAR_2->cmnd;
 const u16 VAR_4 = FUNC_1(&VAR_3[8]);





 if (VAR_4 == VAR_0)
  return FUNC_0(VAR_1);


 return 1;
}

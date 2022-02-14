
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct scsi_cmnd {int* cmnd; int cmd_len; int result; TYPE_1__* device; struct request* request; } ;
struct request {int dummy; } ;
struct ata_queued_cmd {int nbytes; int dev; int hw_tag; int tf; int flags; struct scsi_cmnd* scsicmd; } ;
struct TYPE_2__ {int sector_size; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;



 int VAR_5 ;



 int FUNC_2 (int *,int ,int ,int,unsigned int,int ,int) ;
 int FUNC_3 (struct scsi_cmnd*,int) ;
 int FUNC_4 (int ,struct scsi_cmnd*,int,int) ;
 int FUNC_5 (int ,struct scsi_cmnd*,int ,int,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct request*) ;
 int FUNC_8 (int const*,int *,int*) ;
 int FUNC_9 (int const*,int *,int*) ;
 int FUNC_10 (int const*,int *,int*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static unsigned int FUNC_12(struct ata_queued_cmd *VAR_6)
{
 struct scsi_cmnd *VAR_7 = VAR_6->scsicmd;
 const u8 *VAR_8 = VAR_7->cmnd;
 struct request *VAR_9 = VAR_7->request;
 int VAR_10 = FUNC_1(FUNC_7(VAR_9));
 unsigned int VAR_11 = 0;
 u64 VAR_12;
 u32 VAR_13;
 int VAR_14;
 u16 VAR_15 = 0;

 if (VAR_8[0] == 130 || VAR_8[0] == 128 || VAR_8[0] == 129)
  VAR_11 |= VAR_2;


 switch (VAR_8[0]) {
 case 133:
 case 130:
  if (FUNC_11(VAR_7->cmd_len < 10)) {
   VAR_15 = 9;
   goto invalid_fld;
  }
  FUNC_8(VAR_8, &VAR_12, &VAR_13);
  if (VAR_8[1] & (1 << 3))
   VAR_11 |= VAR_1;
  if (!FUNC_3(VAR_7, VAR_13))
   goto invalid_fld;
  break;
 case 131:
 case 128:
  if (FUNC_11(VAR_7->cmd_len < 6)) {
   VAR_15 = 5;
   goto invalid_fld;
  }
  FUNC_10(VAR_8, &VAR_12, &VAR_13);




  if (!VAR_13)
   VAR_13 = 256;
  if (!FUNC_3(VAR_7, VAR_13))
   goto invalid_fld;
  break;
 case 132:
 case 129:
  if (FUNC_11(VAR_7->cmd_len < 16)) {
   VAR_15 = 15;
   goto invalid_fld;
  }
  FUNC_9(VAR_8, &VAR_12, &VAR_13);
  if (VAR_8[1] & (1 << 3))
   VAR_11 |= VAR_1;
  if (!FUNC_3(VAR_7, VAR_13))
   goto invalid_fld;
  break;
 default:
  FUNC_0("no-byte command\n");
  VAR_15 = 0;
  goto invalid_fld;
 }


 if (!VAR_13)







  goto nothing_to_do;

 VAR_6->flags |= VAR_0;
 VAR_6->nbytes = VAR_13 * VAR_7->device->sector_size;

 VAR_14 = FUNC_2(&VAR_6->tf, VAR_6->dev, VAR_12, VAR_13, VAR_11,
        VAR_6->hw_tag, VAR_10);

 if (FUNC_6(VAR_14 == 0))
  return 0;

 if (VAR_14 == -VAR_3)
  goto out_of_range;

invalid_fld:
 FUNC_4(VAR_6->dev, VAR_7, VAR_15, 0xff);
 return 1;

out_of_range:
 FUNC_5(VAR_6->dev, VAR_7, VAR_4, 0x21, 0x0);

 return 1;

nothing_to_do:
 VAR_7->result = VAR_5;
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct ata_scsi_args {struct ata_device* dev; int id; TYPE_1__* cmd; } ;
struct ata_device {int n_sectors; int horkage; scalar_t__ class; int id; } ;
struct TYPE_2__ {scalar_t__* cmnd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ata_device*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static unsigned int FUNC_8(struct ata_scsi_args *VAR_4, u8 *VAR_5)
{
 struct ata_device *VAR_6 = VAR_4->dev;
 u64 VAR_7 = VAR_6->n_sectors - 1;
 u32 VAR_8;
 u8 VAR_9;
 u16 VAR_10;

 VAR_8 = FUNC_6(VAR_6->id);
 VAR_9 = FUNC_4(VAR_6->id);
 VAR_10 = FUNC_5(VAR_6->id, VAR_9);

 FUNC_0("ENTER\n");

 if (VAR_4->cmd->cmnd[0] == VAR_3) {
  if (VAR_7 >= 0xffffffffULL)
   VAR_7 = 0xffffffff;


  VAR_5[0] = VAR_7 >> (8 * 3);
  VAR_5[1] = VAR_7 >> (8 * 2);
  VAR_5[2] = VAR_7 >> (8 * 1);
  VAR_5[3] = VAR_7;


  VAR_5[4] = VAR_8 >> (8 * 3);
  VAR_5[5] = VAR_8 >> (8 * 2);
  VAR_5[6] = VAR_8 >> (8 * 1);
  VAR_5[7] = VAR_8;
 } else {

  VAR_5[0] = VAR_7 >> (8 * 7);
  VAR_5[1] = VAR_7 >> (8 * 6);
  VAR_5[2] = VAR_7 >> (8 * 5);
  VAR_5[3] = VAR_7 >> (8 * 4);
  VAR_5[4] = VAR_7 >> (8 * 3);
  VAR_5[5] = VAR_7 >> (8 * 2);
  VAR_5[6] = VAR_7 >> (8 * 1);
  VAR_5[7] = VAR_7;


  VAR_5[ 8] = VAR_8 >> (8 * 3);
  VAR_5[ 9] = VAR_8 >> (8 * 2);
  VAR_5[10] = VAR_8 >> (8 * 1);
  VAR_5[11] = VAR_8;

  VAR_5[12] = 0;
  VAR_5[13] = VAR_9;
  VAR_5[14] = (VAR_10 >> 8) & 0x3f;
  VAR_5[15] = VAR_10;

  if (FUNC_2(VAR_4->id) &&
      !(VAR_6->horkage & VAR_1)) {
   VAR_5[14] |= 0x80;

   if (FUNC_3(VAR_4->id) &&
       VAR_6->horkage & VAR_2) {
    FUNC_1(VAR_6, "Enabling discard_zeroes_data\n");
    VAR_5[14] |= 0x40;
   }
  }
  if (FUNC_7(VAR_4->id) ||
      VAR_4->dev->class == VAR_0)
   VAR_5[12] = (1 << 4);
 }
 return 0;
}

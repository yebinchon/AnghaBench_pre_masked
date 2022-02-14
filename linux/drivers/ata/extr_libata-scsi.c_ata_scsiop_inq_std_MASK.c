
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int versions_zbc ;
typedef int versions ;
typedef int u8 ;
struct ata_scsi_args {TYPE_3__* dev; int id; } ;
typedef int hdr ;
struct TYPE_6__ {scalar_t__ class; TYPE_2__* link; } ;
struct TYPE_5__ {TYPE_1__* ap; } ;
struct TYPE_4__ {int pflags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int*,...) ;
 scalar_t__ FUNC_5 (int*,char*,int) ;

__attribute__((used)) static unsigned int FUNC_6(struct ata_scsi_args *VAR_6, u8 *VAR_7)
{
 static const u8 VAR_8[] = {
  0x00,
  0x60,

  0x03,
  0x20,

  0x03,
  0x00
 };
 static const u8 VAR_9[] = {
  0x00,
  0xA0,

  0x06,
  0x00,

  0x05,
  0xC0,

  0x60,
  0x24,
 };

 u8 VAR_10[] = {
  VAR_4,
  0,
  0x5,
  2,
  95 - 4,
  0,
  0,
  2
 };

 FUNC_0("ENTER\n");




 if (FUNC_1(VAR_6->id) ||
     (VAR_6->dev->link->ap->pflags & VAR_3))
  VAR_10[1] |= (1 << 7);

 if (VAR_6->dev->class == VAR_0) {
  VAR_10[0] = VAR_5;
  VAR_10[2] = 0x7;
 }

 FUNC_4(VAR_7, VAR_10, sizeof(VAR_10));
 FUNC_4(&VAR_7[8], "ATA     ", 8);
 FUNC_2(VAR_6->id, &VAR_7[16], VAR_2, 16);


 FUNC_2(VAR_6->id, &VAR_7[32], VAR_1 + 2, 4);
 if (FUNC_5(&VAR_7[32], "    ", 4) == 0)
  FUNC_2(VAR_6->id, &VAR_7[32], VAR_1, 4);

 if (VAR_7[32] == 0 || VAR_7[32] == ' ')
  FUNC_4(&VAR_7[32], "n/a ", 4);

 if (FUNC_3(VAR_6->id) || VAR_6->dev->class == VAR_0)
  FUNC_4(VAR_7 + 58, VAR_9, sizeof(VAR_9));
 else
  FUNC_4(VAR_7 + 58, VAR_8, sizeof(VAR_8));

 return 0;
}

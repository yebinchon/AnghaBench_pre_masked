
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ata_device {TYPE_2__* link; } ;
struct TYPE_4__ {TYPE_1__* ap; } ;
struct TYPE_3__ {scalar_t__* sector_buf; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ata_device*,char*,int) ;
 unsigned int FUNC_1 (struct ata_device*,scalar_t__*,scalar_t__) ;
 unsigned int FUNC_2 (struct ata_device*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct ata_device *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  u8 *VAR_6 = VAR_4->link->ap->sector_buf;
  u8 VAR_7 = 0;
  unsigned int VAR_8;

  VAR_8 = FUNC_2(VAR_4, &VAR_7);
  if (VAR_8 != 0 && VAR_8 != VAR_0) {
   FUNC_0(VAR_4,
         "TEST_UNIT_READY failed (err_mask=0x%x)\n",
         VAR_8);
   return -VAR_2;
  }

  if (!VAR_8 || VAR_7 != VAR_3)
   return 0;

  VAR_8 = FUNC_1(VAR_4, VAR_6, VAR_7);
  if (VAR_8) {
   FUNC_0(VAR_4, "failed to clear "
    "UNIT ATTENTION (err_mask=0x%x)\n", VAR_8);
   return -VAR_2;
  }
 }

 FUNC_0(VAR_4, "UNIT ATTENTION persists after %d tries\n",
       VAR_1);

 return 0;
}

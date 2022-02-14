
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef void* u32 ;
struct ata_port {int * sector_buf; } ;
struct ata_device {scalar_t__ class; int flags; int zac_zoned_cap; void* zac_zones_max_open; void* zac_zones_optimal_nonseq; void* zac_zones_optimal_open; int id; TYPE_1__* link; } ;
struct TYPE_2__ {struct ata_port* ap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct ata_device*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ata_device*,int ) ;
 unsigned int FUNC_3 (struct ata_device*,int ,int ,int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ata_device *VAR_5)
{
 struct ata_port *VAR_6 = VAR_5->link->ap;
 unsigned int VAR_7;
 u8 *VAR_8 = VAR_6->sector_buf;

 VAR_5->zac_zones_optimal_open = VAR_4;
 VAR_5->zac_zones_optimal_nonseq = VAR_4;
 VAR_5->zac_zones_max_open = VAR_4;




 if (VAR_5->class == VAR_0)
  VAR_5->flags |= VAR_1;
 else if (FUNC_1(VAR_5->id) == 0x01)



  VAR_5->flags |= VAR_1;

 if (!(VAR_5->flags & VAR_1))
  return;

 if (!FUNC_2(VAR_5, VAR_3)) {
  FUNC_0(VAR_5,
        "ATA Zoned Information Log not supported\n");
  return;
 }




 VAR_7 = FUNC_3(VAR_5, VAR_2,
         VAR_3,
         VAR_8, 1);
 if (!VAR_7) {
  u64 VAR_9, VAR_10, VAR_11, VAR_12;

  VAR_9 = FUNC_4(&VAR_8[8]);
  if ((VAR_9 >> 63))
   VAR_5->zac_zoned_cap = (VAR_9 & 1);
  VAR_10 = FUNC_4(&VAR_8[24]);
  if ((VAR_10 >> 63))
   VAR_5->zac_zones_optimal_open = (u32)VAR_10;
  VAR_11 = FUNC_4(&VAR_8[32]);
  if ((VAR_11 >> 63))
   VAR_5->zac_zones_optimal_nonseq = (u32)VAR_11;
  VAR_12 = FUNC_4(&VAR_8[40]);
  if ((VAR_12 >> 63))
   VAR_5->zac_zones_max_open = (u32)VAR_12;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct zpodd {scalar_t__ mech_type; } ;
struct ata_device {TYPE_2__* link; struct zpodd* zpodd; } ;
struct TYPE_4__ {TYPE_1__* ap; } ;
struct TYPE_3__ {scalar_t__* sector_buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct ata_device*,scalar_t__*,scalar_t__) ;
 unsigned int FUNC_1 (struct ata_device*,scalar_t__*) ;

__attribute__((used)) static bool FUNC_2(struct ata_device *VAR_2)
{
 u8 VAR_3, *VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8;
 struct zpodd *VAR_9 = VAR_2->zpodd;

 VAR_5 = FUNC_1(VAR_2, &VAR_3);

 if (!VAR_5 || VAR_3 != VAR_0)
  return 0;

 VAR_4 = VAR_2->link->ap->sector_buf;
 VAR_5 = FUNC_0(VAR_2, VAR_4, VAR_3);
 if (VAR_5)
  return 0;


 if ((VAR_4[0] & 0x7f) != 0x70)
  return 0;

 VAR_8 = VAR_4[7];

 if (VAR_8 < 6)
  return 0;

 VAR_6 = VAR_4[12];
 VAR_7 = VAR_4[13];

 if (VAR_9->mech_type == VAR_1)

  return VAR_6 == 0x3a;
 else

  return VAR_6 == 0x3a && VAR_7 == 0x01;
}

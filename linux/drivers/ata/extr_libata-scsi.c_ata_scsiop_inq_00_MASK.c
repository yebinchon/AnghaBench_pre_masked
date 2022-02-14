
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_scsi_args {TYPE_1__* dev; } ;
typedef int pages ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int const*,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct ata_scsi_args *VAR_1, u8 *VAR_2)
{
 int VAR_3;
 static const u8 VAR_4[] = {
  0x00,
  0x80,
  0x83,
  0x89,
  0xb0,
  0xb1,
  0xb2,
  0xb6,
 };

 VAR_3 = sizeof(VAR_4);
 if (!(VAR_1->dev->flags & VAR_0))
  VAR_3--;
 VAR_2[3] = VAR_3;
 FUNC_0(VAR_2 + 4, VAR_4, VAR_3);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_queued_cmd {TYPE_1__* scsicmd; } ;
struct TYPE_2__ {int* cmnd; } ;
__attribute__((used)) static int FUNC_0(struct ata_queued_cmd *VAR_0)
{
 u8 *VAR_1 = VAR_0->scsicmd->cmnd;
 int VAR_2 = 1;


 switch (VAR_1[0]) {
 case 129:
 case 130:
 case 128:
 case 132:
 case 133:
 case 131:
 case 0xad:
 case 0xbe:
  VAR_2 = 0;
 }

 if (VAR_1[0] == 130) {
  unsigned int VAR_3 =
   (VAR_1[2] << 24) |
   (VAR_1[3] << 16) |
   (VAR_1[4] << 8) |
   VAR_1[5];
  if (VAR_3 >= 0xFFFF4FA2)
   VAR_2 = 1;
 }
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {unsigned int num_gb_pipes; scalar_t__ family; int num_z_pipes; TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,unsigned int,int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int FUNC_1 (int ) ;
 int VAR_14 ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct radeon_device*) ;

void FUNC_5(struct radeon_device *VAR_15)
{
 unsigned VAR_16;
 unsigned VAR_17;
 unsigned VAR_18;


 FUNC_2(VAR_6, VAR_5 | VAR_7 |
        (1 << 2) | (1 << 3));

 if (FUNC_4(VAR_15)) {
  FUNC_3("Failed to wait GUI idle while programming pipes. Bad things might happen.\n");
 }

 VAR_17 = FUNC_1(VAR_12);
 VAR_18 = ((VAR_17 >> 12) & 3) + 1;


 if ((VAR_15->pdev->device == 0x5e4c) ||
     (VAR_15->pdev->device == 0x5e4f))
  VAR_18 = 1;

 VAR_15->num_gb_pipes = VAR_18;
 VAR_16 = 0;
 switch (VAR_18) {
 default:

  VAR_18 = 1;

 case 1:
  VAR_16 = (0 << 1);
  break;
 case 2:
  VAR_16 = (3 << 1);
  break;
 case 3:
  VAR_16 = (6 << 1);
  break;
 case 4:
  VAR_16 = (7 << 1);
  break;
 }
 FUNC_2(VAR_13, (1 << VAR_18) - 1);

 VAR_16 |= VAR_11 | VAR_4;
 FUNC_2(VAR_8, VAR_16);
 if (FUNC_4(VAR_15)) {
  FUNC_3("Failed to wait GUI idle while programming pipes. Bad things might happen.\n");
 }

 VAR_16 = FUNC_1(VAR_3);
 FUNC_2(VAR_3, VAR_16 | VAR_9);

 FUNC_2(VAR_10,
        FUNC_1(VAR_10) |
        VAR_1 |
        VAR_2);

 if (FUNC_4(VAR_15)) {
  FUNC_3("Failed to wait GUI idle while programming pipes. Bad things might happen.\n");
 }

 if (VAR_15->family == VAR_0) {
  VAR_16 = FUNC_1(VAR_14);
  if ((VAR_16 & 3) == 3)
   VAR_15->num_z_pipes = 2;
  else
   VAR_15->num_z_pipes = 1;
 } else
  VAR_15->num_z_pipes = 1;

 FUNC_0("radeon: %d quad pipes, %d z pipes initialized.\n",
   VAR_15->num_gb_pipes, VAR_15->num_z_pipes);
}

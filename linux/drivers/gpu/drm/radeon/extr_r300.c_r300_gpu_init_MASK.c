
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_device {scalar_t__ family; int num_gb_pipes; int num_z_pipes; TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct radeon_device*) ;
 scalar_t__ FUNC_5 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_14)
{
 uint32_t VAR_15, VAR_16;

 if ((VAR_14->family == VAR_0 && VAR_14->pdev->device != 0x4144) ||
     (VAR_14->family == VAR_1 && VAR_14->pdev->device != 0x4148)) {

  VAR_14->num_gb_pipes = 2;
 } else {

  VAR_14->num_gb_pipes = 1;
 }
 VAR_14->num_z_pipes = 1;
 VAR_15 = (VAR_5 | VAR_13);
 switch (VAR_14->num_gb_pipes) {
 case 2:
  VAR_15 |= VAR_8;
  break;
 case 3:
  VAR_15 |= VAR_10;
  break;
 case 4:
  VAR_15 |= VAR_9;
  break;
 default:
 case 1:
  VAR_15 |= VAR_11;
  break;
 }
 FUNC_2(VAR_6, VAR_15);

 if (FUNC_4(VAR_14)) {
  FUNC_3("Failed to wait GUI idle while programming pipes. Bad things might happen.\n");
 }

 VAR_16 = FUNC_1(VAR_4);
 FUNC_2(VAR_4, VAR_16 | VAR_7);

 FUNC_2(VAR_12,
        VAR_2 |
        VAR_3);

 if (FUNC_4(VAR_14)) {
  FUNC_3("Failed to wait GUI idle while programming pipes. Bad things might happen.\n");
 }
 if (FUNC_5(VAR_14)) {
  FUNC_3("Failed to wait MC idle while programming pipes. Bad things might happen.\n");
 }
 FUNC_0("radeon: %d quad pipes, %d Z pipes initialized\n",
   VAR_14->num_gb_pipes, VAR_14->num_z_pipes);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int acpi_status ;
struct TYPE_2__ {int smi_command; int xpm_timer_block; int xpm2_control_block; int xpm1b_control_block; int xpm1a_control_block; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int*,int *,int *) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int,int *,int *) ;
 int FUNC_8 (int ,int,int) ;
 int VAR_10 ;
 int FUNC_9 (int ) ;

acpi_status FUNC_10(u32 VAR_11, u32 VAR_12)
{
 acpi_status VAR_13;
 u32 VAR_14;
 u64 VAR_15;

 FUNC_2(VAR_10);

 switch (VAR_11) {
 case 131:
  VAR_12 &= ~VAR_1;

  VAR_13 = FUNC_7(VAR_12,
      &VAR_7,
      &VAR_9);
  break;

 case 132:

  VAR_13 = FUNC_7(VAR_12,
      &VAR_6,
      &VAR_8);
  break;

 case 133:




  VAR_13 = FUNC_5(&VAR_14,
            &VAR_5.
            xpm1a_control_block,
            &VAR_5.
            xpm1b_control_block);
  if (FUNC_1(VAR_13)) {
   goto exit;
  }



  FUNC_3(VAR_12, VAR_0,
     VAR_14);



  VAR_13 = FUNC_7(VAR_12,
      &VAR_5.
      xpm1a_control_block,
      &VAR_5.
      xpm1b_control_block);
  break;

 case 130:




  VAR_13 =
      FUNC_4(&VAR_15,
     &VAR_5.xpm2_control_block);
  if (FUNC_1(VAR_13)) {
   goto exit;
  }
  VAR_14 = (u32)VAR_15;



  FUNC_3(VAR_12, VAR_2,
     VAR_14);

  VAR_13 =
      FUNC_6(VAR_12, &VAR_5.xpm2_control_block);
  break;

 case 129:

  VAR_13 = FUNC_6(VAR_12, &VAR_5.xpm_timer_block);
  break;

 case 128:



  VAR_13 =
      FUNC_8(VAR_5.smi_command, VAR_12, 8);
  break;

 default:

  FUNC_0((VAR_4, "Unknown Register ID: 0x%X", VAR_11));
  VAR_13 = VAR_3;
  break;
 }

exit:
 FUNC_9(VAR_13);
}

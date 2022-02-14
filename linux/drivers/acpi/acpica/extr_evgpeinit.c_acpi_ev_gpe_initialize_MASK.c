
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
typedef int acpi_status ;
struct TYPE_5__ {int space_id; scalar_t__ address; } ;
struct TYPE_4__ {int space_id; scalar_t__ address; } ;
struct TYPE_6__ {int gpe0_block_length; int gpe1_block_length; int gpe1_base; int sci_interrupt; TYPE_2__ xgpe1_block; TYPE_1__ xgpe0_block; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,scalar_t__,int ,int,int,int ,int *) ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_8 ;
 int FUNC_9 (int ) ;

acpi_status FUNC_10(void)
{
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;
 acpi_status VAR_12;

 FUNC_5(VAR_8);

 FUNC_1((VAR_0,
         "Initializing General Purpose Events (GPEs):\n"));

 VAR_12 = FUNC_7(VAR_2);
 if (FUNC_4(VAR_12)) {
  FUNC_9(VAR_12);
 }
 if (VAR_5.gpe0_block_length &&
     VAR_5.xgpe0_block.address) {



  VAR_9 = (u16)(VAR_5.gpe0_block_length / 2);
  VAR_11 =
      (VAR_9 * VAR_1) - 1;



  VAR_12 = FUNC_6(VAR_6,
        VAR_5.xgpe0_block.
        address,
        VAR_5.xgpe0_block.
        space_id, VAR_9, 0,
        VAR_5.sci_interrupt,
        &VAR_7[0]);

  if (FUNC_4(VAR_12)) {
   FUNC_3((VAR_3, VAR_12,
     "Could not create GPE Block 0"));
  }
 }

 if (VAR_5.gpe1_block_length &&
     VAR_5.xgpe1_block.address) {



  VAR_10 = (u16)(VAR_5.gpe1_block_length / 2);



  if ((VAR_9) &&
      (VAR_11 >= VAR_5.gpe1_base)) {
   FUNC_2((VAR_3,
        "GPE0 block (GPE 0 to %u) overlaps the GPE1 block "
        "(GPE %u to %u) - Ignoring GPE1",
        VAR_11, VAR_5.gpe1_base,
        VAR_5.gpe1_base +
        ((VAR_10 *
          VAR_1) - 1)));



   VAR_10 = 0;
  } else {


   VAR_12 =
       FUNC_6(VAR_6,
           VAR_5.xgpe1_block.
           address,
           VAR_5.xgpe1_block.
           space_id, VAR_10,
           VAR_5.gpe1_base,
           VAR_5.
           sci_interrupt,
           &VAR_7
           [1]);

   if (FUNC_4(VAR_12)) {
    FUNC_3((VAR_3, VAR_12,
      "Could not create GPE Block 1"));
   }





   VAR_11 = VAR_5.gpe1_base +
       ((VAR_10 * VAR_1) - 1);
  }
 }



 if ((VAR_9 + VAR_10) == 0) {



  FUNC_0((VAR_0,
      "There are no GPE blocks defined in the FADT\n"));
  VAR_12 = VAR_4;
  goto cleanup;
 }

cleanup:
 (void)FUNC_8(VAR_2);
 FUNC_9(VAR_4);
}

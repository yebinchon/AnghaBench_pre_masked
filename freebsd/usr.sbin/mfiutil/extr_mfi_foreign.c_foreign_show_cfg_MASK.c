
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int span_depth; int primary_raid_level; int stripe_size; } ;
struct mfi_ld_config {TYPE_2__* span; TYPE_1__ params; } ;
struct mfi_config_data {int array_count; int log_drv_count; int spares_count; int array_size; int log_drv_size; scalar_t__ array; } ;
struct mfi_array {int num_drives; TYPE_5__* pd; } ;
typedef int stripe ;
typedef int size ;
typedef int mbox ;
struct TYPE_8__ {int device_id; } ;
struct TYPE_9__ {TYPE_3__ v; } ;
struct TYPE_10__ {int fw_state; TYPE_4__ ref; } ;
struct TYPE_7__ {int num_blocks; int array_ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct mfi_config_data*,char*) ;
 int VAR_5 ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (struct mfi_config_data*) ;
 int FUNC_5 (char*,int,int,char*,int ,int) ;
 scalar_t__ FUNC_6 (int,scalar_t__,struct mfi_config_data**,int*,int) ;
 char* FUNC_7 (int ) ;
 char* FUNC_8 (int ,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,int) ;

__attribute__((used)) static int
FUNC_12(int VAR_6, uint32_t VAR_7, uint8_t VAR_8, int VAR_9)
{
 struct mfi_config_data *VAR_10;
 char VAR_11[64];
 int VAR_12;
 uint8_t VAR_13[4];

 FUNC_0(VAR_13, sizeof(VAR_13));
 VAR_13[0] = VAR_8;
 if (FUNC_6(VAR_6, VAR_7, &VAR_10, VAR_13, sizeof(VAR_13)) < 0) {
  VAR_12 = VAR_5;
  FUNC_11("Failed to get foreign config %d", VAR_12);
  FUNC_1(VAR_6);
  return (VAR_12);
 }

 if (VAR_7 == VAR_4)
  FUNC_10(VAR_11, "Foreign configuration preview %d", VAR_8);
 else
  FUNC_10(VAR_11, "Foreign configuration %d", VAR_8);






 if (VAR_9)
  FUNC_2(VAR_6, VAR_10, VAR_11);
 else {
  char *VAR_14;
  int VAR_15;

  VAR_14 = (char *)(VAR_10->array);

         FUNC_9("%s: %d arrays, %d volumes, %d spares\n", VAR_11,
         VAR_10->array_count, VAR_10->log_drv_count,
         VAR_10->spares_count);


  for (VAR_15 = 0; VAR_15 < VAR_10->array_count; VAR_15++)
    VAR_14 += VAR_10->array_size;

  for (VAR_15 = 0; VAR_15 < VAR_10->log_drv_count; VAR_15++) {
          const char *VAR_16;
          char VAR_17[6], VAR_18[5];
   struct mfi_ld_config *VAR_19;

   VAR_19 = (struct mfi_ld_config *)VAR_14;

          FUNC_3(VAR_18, sizeof(VAR_18),
               VAR_19->params.stripe_size);






          VAR_16 = FUNC_8(VAR_19->params.primary_raid_level,
                 (VAR_19->params.span_depth - 1));

          FUNC_5(VAR_17, sizeof(VAR_17), VAR_19->span[0].num_blocks * 512,
               "", VAR_0, VAR_1 | VAR_3 | VAR_2);

   FUNC_9(" ID%d ", VAR_15);
                FUNC_9("(%6s) %-8s |",
    VAR_17, VAR_16);
   FUNC_9("volume spans %d %s\n", VAR_19->params.span_depth,
       (VAR_19->params.span_depth > 1) ? "arrays" : "array");
   for (int VAR_20 = 0; VAR_20 < VAR_19->params.span_depth; VAR_20++) {
    char *VAR_21;
    struct mfi_array *VAR_22;
    uint16_t VAR_23;

    FUNC_9("      array %u @ ", VAR_19->span[VAR_20].array_ref);
           FUNC_5(VAR_17, sizeof(VAR_17), VAR_19->span[VAR_20].num_blocks * 512,
                "", VAR_0, VAR_1 | VAR_3 | VAR_2);

    FUNC_9("(%6s)\n",VAR_17);
    VAR_21 = (char *)VAR_10->array + (VAR_19->span[VAR_20].array_ref * VAR_10->array_size);

    VAR_22 = (struct mfi_array *)VAR_21;
    for (int VAR_24 = 0; VAR_24 < VAR_22->num_drives; VAR_24++) {
     VAR_23 = VAR_22->pd[VAR_24].ref.v.device_id;
     if (VAR_23 == 0xffff)
      FUNC_9("        drive MISSING\n");
     else {
      FUNC_9("        drive %u %s\n", VAR_23,
           FUNC_7(VAR_22->pd[VAR_24].fw_state));
     }
    }

   }
   VAR_14 += VAR_10->log_drv_size;
  }
 }

 FUNC_4(VAR_10);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct mfi_spare {int array_count; int * array_ref; int spare_type; int array_size; scalar_t__ array; int ref; } ;
struct mfi_pd_info {scalar_t__ fw_state; scalar_t__ coerced_size; int ref; } ;
struct TYPE_3__ {int span_depth; } ;
struct mfi_ld_config {TYPE_2__* span; TYPE_1__ params; } ;
struct mfi_config_data {int array_count; int * array_ref; int spare_type; int array_size; scalar_t__ array; int ref; } ;
struct mfi_array {scalar_t__ size; int array_ref; } ;
struct TYPE_4__ {int array_ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mfi_spare*,int) ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (struct mfi_spare*) ;
 struct mfi_spare* FUNC_3 (int) ;
 struct mfi_array* FUNC_4 (struct mfi_spare*,int ) ;
 struct mfi_ld_config* FUNC_5 (struct mfi_spare*,int ) ;
 scalar_t__ FUNC_6 (int,struct mfi_spare**) ;
 scalar_t__ FUNC_7 (int,int ,struct mfi_spare*,int,int *,int ,int *) ;
 int FUNC_8 (int,char*,int *) ;
 scalar_t__ FUNC_9 (int,char*,int *) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int,int ,struct mfi_pd_info*,int *) ;
 int VAR_8 ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static int
FUNC_14(int VAR_9, char **VAR_10)
{
 struct mfi_pd_info VAR_11;
 struct mfi_config_data *VAR_12;
 struct mfi_array *VAR_13;
 struct mfi_ld_config *VAR_14;
 struct mfi_spare *VAR_15;
 uint16_t VAR_16;
 uint8_t VAR_17;
 char *VAR_18;
 int VAR_19, VAR_20, VAR_21;

 if (VAR_9 < 2) {
  FUNC_13("add spare: drive required");
  return (VAR_0);
 }

 VAR_20 = FUNC_10(VAR_8, VAR_6);
 if (VAR_20 < 0) {
  VAR_19 = VAR_7;
  FUNC_12("mfi_open");
  return (VAR_19);
 }

 VAR_12 = ((void*)0);
 VAR_15 = ((void*)0);
 VAR_19 = FUNC_8(VAR_20, VAR_10[1], &VAR_16);
 if (VAR_19)
  goto error;

 if (FUNC_11(VAR_20, VAR_16, &VAR_11, ((void*)0)) < 0) {
  VAR_19 = VAR_7;
  FUNC_12("Failed to fetch drive info");
  goto error;
 }

 if (VAR_11.fw_state != VAR_4) {
  FUNC_13("Drive %u is not available", VAR_16);
  VAR_19 = VAR_0;
  goto error;
 }

 if (VAR_9 > 2) {
  if (FUNC_9(VAR_20, VAR_10[2], &VAR_17) < 0) {
   VAR_19 = VAR_7;
   FUNC_12("Invalid volume %s", VAR_10[2]);
   goto error;
  }
 }

 if (FUNC_6(VAR_20, &VAR_12) < 0) {
  VAR_19 = VAR_7;
  FUNC_12("Failed to read configuration");
  goto error;
 }

 VAR_15 = FUNC_3(sizeof(struct mfi_spare) + sizeof(uint16_t) *
     VAR_12->array_count);
 if (VAR_15 == ((void*)0)) {
  FUNC_13("malloc failed");
  VAR_19 = VAR_1;
  goto error;
 }
 FUNC_0(VAR_15, sizeof(struct mfi_spare));
 VAR_15->ref = VAR_11.ref;

 if (VAR_9 == 2) {

  VAR_18 = (char *)VAR_12->array;
  for (VAR_21 = 0; VAR_21 < VAR_12->array_count; VAR_21++) {
   VAR_13 = (struct mfi_array *)VAR_18;
   if (VAR_13->size > VAR_11.coerced_size) {
    FUNC_13("Spare isn't large enough for array %u",
        VAR_13->array_ref);
    VAR_19 = VAR_0;
    goto error;
   }
   VAR_18 += VAR_12->array_size;
  }
  VAR_15->array_count = 0;
 } else {




  VAR_14 = FUNC_5(VAR_12, VAR_17);
  if (VAR_14 == ((void*)0)) {
   FUNC_13("Did not find volume %d", VAR_17);
   VAR_19 = VAR_0;
   goto error;
  }

  VAR_15->spare_type |= VAR_5;
  VAR_15->array_count = VAR_14->params.span_depth;
  for (VAR_21 = 0; VAR_21 < VAR_14->params.span_depth; VAR_21++) {
   VAR_13 = FUNC_4(VAR_12,
       VAR_14->span[VAR_21].array_ref);
   if (VAR_13 == ((void*)0)) {
    FUNC_13("Missing array; inconsistent config?");
    VAR_19 = VAR_2;
    goto error;
   }
   if (VAR_13->size > VAR_11.coerced_size) {
    FUNC_13("Spare isn't large enough for array %u",
        VAR_13->array_ref);
    VAR_19 = VAR_0;
    goto error;
   }
   VAR_15->array_ref[VAR_21] = VAR_13->array_ref;
  }
 }

 if (FUNC_7(VAR_20, VAR_3, VAR_15,
     sizeof(struct mfi_spare) + sizeof(uint16_t) * VAR_15->array_count,
     ((void*)0), 0, ((void*)0)) < 0) {
  VAR_19 = VAR_7;
  FUNC_12("Failed to assign spare");

 }

error:
 FUNC_2(VAR_15);
 FUNC_2(VAR_12);
 FUNC_1(VAR_20);

 return (VAR_19);
}

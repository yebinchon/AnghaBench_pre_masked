
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mfi_config_data {int array_count; int array_size; int log_drv_count; int log_drv_size; size_t size; int spares_size; struct mfi_config_data* drives; scalar_t__ array; scalar_t__ spares_count; int drive_count; } ;
struct TYPE_5__ {struct mfi_config_data target_id; } ;
struct TYPE_6__ {TYPE_1__ v; } ;
struct TYPE_7__ {TYPE_2__ ld; } ;
struct mfi_ld_config {TYPE_3__ properties; } ;
struct mfi_array {struct mfi_config_data array_ref; } ;
struct config_id_state {int array_ref; int target_id; int array_count; int log_drv_count; struct mfi_config_data* arrays; struct mfi_config_data* volumes; } ;
struct array_info {int array_count; int array_size; int log_drv_count; int log_drv_size; size_t size; int spares_size; struct array_info* drives; scalar_t__ array; scalar_t__ spares_count; int drive_count; } ;
typedef int state ;
struct TYPE_8__ {int raid_type; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char**) ;
 int FUNC_2 (int,char*,struct mfi_config_data*,struct config_id_state*,int) ;
 int FUNC_3 (char*,int,struct mfi_config_data*,int,long,struct config_id_state*,int) ;
 int FUNC_4 (struct config_id_state*,int) ;
 void* FUNC_5 (int,size_t) ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 long FUNC_7 (int ) ;
 int FUNC_8 (int,struct mfi_config_data*,int *) ;
 int VAR_8 ;
 int FUNC_9 (struct mfi_config_data*) ;
 int FUNC_10 (int,char**,char*) ;
 scalar_t__ FUNC_11 (int,struct mfi_config_data**) ;
 scalar_t__ FUNC_12 (int,int ,struct mfi_config_data*,size_t,int *,int ,int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_15 (int,int,char*,struct mfi_config_data*) ;
 int FUNC_16 (long) ;
 int FUNC_17 (struct mfi_config_data*,int,int,int ) ;
 TYPE_4__* VAR_12 ;
 scalar_t__ FUNC_18 (int *,char*) ;
 scalar_t__ FUNC_19 (char*,char*) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*,...) ;

__attribute__((used)) static int
FUNC_22(int VAR_13, char **VAR_14)
{
 struct mfi_config_data *VAR_15;
 struct mfi_array *VAR_16;
 struct mfi_ld_config *VAR_17;
 struct config_id_state VAR_18;
 size_t VAR_19;
 char *VAR_20, *VAR_21, *VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26;
 int VAR_27, VAR_28, VAR_29;
 struct array_info *VAR_30;
 long VAR_31;



 int VAR_32, VAR_33;





 if (VAR_13 > 1) {
  if (FUNC_19(VAR_14[1], "volume") == 0) {
   VAR_14++;
   VAR_13--;
  } else if (FUNC_19(VAR_14[1], "spare") == 0) {
   VAR_14++;
   VAR_13--;
   return (FUNC_1(VAR_13, VAR_14));
  }
 }

 if (VAR_13 < 2) {
  FUNC_21("create volume: volume type required");
  return (VAR_0);
 }

 FUNC_4(&VAR_18, sizeof(VAR_18));
 VAR_15 = ((void*)0);
 VAR_30 = ((void*)0);
 VAR_27 = 0;
 VAR_23 = 0;

 VAR_24 = FUNC_13(VAR_9, VAR_6);
 if (VAR_24 < 0) {
  VAR_23 = VAR_8;
  FUNC_20("mfi_open");
  return (VAR_23);
 }

 if (!FUNC_14()) {
  FUNC_21("The current mfi(4) driver does not support "
      "configuration changes.");
  VAR_23 = VAR_2;
  goto error;
 }


 VAR_26 = -1;
 for (VAR_25 = 0; VAR_12[VAR_25].name != ((void*)0); VAR_25++)
  if (FUNC_18(VAR_12[VAR_25].name, VAR_14[1]) == 0) {
   VAR_26 = VAR_12[VAR_25].raid_type;
   break;
  }

 if (VAR_26 == -1) {
  FUNC_21("Unknown or unsupported volume type %s", VAR_14[1]);
  VAR_23 = VAR_0;
  goto error;
 }


 VAR_11 = 2;



 VAR_33 = 0;
 VAR_31 = 64 * 1024;

 while ((VAR_32 = FUNC_10(VAR_13, VAR_14, "ds:v")) != -1) {
  switch (VAR_32) {





  case 's':
   VAR_31 = FUNC_7(VAR_10);
   if ((VAR_31 < 512) || (!FUNC_16(VAR_31)))
    VAR_31 = 64 * 1024;
   break;
  case 'v':
   VAR_33 = 1;
   break;
  case '?':
  default:
   VAR_23 = VAR_0;
   goto error;
  }
 }
 VAR_13 -= VAR_11;
 VAR_14 += VAR_11;


 VAR_27 = VAR_13;
 if (VAR_27 == 0) {
  FUNC_21("At least one drive list is required");
  VAR_23 = VAR_0;
  goto error;
 }
 switch (VAR_26) {
 case 134:
 case 133:
 case 131:
 case 129:
 case 136:
  if (VAR_27 != 1) {
   FUNC_21("Only one drive list can be specified");
   VAR_23 = VAR_0;
   goto error;
  }
  break;
 case 132:
 case 130:
 case 128:
  if (VAR_27 < 1) {
   FUNC_21("RAID10, RAID50, and RAID60 require at least "
       "two drive lists");
   VAR_23 = VAR_0;
   goto error;
  }
  if (VAR_27 > VAR_5) {
   FUNC_21("Volume spans more than %d arrays",
       VAR_5);
   VAR_23 = VAR_0;
   goto error;
  }
  break;
 }
 VAR_30 = FUNC_5(VAR_27, sizeof(*VAR_30));
 if (VAR_30 == ((void*)0)) {
  FUNC_21("malloc failed");
  VAR_23 = VAR_1;
  goto error;
 }
 for (VAR_25 = 0; VAR_25 < VAR_27; VAR_25++) {
  VAR_23 = FUNC_15(VAR_24, VAR_26, VAR_14[VAR_25], &VAR_30[VAR_25]);
  if (VAR_23)
   goto error;
 }

 switch (VAR_26) {
 case 132:
 case 130:
 case 128:
  for (VAR_25 = 1; VAR_25 < VAR_27; VAR_25++) {
   if (VAR_30[VAR_25].drive_count != VAR_30[0].drive_count) {
    FUNC_21("All arrays must contain the same "
        "number of drives");
    VAR_23 = VAR_0;
    goto error;
   }
  }
  break;
 }





 if (FUNC_11(VAR_24, &VAR_15) < 0) {
  VAR_23 = VAR_8;
  FUNC_20("Failed to read configuration");
  goto error;
 }
 VAR_20 = (char *)VAR_15->array;
 VAR_18.array_ref = 0xffff;
 VAR_18.target_id = 0xff;
 VAR_18.array_count = VAR_15->array_count;
 if (VAR_15->array_count > 0) {
  VAR_18.arrays = FUNC_5(VAR_15->array_count, sizeof(int));
  if (VAR_18.arrays == ((void*)0)) {
   FUNC_21("malloc failed");
   VAR_23 = VAR_1;
   goto error;
  }
  for (VAR_25 = 0; VAR_25 < VAR_15->array_count; VAR_25++) {
   VAR_16 = (struct mfi_array *)VAR_20;
   VAR_18.arrays[VAR_25] = VAR_16->array_ref;
   VAR_20 += VAR_15->array_size;
  }
  FUNC_17(VAR_18.arrays, VAR_15->array_count, sizeof(int),
      VAR_7);
 } else
  VAR_18.arrays = ((void*)0);
 VAR_18.log_drv_count = VAR_15->log_drv_count;
 if (VAR_15->log_drv_count) {
  VAR_18.volumes = FUNC_5(VAR_15->log_drv_count, sizeof(int));
  if (VAR_18.volumes == ((void*)0)) {
   FUNC_21("malloc failed");
   VAR_23 = VAR_1;
   goto error;
  }
  for (VAR_25 = 0; VAR_25 < VAR_15->log_drv_count; VAR_25++) {
   VAR_17 = (struct mfi_ld_config *)VAR_20;
   VAR_18.volumes[VAR_25] = VAR_17->properties.ld.v.target_id;
   VAR_20 += VAR_15->log_drv_size;
  }
  FUNC_17(VAR_18.volumes, VAR_15->log_drv_count, sizeof(int),
      VAR_7);
 } else
  VAR_18.volumes = ((void*)0);
 FUNC_9(VAR_15);


 switch (VAR_26) {
 case 134:
 case 133:
 case 131:
 case 129:
 case 136:
 case 135:

  VAR_28 = VAR_27;
  break;
 case 132:
 case 130:
 case 128:

  VAR_28 = 1;
  break;
 default:

  FUNC_0();
 }

 VAR_19 = sizeof(struct mfi_config_data) +
     sizeof(struct mfi_ld_config) * VAR_28 + VAR_3 * VAR_27;
 VAR_15 = FUNC_5(1, VAR_19);
 if (VAR_15 == ((void*)0)) {
  FUNC_21("malloc failed");
  VAR_23 = VAR_1;
  goto error;
 }
 VAR_15->size = VAR_19;
 VAR_15->array_count = VAR_27;
 VAR_15->array_size = VAR_3;
 VAR_15->log_drv_count = VAR_28;
 VAR_15->log_drv_size = sizeof(struct mfi_ld_config);
 VAR_15->spares_count = 0;
 VAR_15->spares_size = 40;
 VAR_21 = (char *)VAR_15->array;
 VAR_22 = VAR_21 + VAR_15->array_size * VAR_27;


 for (VAR_25 = 0; VAR_25 < VAR_27; VAR_25++) {
  FUNC_2(VAR_24, VAR_21, &VAR_30[VAR_25], &VAR_18, VAR_33);
  VAR_21 += VAR_15->array_size;
 }


 VAR_29 = VAR_27 / VAR_28;
 for (VAR_25 = 0; VAR_25 < VAR_28; VAR_25++) {
  FUNC_3(VAR_22, VAR_29,
      &VAR_30[VAR_25 * VAR_29], VAR_26, VAR_31,
      &VAR_18, VAR_33);
  VAR_22 += VAR_15->log_drv_size;
 }







 if (FUNC_12(VAR_24, VAR_4, VAR_15, VAR_19,
     ((void*)0), 0, ((void*)0)) < 0) {
  VAR_23 = VAR_8;
  FUNC_20("Failed to add volume");

 }

error:

 FUNC_9(VAR_15);
 FUNC_9(VAR_18.volumes);
 FUNC_9(VAR_18.arrays);
 if (VAR_30 != ((void*)0)) {
  for (VAR_25 = 0; VAR_25 < VAR_27; VAR_25++)
   FUNC_9(VAR_30[VAR_25].drives);
  FUNC_9(VAR_30);
 }
 FUNC_6(VAR_24);

 return (VAR_23);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dm_target {struct clone* private; } ;
struct clone {unsigned int nr_ctr_args; int * ctr_args; TYPE_6__* source_dev; TYPE_4__* dest_dev; TYPE_2__* metadata_dev; int hydrations_in_flight; int nr_regions; int cmd; scalar_t__ region_size; } ;
typedef int status_type_t ;
typedef int ssize_t ;
typedef scalar_t__ dm_block_t ;
struct TYPE_12__ {TYPE_5__* bdev; } ;
struct TYPE_11__ {int bd_dev; } ;
struct TYPE_10__ {TYPE_3__* bdev; } ;
struct TYPE_9__ {int bd_dev; } ;
struct TYPE_8__ {TYPE_1__* bdev; } ;
struct TYPE_7__ {int bd_dev; } ;


 int VAR_0 ;



 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;


 int FUNC_2 (int *) ;
 int FUNC_3 (struct clone*) ;
 int FUNC_4 (struct clone*) ;
 int FUNC_5 (int ,scalar_t__*) ;
 int FUNC_6 (int ,scalar_t__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct dm_target*) ;
 int FUNC_9 (struct clone*,char*,unsigned int,int *) ;
 int FUNC_10 (struct clone*,char*,unsigned int,int *) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (struct clone*) ;

__attribute__((used)) static void FUNC_13(struct dm_target *VAR_3, status_type_t VAR_4,
    unsigned int VAR_5, char *VAR_6,
    unsigned int VAR_7)
{
 int VAR_8;
 unsigned int VAR_9;
 ssize_t VAR_10 = 0;
 dm_block_t VAR_11 = 0;
 dm_block_t VAR_12 = 0;
 char VAR_13[VAR_0];
 struct clone *VAR_14 = VAR_3->private;

 switch (VAR_4) {
 case 129:
  if (FUNC_12(VAR_14) == 132) {
   FUNC_0("Fail");
   break;
  }


  if (!(VAR_5 & VAR_2) && !FUNC_8(VAR_3))
   (void) FUNC_4(VAR_14);

  VAR_8 = FUNC_5(VAR_14->cmd, &VAR_11);

  if (VAR_8) {
   FUNC_1("%s: dm_clone_get_free_metadata_block_count returned %d",
         FUNC_3(VAR_14), VAR_8);
   goto error;
  }

  VAR_8 = FUNC_6(VAR_14->cmd, &VAR_12);

  if (VAR_8) {
   FUNC_1("%s: dm_clone_get_metadata_dev_size returned %d",
         FUNC_3(VAR_14), VAR_8);
   goto error;
  }

  FUNC_0("%u %llu/%llu %llu %lu/%lu %u ",
         VAR_1,
         (unsigned long long)(VAR_12 - VAR_11),
         (unsigned long long)VAR_12,
         (unsigned long long)VAR_14->region_size,
         FUNC_7(VAR_14->cmd),
         VAR_14->nr_regions,
         FUNC_2(&VAR_14->hydrations_in_flight));

  FUNC_10(VAR_14, VAR_6, VAR_7, &VAR_10);
  FUNC_9(VAR_14, VAR_6, VAR_7, &VAR_10);

  switch (FUNC_12(VAR_14)) {
  case 130:
   FUNC_0("rw");
   break;
  case 131:
   FUNC_0("ro");
   break;
  case 132:
   FUNC_0("Fail");
  }

  break;

 case 128:
  FUNC_11(VAR_13, VAR_14->metadata_dev->bdev->bd_dev);
  FUNC_0("%s ", VAR_13);

  FUNC_11(VAR_13, VAR_14->dest_dev->bdev->bd_dev);
  FUNC_0("%s ", VAR_13);

  FUNC_11(VAR_13, VAR_14->source_dev->bdev->bd_dev);
  FUNC_0("%s", VAR_13);

  for (VAR_9 = 0; VAR_9 < VAR_14->nr_ctr_args; VAR_9++)
   FUNC_0(" %s", VAR_14->ctr_args[VAR_9]);
 }

 return;

error:
 FUNC_0("Error");
}

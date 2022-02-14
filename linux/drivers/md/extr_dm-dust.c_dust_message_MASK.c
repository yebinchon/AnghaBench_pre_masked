
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dust_device {int fail_read_on_bb; int quiet_mode; int sect_per_block; int dust_lock; int badblock_count; TYPE_2__* dev; } ;
struct dm_target {struct dust_device* private; } ;
typedef unsigned long long sector_t ;
struct TYPE_4__ {TYPE_1__* bdev; } ;
struct TYPE_3__ {int bd_inode; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_2 (struct dust_device*,unsigned long long) ;
 int FUNC_3 (struct dust_device*) ;
 int FUNC_4 (struct dust_device*,unsigned long long) ;
 int FUNC_5 (struct dust_device*,unsigned long long) ;
 unsigned long long FUNC_6 (int ) ;
 int FUNC_7 (unsigned long long,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (char*,char*,unsigned long long*,char*) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static int FUNC_12(struct dm_target *VAR_2, unsigned int VAR_3, char **VAR_4,
   char *VAR_5, unsigned int VAR_6)
{
 struct dust_device *VAR_7 = VAR_2->private;
 sector_t VAR_8 = FUNC_6(VAR_7->dev->bdev->bd_inode) >> VAR_1;
 bool VAR_9 = 0;
 int VAR_10 = -VAR_0;
 unsigned long long VAR_11, VAR_12;
 unsigned long VAR_13;
 char VAR_14;

 if (VAR_3 == 1) {
  if (!FUNC_11(VAR_4[0], "addbadblock") ||
      !FUNC_11(VAR_4[0], "removebadblock") ||
      !FUNC_11(VAR_4[0], "queryblock")) {
   FUNC_0("%s requires an additional argument", VAR_4[0]);
  } else if (!FUNC_11(VAR_4[0], "disable")) {
   FUNC_1("disabling read failures on bad sectors");
   VAR_7->fail_read_on_bb = 0;
   VAR_10 = 0;
  } else if (!FUNC_11(VAR_4[0], "enable")) {
   FUNC_1("enabling read failures on bad sectors");
   VAR_7->fail_read_on_bb = 1;
   VAR_10 = 0;
  } else if (!FUNC_11(VAR_4[0], "countbadblocks")) {
   FUNC_8(&VAR_7->dust_lock, VAR_13);
   FUNC_1("countbadblocks: %llu badblock(s) found",
          VAR_7->badblock_count);
   FUNC_9(&VAR_7->dust_lock, VAR_13);
   VAR_10 = 0;
  } else if (!FUNC_11(VAR_4[0], "clearbadblocks")) {
   VAR_10 = FUNC_3(VAR_7);
  } else if (!FUNC_11(VAR_4[0], "quiet")) {
   if (!VAR_7->quiet_mode)
    VAR_7->quiet_mode = 1;
   else
    VAR_7->quiet_mode = 0;
   VAR_10 = 0;
  } else {
   VAR_9 = 1;
  }
 } else if (VAR_3 == 2) {
  if (FUNC_10(VAR_4[1], "%llu%c", &VAR_11, &VAR_14) != 1)
   return VAR_10;

  VAR_12 = VAR_11;
  FUNC_7(VAR_8, VAR_7->sect_per_block);
  if (VAR_12 > VAR_8) {
   FUNC_0("selected block value out of range");
   return VAR_10;
  }

  if (!FUNC_11(VAR_4[0], "addbadblock"))
   VAR_10 = FUNC_2(VAR_7, VAR_12);
  else if (!FUNC_11(VAR_4[0], "removebadblock"))
   VAR_10 = FUNC_5(VAR_7, VAR_12);
  else if (!FUNC_11(VAR_4[0], "queryblock"))
   VAR_10 = FUNC_4(VAR_7, VAR_12);
  else
   VAR_9 = 1;

 } else
  FUNC_0("invalid number of arguments '%d'", VAR_3);

 if (VAR_9)
  FUNC_0("unrecognized message '%s' received", VAR_4[0]);

 return VAR_10;
}

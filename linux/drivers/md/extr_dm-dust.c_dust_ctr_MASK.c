
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dust_device {unsigned int sect_per_block; unsigned int blksz; unsigned long long start; int fail_read_on_bb; int quiet_mode; int dust_lock; scalar_t__ badblock_count; int badblocklist; int sect_per_block_shift; int dev; } ;
struct dm_target {char* error; int num_discard_bios; int num_flush_bios; struct dust_device* private; int table; int len; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (struct dm_target*,char*,int ,int *) ;
 scalar_t__ FUNC_3 (struct dm_target*,unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (struct dust_device*) ;
 scalar_t__ FUNC_7 (char*,int,unsigned int*) ;
 struct dust_device* FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,char*,unsigned long long*,char*) ;
 scalar_t__ FUNC_12 (unsigned int) ;

__attribute__((used)) static int FUNC_13(struct dm_target *VAR_5, unsigned int VAR_6, char **VAR_7)
{
 struct dust_device *VAR_8;
 unsigned long long VAR_9;
 char VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 sector_t VAR_13 = 2097152;
 sector_t VAR_14 = FUNC_9(VAR_5->len, VAR_13);

 if (VAR_6 != 3) {
  VAR_5->error = "Invalid argument count";
  return -VAR_0;
 }

 if (FUNC_7(VAR_7[2], 10, &VAR_11) || !VAR_11) {
  VAR_5->error = "Invalid block size parameter";
  return -VAR_0;
 }

 if (VAR_11 < 512) {
  VAR_5->error = "Block size must be at least 512";
  return -VAR_0;
 }

 if (!FUNC_5(VAR_11)) {
  VAR_5->error = "Block size must be a power of 2";
  return -VAR_0;
 }

 if (FUNC_12(VAR_11) > VAR_14) {
  VAR_5->error = "Block size is too large";
  return -VAR_0;
 }

 VAR_12 = (VAR_11 >> VAR_4);

 if (FUNC_11(VAR_7[1], "%llu%c", &VAR_9, &VAR_10) != 1 || VAR_9 != (sector_t)VAR_9) {
  VAR_5->error = "Invalid device offset sector";
  return -VAR_0;
 }

 VAR_8 = FUNC_8(sizeof(struct dust_device), VAR_2);
 if (VAR_8 == ((void*)0)) {
  VAR_5->error = "Cannot allocate context";
  return -VAR_1;
 }

 if (FUNC_2(VAR_5, VAR_7[0], FUNC_4(VAR_5->table), &VAR_8->dev)) {
  VAR_5->error = "Device lookup failed";
  FUNC_6(VAR_8);
  return -VAR_0;
 }

 VAR_8->sect_per_block = VAR_12;
 VAR_8->blksz = VAR_11;
 VAR_8->start = VAR_9;

 VAR_8->sect_per_block_shift = FUNC_1(VAR_12);





 VAR_8->fail_read_on_bb = 0;




 VAR_8->badblocklist = VAR_3;
 VAR_8->badblock_count = 0;
 FUNC_10(&VAR_8->dust_lock);

 VAR_8->quiet_mode = 0;

 FUNC_0(FUNC_3(VAR_5, VAR_8->sect_per_block) != 0);

 VAR_5->num_discard_bios = 1;
 VAR_5->num_flush_bios = 1;
 VAR_5->private = VAR_8;

 return 0;
}

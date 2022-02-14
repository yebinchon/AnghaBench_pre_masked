
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unstripe_c {int stripes; int chunk_size; int unstripe; unsigned long long physical_start; int unstripe_offset; int unstripe_width; scalar_t__ chunk_shift; int dev; } ;
struct dm_target {char* error; unsigned long long len; struct unstripe_c* private; int table; } ;
typedef unsigned long long sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct unstripe_c*,struct dm_target*) ;
 scalar_t__ FUNC_1 (struct dm_target*,char*,int ,int *) ;
 scalar_t__ FUNC_2 (struct dm_target*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char*,int,int*) ;
 struct unstripe_c* FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (unsigned long long,int) ;
 int FUNC_9 (char*,char*,unsigned long long*,char*) ;

__attribute__((used)) static int FUNC_10(struct dm_target *VAR_3, unsigned int VAR_4, char **VAR_5)
{
 struct unstripe_c *VAR_6;
 sector_t VAR_7;
 unsigned long long VAR_8;
 char VAR_9;

 if (VAR_4 != 5) {
  VAR_3->error = "Invalid number of arguments";
  return -VAR_0;
 }

 VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_2);
 if (!VAR_6) {
  VAR_3->error = "Memory allocation for unstriped context failed";
  return -VAR_1;
 }

 if (FUNC_6(VAR_5[0], 10, &VAR_6->stripes) || !VAR_6->stripes) {
  VAR_3->error = "Invalid stripe count";
  goto err;
 }

 if (FUNC_6(VAR_5[1], 10, &VAR_6->chunk_size) || !VAR_6->chunk_size) {
  VAR_3->error = "Invalid chunk_size";
  goto err;
 }

 if (FUNC_6(VAR_5[2], 10, &VAR_6->unstripe)) {
  VAR_3->error = "Invalid stripe number";
  goto err;
 }

 if (VAR_6->unstripe > VAR_6->stripes && VAR_6->stripes > 1) {
  VAR_3->error = "Please provide stripe between [0, # of stripes]";
  goto err;
 }

 if (FUNC_1(VAR_3, VAR_5[3], FUNC_3(VAR_3->table), &VAR_6->dev)) {
  VAR_3->error = "Couldn't get striped device";
  goto err;
 }

 if (FUNC_9(VAR_5[4], "%llu%c", &VAR_8, &VAR_9) != 1 || VAR_8 != (sector_t)VAR_8) {
  VAR_3->error = "Invalid striped device offset";
  goto err;
 }
 VAR_6->physical_start = VAR_8;

 VAR_6->unstripe_offset = VAR_6->unstripe * VAR_6->chunk_size;
 VAR_6->unstripe_width = (VAR_6->stripes - 1) * VAR_6->chunk_size;
 VAR_6->chunk_shift = FUNC_5(VAR_6->chunk_size) ? FUNC_4(VAR_6->chunk_size) - 1 : 0;

 VAR_7 = VAR_3->len;
 if (FUNC_8(VAR_7, VAR_6->chunk_size)) {
  VAR_3->error = "Target length not divisible by chunk size";
  goto err;
 }

 if (FUNC_2(VAR_3, VAR_6->chunk_size)) {
  VAR_3->error = "Failed to set max io len";
  goto err;
 }

 VAR_3->private = VAR_6;
 return 0;
err:
 FUNC_0(VAR_6, VAR_3);
 return -VAR_0;
}

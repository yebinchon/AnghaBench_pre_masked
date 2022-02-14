
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linear_c {unsigned long long start; int dev; } ;
struct dm_target {char* error; int num_flush_bios; int num_discard_bios; int num_secure_erase_bios; int num_write_same_bios; int num_write_zeroes_bios; struct linear_c* private; int table; } ;
typedef unsigned long long sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dm_target*,char*,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct linear_c*) ;
 struct linear_c* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,char*,unsigned long long*,char*) ;

__attribute__((used)) static int FUNC_5(struct dm_target *VAR_3, unsigned int VAR_4, char **VAR_5)
{
 struct linear_c *VAR_6;
 unsigned long long VAR_7;
 char VAR_8;
 int VAR_9;

 if (VAR_4 != 2) {
  VAR_3->error = "Invalid argument count";
  return -VAR_0;
 }

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
 if (VAR_6 == ((void*)0)) {
  VAR_3->error = "Cannot allocate linear context";
  return -VAR_1;
 }

 VAR_9 = -VAR_0;
 if (FUNC_4(VAR_5[1], "%llu%c", &VAR_7, &VAR_8) != 1 || VAR_7 != (sector_t)VAR_7) {
  VAR_3->error = "Invalid device sector";
  goto bad;
 }
 VAR_6->start = VAR_7;

 VAR_9 = FUNC_0(VAR_3, VAR_5[0], FUNC_1(VAR_3->table), &VAR_6->dev);
 if (VAR_9) {
  VAR_3->error = "Device lookup failed";
  goto bad;
 }

 VAR_3->num_flush_bios = 1;
 VAR_3->num_discard_bios = 1;
 VAR_3->num_secure_erase_bios = 1;
 VAR_3->num_write_same_bios = 1;
 VAR_3->num_write_zeroes_bios = 1;
 VAR_3->private = VAR_6;
 return 0;

      bad:
 FUNC_2(VAR_6);
 return VAR_9;
}

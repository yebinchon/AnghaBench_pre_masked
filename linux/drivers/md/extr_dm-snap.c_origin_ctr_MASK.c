
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {char* error; int num_flush_bios; struct dm_origin* private; int table; } ;
struct dm_origin {struct dm_target* ti; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dm_target*,char*,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dm_origin*) ;
 struct dm_origin* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct dm_target *VAR_3, unsigned int VAR_4, char **VAR_5)
{
 int VAR_6;
 struct dm_origin *VAR_7;

 if (VAR_4 != 1) {
  VAR_3->error = "origin: incorrect number of arguments";
  return -VAR_0;
 }

 VAR_7 = FUNC_3(sizeof(struct dm_origin), VAR_2);
 if (!VAR_7) {
  VAR_3->error = "Cannot allocate private origin structure";
  VAR_6 = -VAR_1;
  goto bad_alloc;
 }

 VAR_6 = FUNC_0(VAR_3, VAR_5[0], FUNC_1(VAR_3->table), &VAR_7->dev);
 if (VAR_6) {
  VAR_3->error = "Cannot get target device";
  goto bad_open;
 }

 VAR_7->ti = VAR_3;
 VAR_3->private = VAR_7;
 VAR_3->num_flush_bios = 1;

 return 0;

bad_open:
 FUNC_2(VAR_7);
bad_alloc:
 return VAR_6;
}

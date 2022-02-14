
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mirror_set {TYPE_1__* mirror; } ;
struct dm_target {char* error; int table; } ;
typedef unsigned long long sector_t ;
struct TYPE_2__ {unsigned long long offset; scalar_t__ error_type; int error_count; struct mirror_set* ms; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct dm_target*,char*,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,unsigned long long*,char*) ;

__attribute__((used)) static int FUNC_4(struct mirror_set *VAR_1, struct dm_target *VAR_2,
        unsigned int VAR_3, char **VAR_4)
{
 unsigned long long VAR_5;
 char VAR_6;
 int VAR_7;

 if (FUNC_3(VAR_4[1], "%llu%c", &VAR_5, &VAR_6) != 1 ||
     VAR_5 != (sector_t)VAR_5) {
  VAR_2->error = "Invalid offset";
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_2, VAR_4[0], FUNC_2(VAR_2->table),
       &VAR_1->mirror[VAR_3].dev);
 if (VAR_7) {
  VAR_2->error = "Device lookup failure";
  return VAR_7;
 }

 VAR_1->mirror[VAR_3].ms = VAR_1;
 FUNC_0(&(VAR_1->mirror[VAR_3].error_count), 0);
 VAR_1->mirror[VAR_3].error_type = 0;
 VAR_1->mirror[VAR_3].offset = VAR_5;

 return 0;
}

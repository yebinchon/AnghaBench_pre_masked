
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dm_target_spec {int next; scalar_t__ length; scalar_t__ sector_start; int target_type; } ;
struct dm_table {int dummy; } ;
struct dm_ioctl {unsigned int target_count; int data_start; } ;
typedef int sector_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct dm_table*,int ,int ,int ,char*) ;
 int FUNC_2 (struct dm_table*) ;
 int FUNC_3 (struct dm_target_spec*,int ,void*,struct dm_target_spec**,char**) ;

__attribute__((used)) static int FUNC_4(struct dm_table *VAR_1,
     struct dm_ioctl *VAR_2, size_t VAR_3)
{
 int VAR_4;
 unsigned int VAR_5 = 0;
 struct dm_target_spec *VAR_6 = (struct dm_target_spec *) VAR_2;
 uint32_t VAR_7 = VAR_2->data_start;
 void *VAR_8 = (void *) VAR_2 + VAR_3;
 char *VAR_9;

 if (!VAR_2->target_count) {
  FUNC_0("populate_table: no targets specified");
  return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_2->target_count; VAR_5++) {

  VAR_4 = FUNC_3(VAR_6, VAR_7, VAR_8, &VAR_6, &VAR_9);
  if (VAR_4) {
   FUNC_0("unable to find target");
   return VAR_4;
  }

  VAR_4 = FUNC_1(VAR_1, VAR_6->target_type,
     (sector_t) VAR_6->sector_start,
     (sector_t) VAR_6->length,
     VAR_9);
  if (VAR_4) {
   FUNC_0("error adding target to table");
   return VAR_4;
  }

  VAR_7 = VAR_6->next;
 }

 return FUNC_2(VAR_1);
}

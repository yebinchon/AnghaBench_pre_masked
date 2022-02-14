
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {char* error; int table; } ;
struct delay_class {unsigned long long start; unsigned long long delay; int dev; } ;
typedef unsigned long long sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct dm_target*,char*,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,unsigned long long*,char*) ;

__attribute__((used)) static int FUNC_3(struct dm_target *VAR_1, struct delay_class *VAR_2, char **VAR_3)
{
 int VAR_4;
 unsigned long long VAR_5;
 char VAR_6;

 if (FUNC_2(VAR_3[1], "%llu%c", &VAR_5, &VAR_6) != 1 || VAR_5 != (sector_t)VAR_5) {
  VAR_1->error = "Invalid device sector";
  return -VAR_0;
 }
 VAR_2->start = VAR_5;

 if (FUNC_2(VAR_3[2], "%u%c", &VAR_2->delay, &VAR_6) != 1) {
  VAR_1->error = "Invalid delay";
  return -VAR_0;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_3[0], FUNC_1(VAR_1->table), &VAR_2->dev);
 if (VAR_4) {
  VAR_1->error = "Device lookup failed";
  return VAR_4;
 }

 return 0;
}

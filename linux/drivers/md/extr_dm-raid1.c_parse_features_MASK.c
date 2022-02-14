
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mirror_set {int features; struct dm_target* ti; } ;
struct dm_target {char* error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mirror_set*) ;
 scalar_t__ FUNC_1 (struct mirror_set*) ;
 int FUNC_2 (char*,char*,unsigned int*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(struct mirror_set *VAR_3, unsigned VAR_4, char **VAR_5,
     unsigned *VAR_6)
{
 unsigned VAR_7;
 struct dm_target *VAR_8 = VAR_3->ti;
 char VAR_9;
 int VAR_10;

 *VAR_6 = 0;

 if (!VAR_4)
  return 0;

 if (FUNC_2(VAR_5[0], "%u%c", &VAR_7, &VAR_9) != 1) {
  VAR_8->error = "Invalid number of features";
  return -VAR_2;
 }

 VAR_4--;
 VAR_5++;
 (*VAR_6)++;

 if (VAR_7 > VAR_4) {
  VAR_8->error = "Not enough arguments to support feature count";
  return -VAR_2;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  if (!FUNC_3("handle_errors", VAR_5[0]))
   VAR_3->features |= VAR_0;
  else if (!FUNC_3("keep_log", VAR_5[0]))
   VAR_3->features |= VAR_1;
  else {
   VAR_8->error = "Unrecognised feature requested";
   return -VAR_2;
  }

  VAR_4--;
  VAR_5++;
  (*VAR_6)++;
 }
 if (!FUNC_0(VAR_3) && FUNC_1(VAR_3)) {
  VAR_8->error = "keep_log feature requires the handle_errors feature";
  return -VAR_2;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct object_id {int dummy; } ;
struct cache_entry {int name; int ce_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cache_entry const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,struct stat*) ;
 scalar_t__ FUNC_6 (int ,char*,struct object_id*) ;

__attribute__((used)) static int FUNC_7(const struct cache_entry *VAR_1, struct stat *VAR_2)
{
 if (FUNC_5(VAR_1->name, VAR_2) < 0) {
  if (!FUNC_4(VAR_0))
   return -1;
  return 1;
 }
 if (FUNC_3(VAR_1->name, FUNC_2(VAR_1)))
  return 1;
 if (FUNC_0(VAR_2->st_mode)) {
  struct object_id VAR_3;
  if (!FUNC_1(VAR_1->ce_mode) &&
      FUNC_6(VAR_1->name, "HEAD", &VAR_3))
   return 1;
 }
 return 0;
}

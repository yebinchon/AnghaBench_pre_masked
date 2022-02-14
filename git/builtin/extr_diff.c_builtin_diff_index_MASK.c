
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pathspec; } ;
struct TYPE_3__ {int nr; } ;
struct rev_info {int max_count; int min_age; int max_age; TYPE_2__ diffopt; TYPE_1__ pending; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct rev_info*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct rev_info *VAR_1,
         int VAR_2, const char **VAR_3)
{
 int VAR_4 = 0;
 while (1 < VAR_2) {
  const char *VAR_5 = VAR_3[1];
  if (!FUNC_5(VAR_5, "--cached") || !FUNC_5(VAR_5, "--staged"))
   VAR_4 = 1;
  else
   FUNC_6(VAR_0);
  VAR_3++; VAR_2--;
 }




 if (VAR_1->pending.nr != 1 ||
     VAR_1->max_count != -1 || VAR_1->min_age != -1 ||
     VAR_1->max_age != -1)
  FUNC_6(VAR_0);
 if (!VAR_4) {
  FUNC_4();
  if (FUNC_2(&VAR_1->diffopt.pathspec) < 0) {
   FUNC_0("read_cache_preload");
   return -1;
  }
 } else if (FUNC_1() < 0) {
  FUNC_0("read_cache");
  return -1;
 }
 return FUNC_3(VAR_1, VAR_4);
}

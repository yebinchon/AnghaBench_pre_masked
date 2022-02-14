
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pathspec; scalar_t__ output_format; } ;
struct TYPE_3__ {int nr; } ;
struct rev_info {int max_count; int min_age; int max_age; TYPE_2__ diffopt; TYPE_1__ pending; scalar_t__ abbrev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rev_info) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char const**) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,struct rev_info*,char const*) ;
 int FUNC_8 (struct rev_info*,int) ;
 int FUNC_9 (int,char const**,struct rev_info*,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (char const*,char*) ;
 int VAR_3 ;
 int FUNC_12 (int ) ;

int FUNC_13(int VAR_4, const char **VAR_5, const char *VAR_6)
{
 struct rev_info VAR_7;
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10;

 if (VAR_4 == 2 && !FUNC_11(VAR_5[1], "-h"))
  FUNC_12(VAR_1);

 FUNC_2(VAR_2, ((void*)0));
 FUNC_7(VAR_3, &VAR_7, VAR_6);
 VAR_7.abbrev = 0;
 FUNC_4(VAR_4, VAR_5);

 VAR_4 = FUNC_9(VAR_4, VAR_5, &VAR_7, ((void*)0));
 for (VAR_9 = 1; VAR_9 < VAR_4; VAR_9++) {
  const char *VAR_11 = VAR_5[VAR_9];

  if (!FUNC_11(VAR_11, "--cached"))
   VAR_8 = 1;
  else
   FUNC_12(VAR_1);
 }
 if (!VAR_7.diffopt.output_format)
  VAR_7.diffopt.output_format = VAR_0;





 if (VAR_7.pending.nr != 1 ||
     VAR_7.max_count != -1 || VAR_7.min_age != -1 || VAR_7.max_age != -1)
  FUNC_12(VAR_1);
 if (!VAR_8) {
  FUNC_10();
  if (FUNC_6(&VAR_7.diffopt.pathspec) < 0) {
   FUNC_3("read_cache_preload");
   return -1;
  }
 } else if (FUNC_5() < 0) {
  FUNC_3("read_cache");
  return -1;
 }
 VAR_10 = FUNC_8(&VAR_7, VAR_8);
 FUNC_0(VAR_7);
 return FUNC_1(&VAR_7.diffopt, VAR_10);
}

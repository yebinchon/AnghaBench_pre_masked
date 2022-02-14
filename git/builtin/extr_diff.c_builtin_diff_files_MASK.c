
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int output_format; int pathspec; } ;
struct rev_info {int max_count; int combine_merges; int dense_combined_merges; TYPE_1__ diffopt; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct rev_info*,unsigned int) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct rev_info *VAR_3, int VAR_4, const char **VAR_5)
{
 unsigned int VAR_6 = 0;

 while (1 < VAR_4 && VAR_5[1][0] == '-') {
  if (!FUNC_6(VAR_5[1], "--base"))
   VAR_3->max_count = 1;
  else if (!FUNC_6(VAR_5[1], "--ours"))
   VAR_3->max_count = 2;
  else if (!FUNC_6(VAR_5[1], "--theirs"))
   VAR_3->max_count = 3;
  else if (!FUNC_6(VAR_5[1], "-q"))
   VAR_6 |= VAR_1;
  else if (!FUNC_6(VAR_5[1], "-h"))
   FUNC_7(VAR_2);
  else
   return FUNC_1(FUNC_0("invalid option: %s"), VAR_5[1]);
  VAR_5++; VAR_4--;
 }







 if (VAR_3->max_count == -1 && !VAR_3->combine_merges &&
     (VAR_3->diffopt.output_format & VAR_0))
  VAR_3->combine_merges = VAR_3->dense_combined_merges = 1;

 FUNC_5();
 if (FUNC_3(&VAR_3->diffopt.pathspec) < 0) {
  FUNC_2("read_cache_preload");
  return -1;
 }
 return FUNC_4(VAR_3, VAR_6);
}

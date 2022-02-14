
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int output_format; int pathspec; } ;
struct TYPE_3__ {scalar_t__ nr; } ;
struct rev_info {int max_count; int min_age; int max_age; int combine_merges; int dense_combined_merges; TYPE_2__ diffopt; TYPE_1__ pending; scalar_t__ abbrev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,int *) ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char const**) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,struct rev_info*,char const*) ;
 int FUNC_6 (struct rev_info*,unsigned int) ;
 int FUNC_7 (int,char const**,struct rev_info*,int *) ;
 int FUNC_8 (char const*,char*) ;
 int VAR_5 ;
 int FUNC_9 (int ) ;

int FUNC_10(int VAR_6, const char **VAR_7, const char *VAR_8)
{
 struct rev_info VAR_9;
 int VAR_10;
 unsigned VAR_11 = 0;

 if (VAR_6 == 2 && !FUNC_8(VAR_7[1], "-h"))
  FUNC_9(VAR_3);

 FUNC_1(VAR_4, ((void*)0));
 FUNC_5(VAR_5, &VAR_9, VAR_8);
 VAR_9.abbrev = 0;
 FUNC_3(VAR_6, VAR_7);

 VAR_6 = FUNC_7(VAR_6, VAR_7, &VAR_9, ((void*)0));
 while (1 < VAR_6 && VAR_7[1][0] == '-') {
  if (!FUNC_8(VAR_7[1], "--base"))
   VAR_9.max_count = 1;
  else if (!FUNC_8(VAR_7[1], "--ours"))
   VAR_9.max_count = 2;
  else if (!FUNC_8(VAR_7[1], "--theirs"))
   VAR_9.max_count = 3;
  else if (!FUNC_8(VAR_7[1], "-q"))
   VAR_11 |= VAR_2;
  else
   FUNC_9(VAR_3);
  VAR_7++; VAR_6--;
 }
 if (!VAR_9.diffopt.output_format)
  VAR_9.diffopt.output_format = VAR_1;






 if (VAR_9.pending.nr ||
     VAR_9.min_age != -1 || VAR_9.max_age != -1 ||
     3 < VAR_9.max_count)
  FUNC_9(VAR_3);






 if (VAR_9.max_count == -1 && !VAR_9.combine_merges &&
     (VAR_9.diffopt.output_format & VAR_0))
  VAR_9.combine_merges = VAR_9.dense_combined_merges = 1;

 if (FUNC_4(&VAR_9.diffopt.pathspec) < 0) {
  FUNC_2("read_cache_preload");
  return -1;
 }
 VAR_10 = FUNC_6(&VAR_9, VAR_11);
 return FUNC_0(&VAR_9.diffopt, VAR_10);
}

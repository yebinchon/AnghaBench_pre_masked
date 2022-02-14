
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_state {int max_parents; int limit; int skip; int min_parents; int show_diff; int show_log_size; int repodir; int grep; int committer; int author; int revisions; int sorting; } ;
struct log_options {int max_parents; int limit; int skip; int min_parents; int show_diff; int show_log_size; int repodir; int grep; int committer; int author; int revisions; int sorting; } ;
struct args_info {int pos; } ;


 struct args_info VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct log_state*,char const*) ;
 int FUNC_1 (int*,char const*,int ) ;
 scalar_t__ FUNC_2 (int*,struct args_info*,char*,int) ;
 scalar_t__ FUNC_3 (int *,struct args_info*,char*) ;
 int FUNC_4 (struct log_state*,int ,int) ;
 int FUNC_5 (struct log_state*,int ) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*,char const*) ;

__attribute__((used)) static int FUNC_8(
 struct log_state *VAR_4, struct log_options *VAR_5, int VAR_6, char **VAR_7)
{
 struct args_info VAR_8 = VAR_0;

 FUNC_4(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->sorting = VAR_2;

 FUNC_4(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->max_parents = -1;
 VAR_5->limit = -1;

 for (VAR_8.pos = 1; VAR_8.pos < VAR_6; ++VAR_8.pos) {
  const char *VAR_9 = VAR_7[VAR_8.pos];

  if (VAR_9[0] != '-') {
   if (!FUNC_0(VAR_4, VAR_9))
    VAR_4->revisions++;
   else

    break;
  } else if (!FUNC_6(VAR_9, "--")) {
   ++VAR_8.pos;
   break;
  }
  else if (!FUNC_6(VAR_9, "--date-order"))
   FUNC_5(VAR_4, VAR_2);
  else if (!FUNC_6(VAR_9, "--topo-order"))
   FUNC_5(VAR_4, VAR_3);
  else if (!FUNC_6(VAR_9, "--reverse"))
   FUNC_5(VAR_4, VAR_1);
  else if (FUNC_3(&VAR_5->author, &VAR_8, "--author"))
                              ;
  else if (FUNC_3(&VAR_5->committer, &VAR_8, "--committer"))
                                 ;
  else if (FUNC_3(&VAR_5->grep, &VAR_8, "--grep"))
                            ;
  else if (FUNC_3(&VAR_4->repodir, &VAR_8, "--git-dir"))
                        ;
  else if (FUNC_2(&VAR_5->skip, &VAR_8, "--skip", 0))
                             ;
  else if (FUNC_2(&VAR_5->limit, &VAR_8, "--max-count", 0))
                                  ;
  else if (VAR_9[1] >= '0' && VAR_9[1] <= '9')
   FUNC_1(&VAR_5->limit, VAR_9 + 1, 0);
  else if (FUNC_2(&VAR_5->limit, &VAR_8, "-n", 0))
                         ;
  else if (!FUNC_6(VAR_9, "--merges"))
   VAR_5->min_parents = 2;
  else if (!FUNC_6(VAR_9, "--no-merges"))
   VAR_5->max_parents = 1;
  else if (!FUNC_6(VAR_9, "--no-min-parents"))
   VAR_5->min_parents = 0;
  else if (!FUNC_6(VAR_9, "--no-max-parents"))
   VAR_5->max_parents = -1;
  else if (FUNC_2(&VAR_5->max_parents, &VAR_8, "--max-parents=", 1))
                                    ;
  else if (FUNC_2(&VAR_5->min_parents, &VAR_8, "--min-parents=", 0))
                                    ;
  else if (!FUNC_6(VAR_9, "-p") || !FUNC_6(VAR_9, "-u") || !FUNC_6(VAR_9, "--patch"))
   VAR_5->show_diff = 1;
  else if (!FUNC_6(VAR_9, "--log-size"))
   VAR_5->show_log_size = 1;
  else
   FUNC_7("Unsupported argument", VAR_9);
 }

 return VAR_8.pos;
}

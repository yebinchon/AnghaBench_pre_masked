
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule_update_clone {char const* recursive_prefix; char const* depth; char const* prefix; int warn_if_uninitialized; int list; int update; int max_jobs; int progress; int quiet; int recommend_shallow; int dissociate; int references; } ;
struct pathspec {scalar_t__ nr; } ;
struct option {int dummy; } ;


 char const* FUNC_0 (char*) ;
 struct option FUNC_1 (int ,char*,int *,char const*) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (char,char*,int *,char const*) ;
 struct option FUNC_4 (int ,char*,char const**,char*,char const*) ;
 struct option FUNC_5 (int ,char*,int *,char const*,char const*) ;
 struct option FUNC_6 (int *,char const*) ;
 struct submodule_update_clone VAR_0 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_10 (int,char const**,char const*,struct pathspec*,int *) ;
 int FUNC_11 (int,char const**,char const*,struct option*,char const* const*,int ) ;
 scalar_t__ FUNC_12 (char const*,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct submodule_update_clone*) ;

__attribute__((used)) static int FUNC_15(int VAR_2, const char **VAR_3, const char *VAR_4)
{
 const char *VAR_5 = ((void*)0);
 struct pathspec VAR_6;
 struct submodule_update_clone VAR_7 = VAR_0;

 struct option VAR_8[] = {
  FUNC_4(0, "prefix", &VAR_4,
      FUNC_0("path"),
      FUNC_0("path into the working tree")),
  FUNC_4(0, "recursive-prefix", &VAR_7.recursive_prefix,
      FUNC_0("path"),
      FUNC_0("path into the working tree, across nested "
         "submodule boundaries")),
  FUNC_4(0, "update", &VAR_5,
      FUNC_0("string"),
      FUNC_0("rebase, merge, checkout or none")),
  FUNC_5(0, "reference", &VAR_7.references, FUNC_0("repo"),
      FUNC_0("reference repository")),
  FUNC_1(0, "dissociate", &VAR_7.dissociate,
      FUNC_0("use --reference only while cloning")),
  FUNC_4(0, "depth", &VAR_7.depth, "<depth>",
      FUNC_0("Create a shallow clone truncated to the "
         "specified number of revisions")),
  FUNC_3('j', "jobs", &VAR_7.max_jobs,
       FUNC_0("parallel jobs")),
  FUNC_1(0, "recommend-shallow", &VAR_7.recommend_shallow,
       FUNC_0("whether the initial clone should follow the shallow recommendation")),
  FUNC_6(&VAR_7.quiet, FUNC_0("don't print cloning progress")),
  FUNC_1(0, "progress", &VAR_7.progress,
       FUNC_0("force cloning progress")),
  FUNC_2()
 };

 const char *const VAR_9[] = {
  FUNC_0("git submodule--helper update-clone [--prefix=<path>] [<path>...]"),
  ((void*)0)
 };
 VAR_7.prefix = VAR_4;

 FUNC_13(&VAR_7.max_jobs);
 FUNC_9(VAR_1, &VAR_7.max_jobs);

 VAR_2 = FUNC_11(VAR_2, VAR_3, VAR_4, VAR_8,
        VAR_9, 0);

 if (VAR_5)
  if (FUNC_12(VAR_5, &VAR_7.update) < 0)
   FUNC_8(FUNC_7("bad value for update parameter"));

 if (FUNC_10(VAR_2, VAR_3, VAR_4, &VAR_6, &VAR_7.list) < 0)
  return 1;

 if (VAR_6.nr)
  VAR_7.warn_if_uninitialized = 1;

 return FUNC_14(&VAR_7);
}

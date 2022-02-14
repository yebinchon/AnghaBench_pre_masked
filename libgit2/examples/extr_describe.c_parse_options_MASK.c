
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int always_use_long_format; int * dirty_suffix; int abbreviated_size; } ;
struct TYPE_11__ {int show_commit_oid_as_fallback; int only_follow_first_parent; int pattern; scalar_t__ max_candidates_tags; int describe_strategy; } ;
struct TYPE_13__ {scalar_t__ commit_count; TYPE_2__ format_options; TYPE_1__ describe_options; } ;
typedef TYPE_3__ describe_options ;
struct TYPE_14__ {int pos; } ;
typedef TYPE_4__ args_info ;


 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *) ;
 scalar_t__ FUNC_1 (int*,TYPE_4__*,char*,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_4__*,char*) ;
 scalar_t__ FUNC_3 (int **,TYPE_4__*,char*,char*) ;
 int FUNC_4 (TYPE_3__*,char const*) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static void FUNC_7(describe_options *VAR_3, int VAR_4, char **VAR_5)
{
 args_info VAR_6 = VAR_0;

 for (VAR_6.pos = 1; VAR_6.pos < VAR_4; ++VAR_6.pos) {
  const char *VAR_7 = VAR_5[VAR_6.pos];

  if (VAR_7[0] != '-') {
   FUNC_4(VAR_3, VAR_7);
  } else if (!FUNC_6(VAR_7, "--all")) {
   VAR_3->describe_options.describe_strategy = VAR_1;
  } else if (!FUNC_6(VAR_7, "--tags")) {
   VAR_3->describe_options.describe_strategy = VAR_2;
  } else if (!FUNC_6(VAR_7, "--exact-match")) {
   VAR_3->describe_options.max_candidates_tags = 0;
  } else if (!FUNC_6(VAR_7, "--long")) {
   VAR_3->format_options.always_use_long_format = 1;
  } else if (!FUNC_6(VAR_7, "--always")) {
   VAR_3->describe_options.show_commit_oid_as_fallback = 1;
  } else if (!FUNC_6(VAR_7, "--first-parent")) {
   VAR_3->describe_options.only_follow_first_parent = 1;
  } else if (FUNC_3(&VAR_3->format_options.dirty_suffix, &VAR_6, "--dirty", "-dirty")) {
  } else if (FUNC_1((int *)&VAR_3->format_options.abbreviated_size, &VAR_6, "--abbrev", 0)) {
  } else if (FUNC_1((int *)&VAR_3->describe_options.max_candidates_tags, &VAR_6, "--candidates", 0)) {
  } else if (FUNC_2(&VAR_3->describe_options.pattern, &VAR_6, "--match")) {
  } else {
   FUNC_5();
  }
 }

 if (VAR_3->commit_count > 0) {
  if (VAR_3->format_options.dirty_suffix)
   FUNC_0("--dirty is incompatible with commit-ishes", ((void*)0));
 }
 else {
  if (!VAR_3->format_options.dirty_suffix || !VAR_3->format_options.dirty_suffix[0]) {
   FUNC_4(VAR_3, "HEAD");
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_options {char* subtree_shift; long xdl_opts; int renormalize; int detect_renames; int rename_score; int recursive_variant; } ;


 void* FUNC_0 (struct merge_options*,int ) ;
 int FUNC_1 (struct merge_options*,int ) ;
 int FUNC_2 (struct merge_options*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 long VAR_9 ;
 long FUNC_3 (char const*) ;
 int FUNC_4 (char const**) ;
 scalar_t__ FUNC_5 (char const*,char*,char const**) ;
 int FUNC_6 (char const*,char*) ;

int FUNC_7(struct merge_options *VAR_10, const char *VAR_11)
{
 const char *VAR_12;

 if (!VAR_11 || !*VAR_11)
  return -1;
 if (!FUNC_6(VAR_11, "ours"))
  VAR_10->recursive_variant = VAR_5;
 else if (!FUNC_6(VAR_11, "theirs"))
  VAR_10->recursive_variant = VAR_6;
 else if (!FUNC_6(VAR_11, "subtree"))
  VAR_10->subtree_shift = "";
 else if (FUNC_5(VAR_11, "subtree=", &VAR_12))
  VAR_10->subtree_shift = VAR_12;
 else if (!FUNC_6(VAR_11, "patience"))
  VAR_10->xdl_opts = FUNC_0(VAR_10, VAR_8);
 else if (!FUNC_6(VAR_11, "histogram"))
  VAR_10->xdl_opts = FUNC_0(VAR_10, VAR_0);
 else if (FUNC_5(VAR_11, "diff-algorithm=", &VAR_12)) {
  long VAR_13 = FUNC_3(VAR_12);
  if (VAR_13 < 0)
   return -1;

  FUNC_1(VAR_10, VAR_7);
  VAR_10->xdl_opts &= ~VAR_9;
  VAR_10->xdl_opts |= VAR_13;
 }
 else if (!FUNC_6(VAR_11, "ignore-space-change"))
  FUNC_2(VAR_10, VAR_4);
 else if (!FUNC_6(VAR_11, "ignore-all-space"))
  FUNC_2(VAR_10, VAR_2);
 else if (!FUNC_6(VAR_11, "ignore-space-at-eol"))
  FUNC_2(VAR_10, VAR_3);
 else if (!FUNC_6(VAR_11, "ignore-cr-at-eol"))
  FUNC_2(VAR_10, VAR_1);
 else if (!FUNC_6(VAR_11, "renormalize"))
  VAR_10->renormalize = 1;
 else if (!FUNC_6(VAR_11, "no-renormalize"))
  VAR_10->renormalize = 0;
 else if (!FUNC_6(VAR_11, "no-renames"))
  VAR_10->detect_renames = 0;
 else if (!FUNC_6(VAR_11, "find-renames")) {
  VAR_10->detect_renames = 1;
  VAR_10->rename_score = 0;
 }
 else if (FUNC_5(VAR_11, "find-renames=", &VAR_12) ||
   FUNC_5(VAR_11, "rename-threshold=", &VAR_12)) {
  if ((VAR_10->rename_score = FUNC_4(&VAR_12)) == -1 || *VAR_12 != 0)
   return -1;
  VAR_10->detect_renames = 1;
 }




 else
  return -1;
 return 0;
}

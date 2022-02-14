
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct commit**,int) ;
 int FUNC_1 (char*) ;
 struct option FUNC_2 (char,char*,int*,int ) ;
 struct option FUNC_3 (int ,char*,int*,int ,float) ;
 struct option FUNC_4 () ;
 int FUNC_5 (char*) ;
 struct commit* FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int VAR_0 ;
 int FUNC_8 (int,char const**) ;
 int FUNC_9 (int,char const**) ;
 int FUNC_10 (int,char const**) ;
 int FUNC_11 (int,char const**,int) ;
 int VAR_1 ;
 int FUNC_12 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_13 (struct commit**,int,int) ;
 int FUNC_14 (int ,struct option*) ;

int FUNC_15(int VAR_2, const char **VAR_3, const char *VAR_4)
{
 struct commit **VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8 = 0;

 struct option VAR_9[] = {
  FUNC_2('a', "all", &VAR_7, FUNC_1("output all common ancestors")),
  FUNC_3(0, "octopus", &VAR_8,
       FUNC_1("find ancestors for a single n-way merge"), 'o'),
  FUNC_3(0, "independent", &VAR_8,
       FUNC_1("list revs not reachable from others"), 'r'),
  FUNC_3(0, "is-ancestor", &VAR_8,
       FUNC_1("is the first one ancestor of the other?"), 'a'),
  FUNC_3(0, "fork-point", &VAR_8,
       FUNC_1("find where <commit> forked from reflog of <ref>"), 'f'),
  FUNC_4()
 };

 FUNC_7(VAR_0, ((void*)0));
 VAR_2 = FUNC_12(VAR_2, VAR_3, VAR_4, VAR_9, VAR_1, 0);

 if (VAR_8 == 'a') {
  if (VAR_2 < 2)
   FUNC_14(VAR_1, VAR_9);
  if (VAR_7)
   FUNC_5("--is-ancestor cannot be used with --all");
  return FUNC_10(VAR_2, VAR_3);
 }

 if (VAR_8 == 'r' && VAR_7)
  FUNC_5("--independent cannot be used with --all");

 if (VAR_8 == 'o')
  return FUNC_11(VAR_2, VAR_3, VAR_7);

 if (VAR_8 == 'r')
  return FUNC_9(VAR_2, VAR_3);

 if (VAR_8 == 'f') {
  if (VAR_2 < 1 || 2 < VAR_2)
   FUNC_14(VAR_1, VAR_9);
  return FUNC_8(VAR_2, VAR_3);
 }

 if (VAR_2 < 2)
  FUNC_14(VAR_1, VAR_9);

 FUNC_0(VAR_5, VAR_2);
 while (VAR_2-- > 0)
  VAR_5[VAR_6++] = FUNC_6(*VAR_3++);
 return FUNC_13(VAR_5, VAR_6, VAR_7);
}

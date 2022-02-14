
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_options {int detect_directory_renames; void* detect_renames; int rename_limit; int verbosity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,char**) ;
 void* FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static void FUNC_7(struct merge_options *VAR_4)
{
 char *VAR_5 = ((void*)0);
 FUNC_2("merge.verbosity", &VAR_4->verbosity);
 FUNC_2("diff.renamelimit", &VAR_4->rename_limit);
 FUNC_2("merge.renamelimit", &VAR_4->rename_limit);
 if (!FUNC_3("diff.renames", &VAR_5)) {
  VAR_4->detect_renames = FUNC_4("diff.renames", VAR_5);
  FUNC_0(VAR_5);
 }
 if (!FUNC_3("merge.renames", &VAR_5)) {
  VAR_4->detect_renames = FUNC_4("merge.renames", VAR_5);
  FUNC_0(VAR_5);
 }
 if (!FUNC_3("merge.directoryrenames", &VAR_5)) {
  int VAR_6 = FUNC_5(VAR_5);
  if (0 <= VAR_6) {
   VAR_4->detect_directory_renames = VAR_6 ?
    VAR_2 :
    VAR_1;
  } else if (!FUNC_6(VAR_5, "conflict")) {
   VAR_4->detect_directory_renames =
    VAR_0;
  }
  FUNC_0(VAR_5);
 }
 FUNC_1(VAR_3, ((void*)0));
}

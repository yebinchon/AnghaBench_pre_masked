
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int entry_count; } ;
typedef TYPE_1__ status_entry_counts ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ git_status_options ;
typedef int git_repository ;
typedef int git_index ;


 int VAR_0 ;



 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (char*,int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ) ;
 int FUNC_11 (int **,char*,int) ;
 int FUNC_12 (int ,TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 () ;
 int FUNC_15 (TYPE_1__,char const**,unsigned int*) ;

void FUNC_16(void)
{
 git_status_options VAR_7 = VAR_1;
 status_entry_counts VAR_8;
 git_repository *VAR_9;
 static const char *VAR_10[] = {
  ".gitmodules",
  "added",
  "broken/tracked",
  "deleted",
  "ignored",
  "modified",
  "untracked"
 };
 static unsigned int VAR_11[] = {
  129,
  130,
  130,
  131,
  132,
  129,
  128,
 };

 VAR_6 = FUNC_14();

 VAR_7.flags = VAR_3 |
  VAR_4 |
  VAR_2;


 {
  git_index *VAR_12;
  FUNC_4(FUNC_13("submodules/broken", 0777));
  FUNC_2("submodules/broken/tracked", "tracked content");
  FUNC_3(FUNC_10(&VAR_12, VAR_6));
  FUNC_3(FUNC_6(VAR_12, "broken/tracked"));
  FUNC_3(FUNC_8(VAR_12));
  FUNC_7(VAR_12);
 }

 FUNC_15(
  VAR_8, VAR_10, VAR_11);
 FUNC_3(FUNC_12(
  VAR_6, &VAR_7, VAR_5, &VAR_8));
 FUNC_0(7, VAR_8.entry_count);



 FUNC_4(FUNC_13("submodules/broken/.git", 0777));
 FUNC_4(FUNC_13("submodules/broken/.git/info", 0777));
 FUNC_2("submodules/broken/.git/info/exclude", "# bogus");

 FUNC_15(
  VAR_8, VAR_10, VAR_11);
 FUNC_3(FUNC_12(
  VAR_6, &VAR_7, VAR_5, &VAR_8));
 FUNC_0(7, VAR_8.entry_count);



 FUNC_3(FUNC_5(
  "submodules/broken/.git", ((void*)0), VAR_0));
 FUNC_3(FUNC_11(&VAR_9, "submodules/broken", 0));
 FUNC_9(VAR_9);

 FUNC_15(
  VAR_8, VAR_10, VAR_11);
 FUNC_3(FUNC_12(
  VAR_6, &VAR_7, VAR_5, &VAR_8));
 FUNC_0(7, VAR_8.entry_count);



 FUNC_3(FUNC_5(
  "submodules/broken/.git", ((void*)0), VAR_0));
 FUNC_1("submodules/.gitmodules",
  "\n[submodule \"broken\"]\n"
  "\tpath = broken\n"
  "\turl = https://github.com/not/used\n\n");

 FUNC_15(
  VAR_8, VAR_10, VAR_11);
 FUNC_3(FUNC_12(
  VAR_6, &VAR_7, VAR_5, &VAR_8));
 FUNC_0(7, VAR_8.entry_count);
}

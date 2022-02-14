
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int member_0; } ;
struct TYPE_7__ {char* path; int id; int mode; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (int ,char*) ;
 TYPE_2__* FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (char*,int) ;

void FUNC_12(void)
{
 git_index_entry VAR_3 = { 0 };
 const git_index_entry *VAR_4;

 if (!FUNC_5(VAR_2, "core.ignorecase"))
  FUNC_6();

 VAR_3.mode = VAR_0;
 FUNC_3(FUNC_10(&VAR_3.id, "f990a25a74d1a8281ce2ab018ea8df66795cd60b"));

 VAR_3.path = "just_a_dir/a/b/c/d/e/file1.txt";
 FUNC_3(FUNC_7(VAR_1, &VAR_3));

 VAR_3.path = "just_a_dir/a/B/C/D/E/file2.txt";
 FUNC_3(FUNC_7(VAR_1, &VAR_3));

 FUNC_4(FUNC_11("submod2/just_a_dir/a", 0777));
 FUNC_4(FUNC_11("submod2/just_a_dir/a/b", 0777));
 FUNC_4(FUNC_11("submod2/just_a_dir/a/b/z", 0777));
 FUNC_4(FUNC_11("submod2/just_a_dir/a/b/z/y", 0777));
 FUNC_4(FUNC_11("submod2/just_a_dir/a/b/z/y/x", 0777));

 FUNC_2("submod2/just_a_dir/a/b/z/y/x/FOO.txt", "This is a file");

 FUNC_3(FUNC_8(VAR_1, "just_a_dir/A/b/Z/y/X/foo.txt"));

 FUNC_0(VAR_4 = FUNC_9(VAR_1, "just_a_dir/A/b/Z/y/X/foo.txt", 0));
 FUNC_1("just_a_dir/a/b/Z/y/X/foo.txt", VAR_4->path);
}


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
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (int ,char*) ;
 TYPE_2__* FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int *,char*) ;

void FUNC_11(void)
{
 git_index_entry VAR_3 = { 0 };
 const git_index_entry *VAR_4;

 if (!FUNC_5(VAR_2, "core.ignorecase"))
  FUNC_6();

 VAR_3.mode = VAR_0;
 FUNC_3(FUNC_10(&VAR_3.id, "f990a25a74d1a8281ce2ab018ea8df66795cd60b"));


 VAR_3.path = "Just_a_dir/file0.txt";
 FUNC_3(FUNC_7(VAR_1, &VAR_3));

 VAR_3.path = "just_a_dir/fileA.txt";
 FUNC_3(FUNC_7(VAR_1, &VAR_3));

 VAR_3.path = "Just_A_Dir/fileB.txt";
 FUNC_3(FUNC_7(VAR_1, &VAR_3));

 VAR_3.path = "JUST_A_DIR/fileC.txt";
 FUNC_3(FUNC_7(VAR_1, &VAR_3));

 VAR_3.path = "just_A_dir/fileD.txt";
 FUNC_3(FUNC_7(VAR_1, &VAR_3));

 VAR_3.path = "JUST_a_DIR/fileE.txt";
 FUNC_3(FUNC_7(VAR_1, &VAR_3));

 FUNC_2("submod2/just_a_dir/file1.txt", "This is a file");
 FUNC_2("submod2/just_a_dir/file2.txt", "This is another file");
 FUNC_2("submod2/just_a_dir/file3.txt", "This is another file");
 FUNC_2("submod2/just_a_dir/file4.txt", "And another file");

 FUNC_3(FUNC_8(VAR_1, "just_a_dir/File1.txt"));
 FUNC_3(FUNC_8(VAR_1, "JUST_A_DIR/file2.txt"));
 FUNC_3(FUNC_8(VAR_1, "Just_A_Dir/FILE3.txt"));
 FUNC_3(FUNC_8(VAR_1, "JusT_A_DIR/FILE4.txt"));

 FUNC_0(VAR_4 = FUNC_9(VAR_1, "just_a_dir/File1.txt", 0));
 FUNC_1("just_a_dir/File1.txt", VAR_4->path);

 FUNC_0(VAR_4 = FUNC_9(VAR_1, "JUST_A_DIR/file2.txt", 0));
 FUNC_1("JUST_A_DIR/file2.txt", VAR_4->path);

 FUNC_0(VAR_4 = FUNC_9(VAR_1, "Just_A_Dir/FILE3.txt", 0));
 FUNC_1("Just_A_Dir/FILE3.txt", VAR_4->path);

 FUNC_4("submod2/just_a_dir/file3.txt", "Rewritten");
 FUNC_3(FUNC_8(VAR_1, "Just_A_Dir/file3.txt"));

 FUNC_0(VAR_4 = FUNC_9(VAR_1, "Just_A_Dir/file3.txt", 0));
 FUNC_1("Just_A_Dir/FILE3.txt", VAR_4->path);
}

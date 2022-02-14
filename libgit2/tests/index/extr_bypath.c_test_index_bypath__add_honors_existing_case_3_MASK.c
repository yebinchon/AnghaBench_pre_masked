
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
 int FUNC_4 (int ,char*) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ,char*) ;
 TYPE_2__* FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int *,char*) ;

void FUNC_10(void)
{
 git_index_entry VAR_3 = { 0 };
 const git_index_entry *VAR_4;

 if (!FUNC_4(VAR_2, "core.ignorecase"))
  FUNC_5();

 VAR_3.mode = VAR_0;
 FUNC_3(FUNC_9(&VAR_3.id, "f990a25a74d1a8281ce2ab018ea8df66795cd60b"));

 VAR_3.path = "just_a_dir/filea.txt";
 FUNC_3(FUNC_6(VAR_1, &VAR_3));

 VAR_3.path = "Just_A_Dir/fileB.txt";
 FUNC_3(FUNC_6(VAR_1, &VAR_3));

 VAR_3.path = "just_A_DIR/FILEC.txt";
 FUNC_3(FUNC_6(VAR_1, &VAR_3));

 VAR_3.path = "Just_a_DIR/FileD.txt";
 FUNC_3(FUNC_6(VAR_1, &VAR_3));

 FUNC_2("submod2/JuSt_A_DiR/fILEE.txt", "This is a file");

 FUNC_3(FUNC_7(VAR_1, "just_a_dir/fILEE.txt"));

 FUNC_0(VAR_4 = FUNC_8(VAR_1, "JUST_A_DIR/fILEE.txt", 0));
 FUNC_1("just_a_dir/fILEE.txt", VAR_4->path);
}

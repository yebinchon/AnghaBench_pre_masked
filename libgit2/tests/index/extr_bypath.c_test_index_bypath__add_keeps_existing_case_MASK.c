
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int path; } ;
typedef TYPE_1__ git_index_entry ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int ,char*) ;
 TYPE_1__* FUNC_8 (int ,char*,int ) ;

void FUNC_9(void)
{
 const git_index_entry *VAR_2;

 if (!FUNC_5(VAR_1, "core.ignorecase"))
  FUNC_6();

 FUNC_2("submod2/just_a_dir/file1.txt", "This is a file");
 FUNC_3(FUNC_7(VAR_0, "just_a_dir/file1.txt"));

 FUNC_0(VAR_2 = FUNC_8(VAR_0, "just_a_dir/file1.txt", 0));
 FUNC_1("just_a_dir/file1.txt", VAR_2->path);

 FUNC_4("submod2/just_a_dir/file1.txt", "Updated!");
 FUNC_3(FUNC_7(VAR_0, "just_a_dir/FILE1.txt"));

 FUNC_0(VAR_2 = FUNC_8(VAR_0, "just_a_dir/FILE1.txt", 0));
 FUNC_1("just_a_dir/file1.txt", VAR_2->path);
}

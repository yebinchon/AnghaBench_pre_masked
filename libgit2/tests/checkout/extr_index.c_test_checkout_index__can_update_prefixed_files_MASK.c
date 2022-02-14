
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,int *,TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int) ;

void FUNC_9(void)
{
 git_checkout_options VAR_5 = VAR_0;

 FUNC_2(0, FUNC_7("./testrepo/README"));
 FUNC_2(0, FUNC_7("./testrepo/branch_file.txt"));
 FUNC_2(0, FUNC_7("./testrepo/new.txt"));

 FUNC_3("./testrepo/READ", "content\n");
 FUNC_3("./testrepo/README.after", "content\n");
 FUNC_4(FUNC_8("./testrepo/branch_file", 0777));
 FUNC_4(FUNC_8("./testrepo/branch_file/contained_dir", 0777));
 FUNC_3("./testrepo/branch_file/contained_file", "content\n");
 FUNC_4(FUNC_8("./testrepo/branch_file.txt.after", 0777));

 VAR_5.checkout_strategy =
  VAR_3 |
  VAR_1 |
  VAR_2;

 FUNC_4(FUNC_5(VAR_4, ((void*)0), &VAR_5));




 FUNC_0("./testrepo/README", "hey there\n");
 FUNC_0("./testrepo/branch_file.txt", "hi\nbye!\n");
 FUNC_0("./testrepo/new.txt", "my new file\n");

 FUNC_1(!FUNC_6("testrepo/READ"));
 FUNC_1(!FUNC_6("testrepo/README.after"));
 FUNC_1(!FUNC_6("testrepo/branch_file"));
 FUNC_1(!FUNC_6("testrepo/branch_file.txt.after"));
}

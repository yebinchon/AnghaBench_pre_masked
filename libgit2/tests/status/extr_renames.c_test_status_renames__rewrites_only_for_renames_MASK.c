
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct status_entry {char* member_1; char* member_2; int member_0; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_status_options ;
typedef int git_status_list ;
typedef int git_index ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct status_entry*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,TYPE_1__*) ;

void FUNC_7(void)
{
 git_index *VAR_7;
 git_status_list *VAR_8;
 git_status_options VAR_9 = VAR_0;
 struct status_entry VAR_10[] = {
  { VAR_5, "ikeepsix.txt", "ikeepsix.txt" },
 };

 VAR_9.flags |= VAR_1;
 VAR_9.flags |= VAR_3;
 VAR_9.flags |= VAR_4;
 VAR_9.flags |= VAR_2;

 FUNC_1(FUNC_4(&VAR_7, VAR_6));

 FUNC_2("renames/ikeepsix.txt",
  "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n");
 FUNC_1(FUNC_6(&VAR_8, VAR_6, &VAR_9));
 FUNC_0(VAR_8, VAR_10, 1);
 FUNC_5(VAR_8);

 FUNC_3(VAR_7);
}

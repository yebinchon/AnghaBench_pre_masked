
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


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct status_entry*,int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,TYPE_1__*) ;
 int FUNC_9 (int ,char*,char*) ;

void FUNC_10(void)
{
 git_index *VAR_4;
 git_status_list *VAR_5;
 git_status_options VAR_6 = VAR_1;
 struct status_entry VAR_7[] = {
  { VAR_0, "ikeepsix.txt", "newname.txt" },
 };

 VAR_6.flags |= VAR_2;

 FUNC_1(FUNC_6(&VAR_4, VAR_3));

 FUNC_9(VAR_3, "ikeepsix.txt", "newname.txt");

 FUNC_1(FUNC_4(VAR_4, "ikeepsix.txt"));
 FUNC_1(FUNC_2(VAR_4, "newname.txt"));
 FUNC_1(FUNC_5(VAR_4));

 FUNC_1(FUNC_8(&VAR_5, VAR_3, &VAR_6));
 FUNC_0(VAR_5, VAR_7, 1);
 FUNC_7(VAR_5);

 FUNC_3(VAR_4);
}

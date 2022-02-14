
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct status_entry {char* member_1; char* member_2; int member_0; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_status_options ;
typedef int git_status_list ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct status_entry*,int) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,TYPE_1__*) ;
 int FUNC_4 (int ,char*,char*) ;

void FUNC_5(void)
{
 git_status_list *VAR_5;
 git_status_options VAR_6 = VAR_0;
 struct status_entry VAR_7[] = {
  { VAR_3, "ikeepsix.txt", "newname.txt" },
 };

 VAR_6.flags |= VAR_1;
 VAR_6.flags |= VAR_2;

 FUNC_4(VAR_4, "ikeepsix.txt", "newname.txt");

 FUNC_1(FUNC_3(&VAR_5, VAR_4, &VAR_6));
 FUNC_0(VAR_5, VAR_7, 1);
 FUNC_2(VAR_5);
}

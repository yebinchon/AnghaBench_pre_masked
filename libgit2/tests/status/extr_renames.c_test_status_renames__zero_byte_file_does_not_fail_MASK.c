
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,struct status_entry*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,TYPE_1__*) ;
 int FUNC_5 (char*) ;

void FUNC_6(void)
{
 git_status_list *VAR_12;
 git_status_options VAR_13 = VAR_0;

 struct status_entry VAR_14[] = {
  { VAR_9, "ikeepsix.txt", "ikeepsix.txt" },
  { VAR_10, "zerobyte.txt", "zerobyte.txt" },
 };

 VAR_13.flags |= VAR_5 |
  VAR_6 |
  VAR_7 |
  VAR_1 |
  VAR_2 |
  VAR_4 |
  VAR_8 |
  VAR_3;

 FUNC_5("renames/ikeepsix.txt");
 FUNC_1("renames/zerobyte.txt", "");

 FUNC_2(FUNC_4(&VAR_12, VAR_11, &VAR_13));
 FUNC_0(VAR_12, VAR_14, 2);
 FUNC_3(VAR_12);
}

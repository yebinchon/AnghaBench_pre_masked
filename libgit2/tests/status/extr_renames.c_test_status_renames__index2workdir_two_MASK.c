
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct status_entry {int member_0; char* member_1; char* member_2; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_status_options ;
typedef int git_status_list ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct status_entry*,int) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,TYPE_1__*) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,char*,char*) ;

void FUNC_6(void)
{
 git_status_list *VAR_6;
 git_status_options VAR_7 = VAR_0;
 struct status_entry VAR_8[] = {
  { VAR_4 | VAR_3,
    "sixserving.txt", "aaa.txt" },
  { VAR_4 | VAR_3,
    "untimely.txt", "bbb.txt" },
  { VAR_4, "songof7cities.txt", "ccc.txt" },
  { VAR_4, "ikeepsix.txt", "ddd.txt" },
 };

 VAR_7.flags |= VAR_1;
 VAR_7.flags |= VAR_2;

 FUNC_5(VAR_5, "ikeepsix.txt", "ddd.txt");
 FUNC_4(VAR_5, "sixserving.txt", "aaa.txt");
 FUNC_5(VAR_5, "songof7cities.txt", "ccc.txt");
 FUNC_4(VAR_5, "untimely.txt", "bbb.txt");

 FUNC_1(FUNC_3(&VAR_6, VAR_5, &VAR_7));
 FUNC_0(VAR_6, VAR_8, 4);
 FUNC_2(VAR_6);
}

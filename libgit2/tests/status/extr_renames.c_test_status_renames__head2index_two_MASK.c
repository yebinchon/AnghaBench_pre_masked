
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct status_entry {int member_0; char* member_1; char* member_2; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_status_options ;
typedef int git_status_list ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct status_entry*,int) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,TYPE_1__*) ;
 int FUNC_9 (int ,char*,char*) ;
 int FUNC_10 (int ,char*,char*) ;

void FUNC_11(void)
{
 git_index *VAR_5;
 git_status_list *VAR_6;
 git_status_options VAR_7 = VAR_2;
 struct status_entry VAR_8[] = {
  { VAR_1 | VAR_0,
    "sixserving.txt", "aaa.txt" },
  { VAR_1 | VAR_0,
    "untimely.txt", "bbb.txt" },
  { VAR_1, "songof7cities.txt", "ccc.txt" },
  { VAR_1, "ikeepsix.txt", "ddd.txt" },
 };

 VAR_7.flags |= VAR_3;

 FUNC_1(FUNC_6(&VAR_5, VAR_4));

 FUNC_10(VAR_4, "ikeepsix.txt", "ddd.txt");
 FUNC_9(VAR_4, "sixserving.txt", "aaa.txt");
 FUNC_10(VAR_4, "songof7cities.txt", "ccc.txt");
 FUNC_9(VAR_4, "untimely.txt", "bbb.txt");

 FUNC_1(FUNC_4(VAR_5, "ikeepsix.txt"));
 FUNC_1(FUNC_4(VAR_5, "sixserving.txt"));
 FUNC_1(FUNC_4(VAR_5, "songof7cities.txt"));
 FUNC_1(FUNC_4(VAR_5, "untimely.txt"));
 FUNC_1(FUNC_2(VAR_5, "ddd.txt"));
 FUNC_1(FUNC_2(VAR_5, "aaa.txt"));
 FUNC_1(FUNC_2(VAR_5, "ccc.txt"));
 FUNC_1(FUNC_2(VAR_5, "bbb.txt"));
 FUNC_1(FUNC_5(VAR_5));

 FUNC_1(FUNC_8(&VAR_6, VAR_4, &VAR_7));
 FUNC_0(VAR_6, VAR_8, 4);
 FUNC_7(VAR_6);

 FUNC_3(VAR_5);
}

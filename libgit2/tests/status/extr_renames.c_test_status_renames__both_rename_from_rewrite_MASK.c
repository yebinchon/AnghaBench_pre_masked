
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
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,struct status_entry*,int) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,TYPE_1__*) ;
 int FUNC_8 (int ,char*,char*) ;

void FUNC_9(void)
{
 git_index *VAR_8;
 git_status_list *VAR_9;
 git_status_options VAR_10 = VAR_1;
 struct status_entry VAR_11[] = {
  { VAR_0 | VAR_6,
    "songof7cities.txt", "ikeepsix.txt" },
  { VAR_0 | VAR_6,
    "ikeepsix.txt", "sixserving.txt" },
  { VAR_0 | VAR_6,
    "sixserving.txt", "songof7cities.txt" },
 };

 VAR_10.flags |= VAR_2;
 VAR_10.flags |= VAR_4;
 VAR_10.flags |= VAR_5;
 VAR_10.flags |= VAR_3;

 FUNC_1(FUNC_5(&VAR_8, VAR_7));

 FUNC_8(VAR_7, "ikeepsix.txt", "_temp_.txt");
 FUNC_8(VAR_7, "sixserving.txt", "ikeepsix.txt");
 FUNC_8(VAR_7, "songof7cities.txt", "sixserving.txt");
 FUNC_8(VAR_7, "_temp_.txt", "songof7cities.txt");

 FUNC_1(FUNC_2(VAR_8, "ikeepsix.txt"));
 FUNC_1(FUNC_2(VAR_8, "sixserving.txt"));
 FUNC_1(FUNC_2(VAR_8, "songof7cities.txt"));
 FUNC_1(FUNC_4(VAR_8));

 FUNC_8(VAR_7, "songof7cities.txt", "_temp_.txt");
 FUNC_8(VAR_7, "ikeepsix.txt", "songof7cities.txt");
 FUNC_8(VAR_7, "sixserving.txt", "ikeepsix.txt");
 FUNC_8(VAR_7, "_temp_.txt", "sixserving.txt");

 FUNC_1(FUNC_7(&VAR_9, VAR_7, &VAR_10));
 FUNC_0(VAR_9, VAR_11, 3);
 FUNC_6(VAR_9);

 FUNC_3(VAR_8);
}

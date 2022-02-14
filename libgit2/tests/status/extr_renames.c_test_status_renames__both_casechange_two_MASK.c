
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
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,struct status_entry*,int) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,TYPE_1__*) ;
 int FUNC_10 (int ,char*,char*) ;
 int FUNC_11 (int ,char*,char*) ;

void FUNC_12(void)
{
 git_index *VAR_10;
 git_status_list *VAR_11;
 git_status_options VAR_12 = VAR_3;
 int VAR_13;
 struct status_entry VAR_14[] = {
  { VAR_2 | VAR_1 |
    VAR_7,
    "ikeepsix.txt", "IKeepSix.txt" },
  { VAR_1,
    "sixserving.txt", "sixserving.txt" },
  { VAR_2 | VAR_7,
    "songof7cities.txt", "songof7.txt" },
  { VAR_2 | VAR_8,
    "untimely.txt", "untimeliest.txt" }
 };
 struct status_entry VAR_15[] = {
  { VAR_2 |
    VAR_7 | VAR_8,
    "songof7cities.txt", "SONGOF7.txt" },
  { VAR_1 | VAR_8,
    "sixserving.txt", "SixServing.txt" },
  { VAR_2 | VAR_1 |
    VAR_8 | VAR_7,
    "ikeepsix.txt", "ikeepsix.txt" },
  { VAR_2 | VAR_8,
    "untimely.txt", "untimeliest.txt" }
 };

 VAR_12.flags |= VAR_4;
 VAR_12.flags |= VAR_5;
 VAR_12.flags |= VAR_6;

 FUNC_1(FUNC_7(&VAR_10, VAR_9));
 VAR_13 = FUNC_3(VAR_10);

 FUNC_10(VAR_9, "ikeepsix.txt", "IKeepSix.txt");
 FUNC_10(VAR_9, "sixserving.txt", "sixserving.txt");
 FUNC_11(VAR_9, "songof7cities.txt", "songof7.txt");
 FUNC_11(VAR_9, "untimely.txt", "untimelier.txt");

 FUNC_1(FUNC_5(VAR_10, "ikeepsix.txt"));
 FUNC_1(FUNC_5(VAR_10, "sixserving.txt"));
 FUNC_1(FUNC_5(VAR_10, "songof7cities.txt"));
 FUNC_1(FUNC_5(VAR_10, "untimely.txt"));
 FUNC_1(FUNC_2(VAR_10, "IKeepSix.txt"));
 FUNC_1(FUNC_2(VAR_10, "sixserving.txt"));
 FUNC_1(FUNC_2(VAR_10, "songof7.txt"));
 FUNC_1(FUNC_2(VAR_10, "untimelier.txt"));
 FUNC_1(FUNC_6(VAR_10));

 FUNC_10(VAR_9, "IKeepSix.txt", "ikeepsix.txt");
 FUNC_11(VAR_9, "sixserving.txt", "SixServing.txt");
 FUNC_10(VAR_9, "songof7.txt", "SONGOF7.txt");
 FUNC_11(VAR_9, "untimelier.txt", "untimeliest.txt");

 FUNC_1(FUNC_9(&VAR_11, VAR_9, &VAR_12));

 FUNC_0(VAR_11, (VAR_13 & VAR_0) ?
  VAR_14 : VAR_15, 4);

 FUNC_8(VAR_11);

 FUNC_4(VAR_10);
}


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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,struct status_entry*,int) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,TYPE_1__*) ;
 int FUNC_10 (int ,char*,char*) ;

void FUNC_11(void)
{
 git_index *VAR_8;
 git_status_list *VAR_9;
 git_status_options VAR_10 = VAR_2;
 int VAR_11;
 struct status_entry VAR_12[] = {
  { VAR_1,
    "ikeepsix.txt", "IKeepSix.txt" },
 };
 struct status_entry VAR_13[] = {
  { VAR_1 | VAR_6,
    "ikeepsix.txt", "IKEEPSIX.txt" },
 };

 VAR_10.flags |= VAR_3;
 VAR_10.flags |= VAR_4;
 VAR_10.flags |= VAR_5;

 FUNC_1(FUNC_7(&VAR_8, VAR_7));
 VAR_11 = FUNC_3(VAR_8);

 FUNC_10(VAR_7, "ikeepsix.txt", "IKeepSix.txt");

 FUNC_1(FUNC_5(VAR_8, "ikeepsix.txt"));
 FUNC_1(FUNC_2(VAR_8, "IKeepSix.txt"));
 FUNC_1(FUNC_6(VAR_8));




 FUNC_10(VAR_7, "IKeepSix.txt", "IKEEPSIX.txt");

 FUNC_1(FUNC_9(&VAR_9, VAR_7, &VAR_10));

 FUNC_0(VAR_9, (VAR_11 & VAR_0) ?
  VAR_12 : VAR_13, 1);

 FUNC_8(VAR_9);

 FUNC_4(VAR_8);
}

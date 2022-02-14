
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
 int VAR_3 ;
 int FUNC_0 (int *,struct status_entry*,int) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,TYPE_1__*) ;
 int FUNC_8 (int ,char*,char*) ;

void FUNC_9(void)
{
 git_index *VAR_5;
 git_status_list *VAR_6;
 git_status_options VAR_7 = VAR_1;
 struct status_entry VAR_8[] = {
  { VAR_0, "sixserving.txt", "ikeepsix.txt" },
  { VAR_0, "ikeepsix.txt", "sixserving.txt" },
 };

 VAR_7.flags |= VAR_3;
 VAR_7.flags |= VAR_2;

 FUNC_1(FUNC_5(&VAR_5, VAR_4));

 FUNC_8(VAR_4, "ikeepsix.txt", "_temp_.txt");
 FUNC_8(VAR_4, "sixserving.txt", "ikeepsix.txt");
 FUNC_8(VAR_4, "_temp_.txt", "sixserving.txt");

 FUNC_1(FUNC_2(VAR_5, "ikeepsix.txt"));
 FUNC_1(FUNC_2(VAR_5, "sixserving.txt"));
 FUNC_1(FUNC_4(VAR_5));

 FUNC_1(FUNC_7(&VAR_6, VAR_4, &VAR_7));
 FUNC_0(VAR_6, VAR_8, 2);
 FUNC_6(VAR_6);

 FUNC_3(VAR_5);
}

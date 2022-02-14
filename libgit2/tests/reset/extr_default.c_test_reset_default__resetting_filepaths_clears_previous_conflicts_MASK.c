
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char** strings; int count; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_index_entry ;
struct TYPE_7__ {char** strings; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const**,int const**,int const**,int ,char*) ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (char*) ;

void FUNC_7(void)
{
 const git_index_entry *VAR_5[3];
 git_strarray VAR_6;

 char *VAR_7[] = { "conflicts-one.txt" };
 char *VAR_8[] = { "1f85ca51b8e0aac893a621b61a9c2661d6aa6d81" };

 FUNC_6("mergedrepo");

 VAR_2.strings = VAR_7;
 VAR_2.count = 1;
 VAR_6.strings = VAR_8;
 VAR_6.count = 1;

 FUNC_2(FUNC_3(&VAR_5[0], &VAR_5[1],
  &VAR_5[2], VAR_1, "conflicts-one.txt"));

 FUNC_2(FUNC_5(&VAR_4, VAR_3, "9a05ccb"));
 FUNC_2(FUNC_4(VAR_3, VAR_4, &VAR_2));

 FUNC_0(&VAR_2, 1, &VAR_6);

 FUNC_1(VAR_0, FUNC_3(&VAR_5[0],
  &VAR_5[1], &VAR_5[2], VAR_1, "conflicts-one.txt"));
}

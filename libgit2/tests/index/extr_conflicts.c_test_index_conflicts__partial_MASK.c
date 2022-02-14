
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* path; int mode; int id; } ;
typedef TYPE_1__ git_index_entry ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_5 (TYPE_1__ const**,TYPE_1__ const**,TYPE_1__ const**,int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_1__*,int,int) ;
 int VAR_1 ;

void FUNC_9(void)
{
 git_index_entry VAR_2, VAR_3, VAR_4;
 const git_index_entry *VAR_5[3];

 FUNC_1(FUNC_6(VAR_1) == 8);

 FUNC_8(&VAR_2, 0x0, sizeof(git_index_entry));
 FUNC_8(&VAR_3, 0x0, sizeof(git_index_entry));
 FUNC_8(&VAR_4, 0x0, sizeof(git_index_entry));

 VAR_2.path = "test-one.txt";
 VAR_2.mode = 0100644;
 FUNC_0(&VAR_2, 1);
 FUNC_7(&VAR_2.id, VAR_0);

 FUNC_3(FUNC_4(VAR_1, &VAR_2, ((void*)0), ((void*)0)));
 FUNC_1(FUNC_6(VAR_1) == 9);

 FUNC_3(FUNC_5(&VAR_5[0], &VAR_5[1],
  &VAR_5[2], VAR_1, "test-one.txt"));

 FUNC_2(&VAR_2.id, &VAR_5[0]->id);
 FUNC_1(VAR_5[1] == ((void*)0));
 FUNC_1(VAR_5[2] == ((void*)0));
}

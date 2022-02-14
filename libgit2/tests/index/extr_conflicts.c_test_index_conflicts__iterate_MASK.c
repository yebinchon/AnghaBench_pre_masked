
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_5__ {int path; int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index_conflict_iterator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int **,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__ const**,TYPE_1__ const**,TYPE_1__ const**,int *) ;
 int FUNC_7 (int *,int ) ;
 int VAR_7 ;

void FUNC_8(void)
{
 git_index_conflict_iterator *VAR_8;
 const git_index_entry *VAR_9[3];
 git_oid VAR_10;

 FUNC_2(FUNC_5(&VAR_8, VAR_7));

 FUNC_2(FUNC_6(&VAR_9[0], &VAR_9[1], &VAR_9[2], VAR_8));

 FUNC_7(&VAR_10, VAR_0);
 FUNC_1(&VAR_10, &VAR_9[0]->id);
 FUNC_0(FUNC_3(VAR_9[0]->path, "conflicts-one.txt") == 0);

 FUNC_7(&VAR_10, VAR_1);
 FUNC_1(&VAR_10, &VAR_9[1]->id);
 FUNC_0(FUNC_3(VAR_9[0]->path, "conflicts-one.txt") == 0);

 FUNC_7(&VAR_10, VAR_2);
 FUNC_1(&VAR_10, &VAR_9[2]->id);
 FUNC_0(FUNC_3(VAR_9[0]->path, "conflicts-one.txt") == 0);

 FUNC_2(FUNC_6(&VAR_9[0], &VAR_9[1], &VAR_9[2], VAR_8));

 FUNC_7(&VAR_10, VAR_3);
 FUNC_1(&VAR_10, &VAR_9[0]->id);
 FUNC_0(FUNC_3(VAR_9[0]->path, "conflicts-two.txt") == 0);

 FUNC_7(&VAR_10, VAR_4);
 FUNC_1(&VAR_10, &VAR_9[1]->id);
 FUNC_0(FUNC_3(VAR_9[0]->path, "conflicts-two.txt") == 0);

 FUNC_7(&VAR_10, VAR_5);
 FUNC_1(&VAR_10, &VAR_9[2]->id);
 FUNC_0(FUNC_3(VAR_9[0]->path, "conflicts-two.txt") == 0);

 FUNC_0(FUNC_6(&VAR_9[0], &VAR_9[1], &VAR_9[2], VAR_8) == VAR_6);

 FUNC_0(VAR_9[0] == ((void*)0));
 FUNC_0(VAR_9[2] == ((void*)0));
 FUNC_0(VAR_9[2] == ((void*)0));

 FUNC_4(VAR_8);
}

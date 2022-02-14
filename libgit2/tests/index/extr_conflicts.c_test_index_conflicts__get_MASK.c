
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_5__ {int id; int path; } ;
typedef TYPE_1__ git_index_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__ const**,TYPE_1__ const**,TYPE_1__ const**,int ,char*) ;
 int FUNC_4 (int *,int ) ;
 int VAR_6 ;

void FUNC_5(void)
{
 const git_index_entry *VAR_7[3];
 git_oid VAR_8;

 FUNC_2(FUNC_3(&VAR_7[0], &VAR_7[1],
  &VAR_7[2], VAR_6, "conflicts-one.txt"));

 FUNC_1("conflicts-one.txt", VAR_7[0]->path);

 FUNC_4(&VAR_8, VAR_0);
 FUNC_0(&VAR_8, &VAR_7[0]->id);

 FUNC_4(&VAR_8, VAR_1);
 FUNC_0(&VAR_8, &VAR_7[1]->id);

 FUNC_4(&VAR_8, VAR_2);
 FUNC_0(&VAR_8, &VAR_7[2]->id);

 FUNC_2(FUNC_3(&VAR_7[0], &VAR_7[1],
  &VAR_7[2], VAR_6, "conflicts-two.txt"));

 FUNC_1("conflicts-two.txt", VAR_7[0]->path);

 FUNC_4(&VAR_8, VAR_3);
 FUNC_0(&VAR_8, &VAR_7[0]->id);

 FUNC_4(&VAR_8, VAR_4);
 FUNC_0(&VAR_8, &VAR_7[1]->id);

 FUNC_4(&VAR_8, VAR_5);
 FUNC_0(&VAR_8, &VAR_7[2]->id);
}

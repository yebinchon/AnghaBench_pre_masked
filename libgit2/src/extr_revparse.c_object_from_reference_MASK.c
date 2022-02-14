
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* db; } ;
typedef TYPE_2__ git_reference ;
typedef int git_object ;
struct TYPE_8__ {int repo; } ;


 int VAR_0 ;
 int FUNC_0 (int **,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__**,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(git_object **VAR_1, git_reference *VAR_2)
{
 git_reference *VAR_3 = ((void*)0);
 int VAR_4;

 if (FUNC_2(&VAR_3, VAR_2) < 0)
  return -1;

 VAR_4 = FUNC_0(VAR_1, VAR_2->db->repo, FUNC_3(VAR_3), VAR_0);
 FUNC_1(VAR_3);

 return VAR_4;
}

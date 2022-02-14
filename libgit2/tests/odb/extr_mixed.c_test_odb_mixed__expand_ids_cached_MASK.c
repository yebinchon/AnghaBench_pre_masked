
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_odb_object ;
struct TYPE_6__ {scalar_t__ type; int length; int id; } ;
typedef TYPE_1__ git_odb_expand_id ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,int ) ;
 int FUNC_6 (TYPE_1__**,size_t*) ;

void FUNC_7(void)
{
 git_odb_expand_id *VAR_2;
 size_t VAR_3, VAR_4;



 FUNC_6(&VAR_2, &VAR_4);

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  git_odb_object *VAR_5;
  if (VAR_2[VAR_3].type == VAR_0)
   continue;
  FUNC_1(FUNC_5(&VAR_5, VAR_1, &VAR_2[VAR_3].id, VAR_2[VAR_3].length));
  FUNC_4(VAR_5);
 }

 FUNC_1(FUNC_3(VAR_1, VAR_2, VAR_4));
 FUNC_0(VAR_2);
 FUNC_2(VAR_2);
}

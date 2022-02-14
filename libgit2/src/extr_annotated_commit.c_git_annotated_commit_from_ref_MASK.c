
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;
struct TYPE_4__ {int ref_name; } ;
typedef TYPE_1__ git_annotated_commit ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__**,int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int **,int const*,int ) ;

int FUNC_8(
 git_annotated_commit **VAR_1,
 git_repository *VAR_2,
 const git_reference *VAR_3)
{
 git_object *VAR_4;
 int VAR_5 = 0;

 FUNC_2(VAR_1 && VAR_2 && VAR_3);

 *VAR_1 = ((void*)0);

 if ((VAR_5 = FUNC_7(&VAR_4, VAR_3, VAR_0)) < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_1,
  VAR_2,
  FUNC_5(VAR_4),
  FUNC_6(VAR_3));

 if (!VAR_5) {
  (*VAR_1)->ref_name = FUNC_3(FUNC_6(VAR_3));
  FUNC_0((*VAR_1)->ref_name);
 }

 FUNC_4(VAR_4);
 return VAR_5;
}

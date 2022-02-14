
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_odb_object ;
typedef int git_odb ;
struct TYPE_2__ {scalar_t__ type; int * sha; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int **,int ) ;

__attribute__((used)) static void *FUNC_8(void *VAR_2)
{
 int VAR_3;
 git_oid VAR_4;
 git_odb *VAR_5;
 git_odb_object *VAR_6;

 FUNC_1(FUNC_7(&VAR_5, VAR_1));

 for (VAR_3 = ((int *)VAR_2)[1]; VAR_0[VAR_3].sha != ((void*)0); VAR_3 += 2) {
  FUNC_1(FUNC_6(&VAR_4, VAR_0[VAR_3].sha));
  FUNC_1(FUNC_5(&VAR_6, VAR_5, &VAR_4));
  FUNC_0(VAR_0[VAR_3].type == FUNC_4(VAR_6));
  FUNC_3(VAR_6);
 }

 for (VAR_3 = 0; VAR_3 < ((int *)VAR_2)[1]; VAR_3 += 2) {
  FUNC_1(FUNC_6(&VAR_4, VAR_0[VAR_3].sha));
  FUNC_1(FUNC_5(&VAR_6, VAR_5, &VAR_4));
  FUNC_0(VAR_0[VAR_3].type == FUNC_4(VAR_6));
  FUNC_3(VAR_6);
 }

 FUNC_2(VAR_5);

 return VAR_2;
}

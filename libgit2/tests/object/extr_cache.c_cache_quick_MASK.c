
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_object ;
struct TYPE_2__ {scalar_t__ type; int sha; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void *FUNC_6(void *VAR_3)
{
 git_oid VAR_4;
 git_object *VAR_5;

 FUNC_1(FUNC_5(&VAR_4, VAR_1[4].sha));
 FUNC_1(FUNC_3(&VAR_5, VAR_2, &VAR_4, VAR_0));
 FUNC_0(VAR_1[4].type == FUNC_4(VAR_5));
 FUNC_2(VAR_5);

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t delta_size; int id; TYPE_1__* delta; } ;
typedef TYPE_2__ git_pobject ;
typedef int git_odb_object ;
typedef int git_odb ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,size_t*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int **,int *,int *) ;

__attribute__((used)) static int FUNC_6(void **VAR_2, git_odb *VAR_3, git_pobject *VAR_4)
{
 git_odb_object *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 size_t VAR_7;
 void *VAR_8;
 int VAR_9;

 *VAR_2 = ((void*)0);

 if (FUNC_5(&VAR_5, VAR_3, &VAR_4->delta->id) < 0 ||
     FUNC_5(&VAR_6, VAR_3, &VAR_4->id) < 0)
  goto on_error;

 VAR_9 = FUNC_0(&VAR_8, &VAR_7,
  FUNC_2(VAR_5), FUNC_4(VAR_5),
  FUNC_2(VAR_6), FUNC_4(VAR_6),
  0);

 if (VAR_9 < 0 && VAR_9 != VAR_0)
  goto on_error;

 if (VAR_9 == VAR_0 || VAR_7 != VAR_4->delta_size) {
  FUNC_1(VAR_1, "delta size changed");
  goto on_error;
 }

 *VAR_2 = VAR_8;

 FUNC_3(VAR_5);
 FUNC_3(VAR_6);
 return 0;

on_error:
 FUNC_3(VAR_5);
 FUNC_3(VAR_6);
 return -1;
}

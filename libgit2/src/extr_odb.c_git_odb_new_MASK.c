
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int own_cache; int backends; } ;
typedef TYPE_1__ git_odb ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int,int ) ;

int FUNC_7(git_odb **VAR_1)
{
 git_odb *VAR_2 = FUNC_2(1, sizeof(*VAR_2));
 FUNC_0(VAR_2);

 if (FUNC_5(&VAR_2->own_cache) < 0) {
  FUNC_3(VAR_2);
  return -1;
 }
 if (FUNC_6(&VAR_2->backends, 4, VAR_0) < 0) {
  FUNC_4(&VAR_2->own_cache);
  FUNC_3(VAR_2);
  return -1;
 }

 *VAR_1 = VAR_2;
 FUNC_1(VAR_2);
 return 0;
}

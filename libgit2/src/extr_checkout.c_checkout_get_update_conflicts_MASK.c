
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_vector ;
typedef int git_iterator ;
struct TYPE_6__ {int strategy; } ;
typedef TYPE_1__ checkout_data ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(
 checkout_data *VAR_1,
 git_iterator *VAR_2,
 git_vector *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_1->strategy & VAR_0)
  return 0;

 if ((VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3)) < 0 ||
  (VAR_4 = FUNC_0(VAR_1)) < 0 ||
  (VAR_4 = FUNC_2(VAR_1)) < 0)
  goto done;

done:
 return VAR_4;
}

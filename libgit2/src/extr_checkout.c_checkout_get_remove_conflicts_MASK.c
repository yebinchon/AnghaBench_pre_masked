
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_vector ;
typedef int git_iterator ;
struct TYPE_5__ {int strategy; int index; } ;
typedef TYPE_1__ checkout_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int *,int *,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(
 checkout_data *VAR_2,
 git_iterator *VAR_3,
 git_vector *VAR_4)
{
 if ((VAR_2->strategy & VAR_0) != 0)
  return 0;

 return FUNC_0(VAR_2, VAR_2->index, VAR_3, VAR_4, VAR_1, VAR_2);
}

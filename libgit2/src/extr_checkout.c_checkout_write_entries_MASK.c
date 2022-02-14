
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int checkout_data ;
struct TYPE_4__ {int theirs; int ours; } ;
typedef TYPE_1__ checkout_conflictdata ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_1(
 checkout_data *VAR_0,
 checkout_conflictdata *VAR_1)
{
 int VAR_2 = 0;

 if ((VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_1->ours)) >= 0)
  VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_1->theirs);

 return VAR_2;
}

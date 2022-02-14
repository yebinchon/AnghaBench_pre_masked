
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int checkout_data ;
struct TYPE_3__ {scalar_t__ theirs; scalar_t__ ours; scalar_t__ ancestor; } ;
typedef TYPE_1__ checkout_conflictdata ;


 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_1(
 checkout_data *VAR_0,
 checkout_conflictdata *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->ancestor)
  VAR_2 = FUNC_0(VAR_0, VAR_1->ancestor);

 if (!VAR_2 && VAR_1->ours)
  VAR_2 = FUNC_0(VAR_0, VAR_1->ours);

 if (!VAR_2 && VAR_1->theirs)
  VAR_2 = FUNC_0(VAR_0, VAR_1->theirs);

 return VAR_2;
}

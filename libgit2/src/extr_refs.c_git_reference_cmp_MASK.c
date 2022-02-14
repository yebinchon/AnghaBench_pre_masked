
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ git_reference_t ;
struct TYPE_6__ {int oid; int symbolic; } ;
struct TYPE_7__ {TYPE_1__ target; } ;
typedef TYPE_2__ git_reference ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(
 const git_reference *VAR_1,
 const git_reference *VAR_2)
{
 git_reference_t VAR_3, VAR_4;
 FUNC_0(VAR_1 && VAR_2);

 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = FUNC_2(VAR_2);


 if (VAR_3 != VAR_4)
  return (VAR_3 == VAR_0) ? -1 : 1;

 if (VAR_3 == VAR_0)
  return FUNC_3(VAR_1->target.symbolic, VAR_2->target.symbolic);

 return FUNC_1(&VAR_1->target.oid, &VAR_2->target.oid);
}

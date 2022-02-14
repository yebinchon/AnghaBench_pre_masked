
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int free_fn; } ;
struct TYPE_6__ {scalar_t__ diff; int flags; TYPE_1__ base; } ;
typedef TYPE_2__ git_patch_generated ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(git_patch_generated *VAR_2)
{
 VAR_2->base.free_fn = VAR_1;

 FUNC_1(VAR_2);

 VAR_2->flags |= VAR_0;

 if (VAR_2->diff)
  FUNC_0(VAR_2->diff);
}

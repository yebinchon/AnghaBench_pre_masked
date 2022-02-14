
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sa; } ;
struct TYPE_3__ {int sa; } ;
struct secpolicyindex {scalar_t__ prefs; scalar_t__ prefd; scalar_t__ ul_proto; scalar_t__ dir; TYPE_2__ dst; TYPE_1__ src; } ;


 scalar_t__ FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_1(struct secpolicyindex *VAR_0,
    struct secpolicyindex *VAR_1)
{

 if (VAR_0 == ((void*)0) && VAR_1 == ((void*)0))
  return 1;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return 0;

 if (VAR_0->prefs != VAR_1->prefs
  || VAR_0->prefd != VAR_1->prefd
  || VAR_0->ul_proto != VAR_1->ul_proto
  || VAR_0->dir != VAR_1->dir)
  return 0;

 return FUNC_0(&VAR_0->src.sa, &VAR_1->src.sa, 1) == 0 &&
        FUNC_0(&VAR_0->dst.sa, &VAR_1->dst.sa, 1) == 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct kinfo_proc {scalar_t__ ki_runtime; } const kinfo_proc ;
struct TYPE_2__ {scalar_t__ ru_nvcsw; scalar_t__ ru_nivcsw; } ;


 scalar_t__ FUNC_0 (struct kinfo_proc const*) ;
 TYPE_1__* FUNC_1 (struct kinfo_proc const*) ;
 struct kinfo_proc const* FUNC_2 (struct kinfo_proc const*) ;

__attribute__((used)) static int
FUNC_3(struct kinfo_proc *VAR_0)
{
 const struct kinfo_proc *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 == ((void*)0))
  return (FUNC_0(VAR_0) != 0);
 return (VAR_0->ki_runtime != VAR_1->ki_runtime ||
     FUNC_1(VAR_0)->ru_nvcsw != FUNC_1(VAR_1)->ru_nvcsw ||
     FUNC_1(VAR_0)->ru_nivcsw != FUNC_1(VAR_1)->ru_nivcsw);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {int dummy; } ;


 int FUNC_0 (struct kinfo_proc const*,long*,long*,long*,long*,long*) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct kinfo_proc *VAR_2 = *(const struct kinfo_proc * const *)VAR_0;
 const struct kinfo_proc *VAR_3 = *(const struct kinfo_proc * const *)VAR_1;
 long VAR_4, VAR_5, VAR_6;

 (void) FUNC_0(VAR_2, &VAR_4, &VAR_4, &VAR_4, &VAR_4, &VAR_5);
 (void) FUNC_0(VAR_3, &VAR_4, &VAR_4, &VAR_4, &VAR_4, &VAR_6);

 return (VAR_6 - VAR_5);
}

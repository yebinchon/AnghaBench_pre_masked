
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {int dummy; } ;


 int FUNC_0 (struct kinfo_proc const* const) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct kinfo_proc * const VAR_2 = *(const struct kinfo_proc * const *)VAR_0;
 const struct kinfo_proc * const VAR_3 = *(const struct kinfo_proc * const *)VAR_1;

 return (FUNC_0(VAR_3) - FUNC_0(VAR_2));
}

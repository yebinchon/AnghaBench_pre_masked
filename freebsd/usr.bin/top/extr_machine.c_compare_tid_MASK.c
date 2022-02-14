
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {scalar_t__ ki_tid; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct kinfo_proc * const *VAR_2 = VAR_0;
 const struct kinfo_proc * const *VAR_3 = VAR_1;

 FUNC_0((*VAR_3)->ki_tid >= 0 && (*VAR_2)->ki_tid >= 0);

 return ((*VAR_2)->ki_tid - (*VAR_3)->ki_tid);
}

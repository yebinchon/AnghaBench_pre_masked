
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct x86_cpu_id {int family; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(const struct x86_cpu_id *VAR_1)
{
 u32 VAR_2[] = {
  VAR_0,
 };

 FUNC_2("x86/pm: family %#hx cpu detected, MSR saving is needed during suspending.\n",
  VAR_1->family);

 return FUNC_1(VAR_2, FUNC_0(VAR_2));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cpuid {int version; } ;


 int FUNC_0 (struct cpuid*) ;

__attribute__((used)) static u64 FUNC_1(void)
{
 struct cpuid VAR_0;

 FUNC_0(&VAR_0);
 VAR_0.version = 0xff;
 return *((u64 *) &VAR_0);
}

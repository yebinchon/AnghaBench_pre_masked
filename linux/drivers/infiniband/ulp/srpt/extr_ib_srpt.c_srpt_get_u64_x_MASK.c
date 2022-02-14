
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kernel_param {scalar_t__ arg; } ;


 int FUNC_0 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, const struct kernel_param *VAR_1)
{
 return FUNC_0(VAR_0, "0x%016llx", *(u64 *)VAR_1->arg);
}

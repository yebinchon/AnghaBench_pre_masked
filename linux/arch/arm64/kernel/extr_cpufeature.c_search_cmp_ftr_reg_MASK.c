
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __ftr_reg_entry {scalar_t__ sys_id; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 return (int)(unsigned long)VAR_0 - (int)((const struct __ftr_reg_entry *)VAR_1)->sys_id;
}

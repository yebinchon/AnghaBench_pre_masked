
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_uof_strtable {unsigned int table_len; scalar_t__ strings; } ;



__attribute__((used)) static char *FUNC_0(struct icp_qat_uof_strtable *VAR_0,
     unsigned int VAR_1)
{
 if ((!VAR_0->table_len) || (VAR_1 > VAR_0->table_len))
  return ((void*)0);
 return (char *)(((uintptr_t)(VAR_0->strings)) + VAR_1);
}

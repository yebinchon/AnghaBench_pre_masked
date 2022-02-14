
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_table_entry {int region_start; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 return ((const struct unwind_table_entry *)VAR_0)->region_start
      - ((const struct unwind_table_entry *)VAR_1)->region_start;
}

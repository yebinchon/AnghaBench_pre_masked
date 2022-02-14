
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_info {int dummy; } ;
struct iftable_cfg {struct table_info* ti; } ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, struct table_info *VAR_1)
{
 struct iftable_cfg *VAR_2;

 VAR_2 = (struct iftable_cfg *)VAR_0;
 VAR_2->ti = VAR_1;
}

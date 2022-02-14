
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dm_table {struct list_head devices; } ;



struct list_head *FUNC_0(struct dm_table *VAR_0)
{
 return &VAR_0->devices;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_type {int dummy; } ;
struct dm_table {struct target_type* immutable_target_type; } ;



struct target_type *FUNC_0(struct dm_table *VAR_0)
{
 return VAR_0->immutable_target_type;
}

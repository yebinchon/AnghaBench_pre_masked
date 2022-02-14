
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_type {int name; } ;
struct dm_target_versions {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct target_type *VAR_1, void *VAR_2)
{
    size_t *VAR_3 = VAR_2;

    *VAR_3 += sizeof(struct dm_target_versions);
    *VAR_3 += FUNC_0(VAR_1->name);
    *VAR_3 += VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oid_array {scalar_t__ sorted; scalar_t__ alloc; scalar_t__ nr; int oid; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct oid_array *VAR_0)
{
 FUNC_0(VAR_0->oid);
 VAR_0->nr = 0;
 VAR_0->alloc = 0;
 VAR_0->sorted = 0;
}

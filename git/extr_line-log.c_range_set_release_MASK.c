
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range_set {scalar_t__ nr; scalar_t__ alloc; int ranges; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct range_set *VAR_0)
{
 FUNC_0(VAR_0->ranges);
 VAR_0->alloc = VAR_0->nr = 0;
}

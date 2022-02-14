
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range_set {scalar_t__ nr; scalar_t__ alloc; int * ranges; } ;


 int FUNC_0 (struct range_set*) ;

__attribute__((used)) static void FUNC_1(struct range_set *VAR_0, struct range_set *VAR_1)
{
 FUNC_0(VAR_0);
 VAR_0->ranges = VAR_1->ranges;
 VAR_0->nr = VAR_1->nr;
 VAR_0->alloc = VAR_1->alloc;
 VAR_1->ranges = ((void*)0);
 VAR_1->alloc = VAR_1->nr = 0;
}

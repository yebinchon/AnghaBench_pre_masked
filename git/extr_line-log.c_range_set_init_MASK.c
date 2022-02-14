
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range_set {int * ranges; scalar_t__ nr; scalar_t__ alloc; } ;


 int FUNC_0 (struct range_set*,size_t) ;

void FUNC_1(struct range_set *VAR_0, size_t VAR_1)
{
 VAR_0->alloc = VAR_0->nr = 0;
 VAR_0->ranges = ((void*)0);
 if (VAR_1)
  FUNC_0(VAR_0, VAR_1);
}

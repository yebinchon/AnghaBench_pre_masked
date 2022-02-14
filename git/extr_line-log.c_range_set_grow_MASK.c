
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range_set {int alloc; scalar_t__ nr; int ranges; } ;


 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct range_set *VAR_0, size_t VAR_1)
{
 FUNC_0(VAR_0->ranges, VAR_0->nr + VAR_1, VAR_0->alloc);
}

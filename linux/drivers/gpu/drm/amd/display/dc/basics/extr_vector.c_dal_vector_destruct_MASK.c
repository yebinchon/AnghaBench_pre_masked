
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector {scalar_t__ capacity; scalar_t__ count; int container; } ;


 int FUNC_0 (int ) ;

void FUNC_1(
 struct vector *VAR_0)
{
 FUNC_0(VAR_0->container);
 VAR_0->count = 0;
 VAR_0->capacity = 0;
}

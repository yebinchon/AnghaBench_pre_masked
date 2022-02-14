
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {scalar_t__ alloc; scalar_t__ argc; int argv; } ;


 int VAR_0 ;

void FUNC_0(struct argv_array *VAR_1)
{
 VAR_1->argv = VAR_0;
 VAR_1->argc = 0;
 VAR_1->alloc = 0;
}

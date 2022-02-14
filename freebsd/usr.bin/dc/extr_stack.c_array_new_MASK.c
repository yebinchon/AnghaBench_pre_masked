
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct array {scalar_t__ size; int * data; } ;


 struct array* FUNC_0 (int) ;

__attribute__((used)) static struct array *
FUNC_1(void)
{
 struct array *VAR_0;

 VAR_0 = FUNC_0(sizeof(*VAR_0));
 VAR_0->data = ((void*)0);
 VAR_0->size = 0;
 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct array {size_t size; struct array* data; } ;


 int FUNC_0 (struct array*) ;
 int FUNC_1 (struct array*) ;

__attribute__((used)) static __inline void
FUNC_2(struct array *VAR_0)
{
 size_t VAR_1;

 if (VAR_0 == ((void*)0))
  return;
 for (VAR_1 = 0; VAR_1 < VAR_0->size; VAR_1++)
  FUNC_1(&VAR_0->data[VAR_1]);
 FUNC_0(VAR_0->data);
 FUNC_0(VAR_0);
}

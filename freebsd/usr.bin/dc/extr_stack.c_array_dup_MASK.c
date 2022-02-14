
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct array {size_t size; int * data; } ;


 int FUNC_0 (struct array*,size_t) ;
 struct array* FUNC_1 () ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static struct array *
FUNC_3(const struct array *VAR_0)
{
 struct array *VAR_1;
 size_t VAR_2;

 if (VAR_0 == ((void*)0))
  return (((void*)0));
 VAR_1 = FUNC_1();
 FUNC_0(VAR_1, VAR_0->size);
 for (VAR_2 = 0; VAR_2 < VAR_0->size; VAR_2++)
  FUNC_2(&VAR_0->data[VAR_2], &VAR_1->data[VAR_2]);
 return (VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct array {size_t size; struct value* data; } ;



__attribute__((used)) static __inline struct value *
FUNC_0(const struct array *VAR_0, size_t VAR_1)
{

 if (VAR_1 >= VAR_0->size)
  return (((void*)0));
 return &VAR_0->data[VAR_1];
}

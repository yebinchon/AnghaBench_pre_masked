
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct array {size_t size; struct value* data; } ;


 int FUNC_0 (struct array*,size_t) ;
 int FUNC_1 (struct value*) ;

__attribute__((used)) static __inline void
FUNC_2(struct array *VAR_0, size_t VAR_1, const struct value *VAR_2)
{

 if (VAR_1 >= VAR_0->size)
  FUNC_0(VAR_0, VAR_1 + 1);
 FUNC_1(&VAR_0->data[VAR_1]);
 VAR_0->data[VAR_1] = *VAR_2;
}

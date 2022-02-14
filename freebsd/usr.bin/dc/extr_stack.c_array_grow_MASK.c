
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct array {size_t size; TYPE_1__* data; } ;
struct TYPE_3__ {int * array; int type; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,size_t,int) ;

__attribute__((used)) static __inline void
FUNC_1(struct array *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 VAR_1->data = FUNC_0(VAR_1->data, VAR_2, sizeof(*VAR_1->data));
 for (VAR_3 = VAR_1->size; VAR_3 < VAR_2; VAR_3++) {
  VAR_1->data[VAR_3].type = VAR_0;
  VAR_1->data[VAR_3].array = ((void*)0);
 }
 VAR_1->size = VAR_2;
}

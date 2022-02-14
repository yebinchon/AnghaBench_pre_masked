
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unpacked {scalar_t__ depth; TYPE_1__* object; int * data; int * index; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static size_t FUNC_3(struct unpacked *VAR_0)
{
 size_t VAR_1 = 0;

 if (VAR_0->index) {
  VAR_1 += FUNC_2(VAR_0->index);
  FUNC_1(VAR_0->index);
 }
 VAR_0->index = ((void*)0);

 if (VAR_0->data) {
  VAR_1 += VAR_0->object->size;
  FUNC_0(VAR_0->data);
  VAR_0->data = ((void*)0);
 }
 VAR_0->object = ((void*)0);
 VAR_0->depth = 0;
 return VAR_1;
}

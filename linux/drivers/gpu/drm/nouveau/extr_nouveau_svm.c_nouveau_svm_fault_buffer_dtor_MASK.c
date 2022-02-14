
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_svm_fault_buffer {int entries; int object; int notify; scalar_t__* fault; } ;
struct nouveau_svm {struct nouveau_svm_fault_buffer* buffer; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (struct nouveau_svm*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct nouveau_svm *VAR_0, int VAR_1)
{
 struct nouveau_svm_fault_buffer *VAR_2 = &VAR_0->buffer[VAR_1];
 int VAR_3;

 if (VAR_2->fault) {
  for (VAR_3 = 0; VAR_2->fault[VAR_3] && VAR_3 < VAR_2->entries; VAR_3++)
   FUNC_0(VAR_2->fault[VAR_3]);
  FUNC_1(VAR_2->fault);
 }

 FUNC_2(VAR_0, VAR_1);

 FUNC_3(&VAR_2->notify);
 FUNC_4(&VAR_2->object);
}

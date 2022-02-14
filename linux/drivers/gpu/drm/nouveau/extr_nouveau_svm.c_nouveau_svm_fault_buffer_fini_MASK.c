
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_svm_fault_buffer {int notify; } ;
struct nouveau_svm {struct nouveau_svm_fault_buffer* buffer; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct nouveau_svm *VAR_0, int VAR_1)
{
 struct nouveau_svm_fault_buffer *VAR_2 = &VAR_0->buffer[VAR_1];
 FUNC_0(&VAR_2->notify);
}

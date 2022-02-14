
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_svm_fault {int inst; int addr; int access; } ;
typedef int s64 ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct nouveau_svm_fault *VAR_2 = *(struct nouveau_svm_fault **)VAR_0;
 const struct nouveau_svm_fault *VAR_3 = *(struct nouveau_svm_fault **)VAR_1;
 int VAR_4;
 if ((VAR_4 = (s64)VAR_2->inst - VAR_3->inst))
  return VAR_4;
 if ((VAR_4 = (s64)VAR_2->addr - VAR_3->addr))
  return VAR_4;

 return (VAR_2->access == 0 || VAR_2->access == 3) -
        (VAR_3->access == 0 || VAR_3->access == 3);
}

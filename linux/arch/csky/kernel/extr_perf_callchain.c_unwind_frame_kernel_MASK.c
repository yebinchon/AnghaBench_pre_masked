
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stackframe {int fp; int lr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int*,int ,int *) ;
 scalar_t__ FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct stackframe *VAR_2)
{
 if (FUNC_2((void *)VAR_2->fp))
  return -VAR_0;
 if (VAR_2->fp & 0x3 || VAR_2->fp < VAR_1)
  return -VAR_0;

 *VAR_2 = *(struct stackframe *)VAR_2->fp;
 if (FUNC_0(VAR_2->lr)) {
  int VAR_3 = 0;

  VAR_2->lr = FUNC_1(((void*)0), &VAR_3, VAR_2->lr,
    ((void*)0));
 }
 return 0;
}

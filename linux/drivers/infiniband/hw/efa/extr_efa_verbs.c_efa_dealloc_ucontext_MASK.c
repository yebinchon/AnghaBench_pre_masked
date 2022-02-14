
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_ucontext {int device; } ;
struct efa_ucontext {int uarn; } ;
struct efa_dev {int dummy; } ;


 int FUNC_0 (struct efa_dev*,int ) ;
 int FUNC_1 (struct efa_dev*,struct efa_ucontext*) ;
 struct efa_dev* FUNC_2 (int ) ;
 struct efa_ucontext* FUNC_3 (struct ib_ucontext*) ;

void FUNC_4(struct ib_ucontext *VAR_0)
{
 struct efa_ucontext *VAR_1 = FUNC_3(VAR_0);
 struct efa_dev *VAR_2 = FUNC_2(VAR_0->device);

 FUNC_1(VAR_2, VAR_1);
 FUNC_0(VAR_2, VAR_1->uarn);
}

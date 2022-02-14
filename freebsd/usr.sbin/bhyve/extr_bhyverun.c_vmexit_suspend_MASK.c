
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmctx {int dummy; } ;
struct TYPE_3__ {int how; } ;
struct TYPE_4__ {TYPE_1__ suspended; } ;
struct vm_exit {TYPE_2__ u; } ;
typedef enum vm_suspend_how { ____Placeholder_vm_suspend_how } vm_suspend_how ;


 int VAR_0 ;
 int FUNC_0 (int *) ;




 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct vmctx*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_9(struct vmctx *VAR_5, struct vm_exit *VAR_6, int *VAR_7)
{
 enum vm_suspend_how VAR_8;

 VAR_8 = VAR_6->u.suspended.how;

 FUNC_2(VAR_5, *VAR_7);

 if (*VAR_7 != VAR_0) {
  FUNC_7(&VAR_3);
  FUNC_4(&VAR_2);
  FUNC_8(&VAR_3);
  FUNC_6(((void*)0));
 }

 FUNC_7(&VAR_3);
 while (!FUNC_0(&VAR_1)) {
  FUNC_5(&VAR_2, &VAR_3);
 }
 FUNC_8(&VAR_3);

 switch (VAR_8) {
 case 129:
  FUNC_1(0);
 case 130:
  FUNC_1(1);
 case 131:
  FUNC_1(2);
 case 128:
  FUNC_1(3);
 default:
  FUNC_3(VAR_4, "vmexit_suspend: invalid reason %d\n", VAR_8);
  FUNC_1(100);
 }
 return (0);
}

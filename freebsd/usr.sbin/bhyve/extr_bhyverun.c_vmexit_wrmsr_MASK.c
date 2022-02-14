
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmctx {int dummy; } ;
struct TYPE_3__ {int code; int wval; } ;
struct TYPE_4__ {TYPE_1__ msr; } ;
struct vm_exit {TYPE_2__ u; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmctx*,int,int,int ) ;
 int FUNC_1 (int ,char*,int,int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct vmctx*,int) ;

__attribute__((used)) static int
FUNC_3(struct vmctx *VAR_3, struct vm_exit *VAR_4, int *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, *VAR_5, VAR_4->u.msr.code, VAR_4->u.msr.wval);
 if (VAR_6 != 0) {
  FUNC_1(VAR_1, "wrmsr to register %#x(%#x) on vcpu %d\n",
      VAR_4->u.msr.code, VAR_4->u.msr.wval, *VAR_5);
  if (VAR_2) {
   FUNC_2(VAR_3, *VAR_5);
   return (VAR_0);
  }
 }
 return (VAR_0);
}

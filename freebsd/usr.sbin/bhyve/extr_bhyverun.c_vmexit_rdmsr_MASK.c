
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct vmctx {int dummy; } ;
struct TYPE_3__ {int code; } ;
struct TYPE_4__ {TYPE_1__ msr; } ;
struct vm_exit {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vmctx*,int,int,int*) ;
 int FUNC_2 (int ,char*,int,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct vmctx*,int) ;
 int FUNC_4 (struct vmctx*,int,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct vmctx *VAR_5, struct vm_exit *VAR_6, int *VAR_7)
{
 uint64_t VAR_8;
 uint32_t VAR_9, VAR_10;
 int VAR_11;

 VAR_8 = 0;
 VAR_11 = FUNC_1(VAR_5, *VAR_7, VAR_6->u.msr.code, &VAR_8);
 if (VAR_11 != 0) {
  FUNC_2(VAR_3, "rdmsr to register %#x on vcpu %d\n",
      VAR_6->u.msr.code, *VAR_7);
  if (VAR_4) {
   FUNC_3(VAR_5, *VAR_7);
   return (VAR_0);
  }
 }

 VAR_9 = VAR_8;
 VAR_11 = FUNC_4(VAR_5, *VAR_7, VAR_1, VAR_9);
 FUNC_0(VAR_11 == 0);

 VAR_10 = VAR_8 >> 32;
 VAR_11 = FUNC_4(VAR_5, *VAR_7, VAR_2, VAR_10);
 FUNC_0(VAR_11 == 0);

 return (VAR_0);
}

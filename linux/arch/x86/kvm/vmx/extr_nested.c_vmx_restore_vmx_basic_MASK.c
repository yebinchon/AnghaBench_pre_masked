
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int basic; } ;
struct TYPE_4__ {TYPE_1__ msrs; } ;
struct vcpu_vmx {TYPE_2__ nested; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int const) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct vcpu_vmx *VAR_1, u64 VAR_2)
{
 const u64 VAR_3 =

  FUNC_0(49) | FUNC_0(54) | FUNC_0(55) |

  FUNC_0(31) | FUNC_1(47, 45) | FUNC_1(63, 56);
 u64 VAR_4 = VAR_1->nested.msrs.basic;

 if (!FUNC_2(VAR_4, VAR_2, VAR_3))
  return -VAR_0;





 if (VAR_2 & FUNC_0(48))
  return -VAR_0;

 if (FUNC_3(VAR_4) !=
     FUNC_3(VAR_2))
  return -VAR_0;

 if (FUNC_4(VAR_4) > FUNC_4(VAR_2))
  return -VAR_0;

 VAR_1->nested.msrs.basic = VAR_2;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int misc_low; int misc_high; int pinbased_ctls_high; } ;
struct TYPE_4__ {TYPE_1__ msrs; } ;
struct vcpu_vmx {TYPE_2__ nested; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int,int,int const) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct vcpu_vmx *VAR_2, u64 VAR_3)
{
 const u64 VAR_4 =

  FUNC_0(5) | FUNC_1(8, 6) | FUNC_0(14) | FUNC_0(15) |
  FUNC_0(28) | FUNC_0(29) | FUNC_0(30) |

  FUNC_1(13, 9) | FUNC_0(31);
 u64 VAR_5;

 VAR_5 = FUNC_3(VAR_2->nested.msrs.misc_low,
       VAR_2->nested.msrs.misc_high);

 if (!FUNC_2(VAR_5, VAR_3, VAR_4))
  return -VAR_0;

 if ((VAR_2->nested.msrs.pinbased_ctls_high &
      VAR_1) &&
     FUNC_7(VAR_3) !=
     FUNC_7(VAR_5))
  return -VAR_0;

 if (FUNC_4(VAR_3) > FUNC_4(VAR_5))
  return -VAR_0;

 if (FUNC_5(VAR_3) > FUNC_5(VAR_5))
  return -VAR_0;

 if (FUNC_6(VAR_3) != FUNC_6(VAR_5))
  return -VAR_0;

 VAR_2->nested.msrs.misc_low = VAR_3;
 VAR_2->nested.msrs.misc_high = VAR_3 >> 32;

 return 0;
}

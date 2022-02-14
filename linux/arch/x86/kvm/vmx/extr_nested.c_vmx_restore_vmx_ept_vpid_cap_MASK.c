
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int ept_caps; int vpid_caps; } ;
struct TYPE_4__ {TYPE_1__ msrs; } ;
struct vcpu_vmx {TYPE_2__ nested; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,unsigned long long) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct vcpu_vmx *VAR_1, u64 VAR_2)
{
 u64 VAR_3;

 VAR_3 = FUNC_1(VAR_1->nested.msrs.ept_caps,
        VAR_1->nested.msrs.vpid_caps);


 if (!FUNC_0(VAR_3, VAR_2, -1ULL))
  return -VAR_0;

 VAR_1->nested.msrs.ept_caps = VAR_2;
 VAR_1->nested.msrs.vpid_caps = VAR_2 >> 32;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef scalar_t__ u64 ;
typedef int u16 ;
struct TYPE_6__ {unsigned long long intercept; scalar_t__ vmcb_iopm; } ;
struct vcpu_svm {int vcpu; TYPE_3__ nested; TYPE_2__* vmcb; } ;
struct TYPE_4__ {int exit_info_1; } ;
struct TYPE_5__ {TYPE_1__ control; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct vcpu_svm *VAR_5)
{
 unsigned VAR_6, VAR_7, VAR_8;
 u16 VAR_9, VAR_10;
 u8 VAR_11;
 u64 VAR_12;

 if (!(VAR_5->nested.intercept & (1ULL << VAR_0)))
  return VAR_2;

 VAR_6 = VAR_5->vmcb->control.exit_info_1 >> 16;
 VAR_7 = (VAR_5->vmcb->control.exit_info_1 & VAR_3) >>
  VAR_4;
 VAR_12 = VAR_5->nested.vmcb_iopm + (VAR_6 / 8);
 VAR_11 = VAR_6 % 8;
 VAR_8 = (VAR_11 + VAR_7 > 8) ? 2 : 1;
 VAR_10 = (0xf >> (4 - VAR_7)) << VAR_11;
 VAR_9 = 0;

 if (FUNC_0(&VAR_5->vcpu, VAR_12, &VAR_9, VAR_8))
  return VAR_1;

 return (VAR_9 & VAR_10) ? VAR_1 : VAR_2;
}

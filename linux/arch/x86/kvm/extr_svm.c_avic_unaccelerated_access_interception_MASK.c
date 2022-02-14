
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int vcpu_id; } ;
struct vcpu_svm {TYPE_3__ vcpu; TYPE_1__* vmcb; } ;
struct TYPE_5__ {int exit_info_1; int exit_info_2; } ;
struct TYPE_4__ {TYPE_2__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vcpu_svm*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct vcpu_svm *VAR_3)
{
 int VAR_4 = 0;
 u32 VAR_5 = VAR_3->vmcb->control.exit_info_1 &
       VAR_0;
 u32 VAR_6 = VAR_3->vmcb->control.exit_info_2 &
       VAR_1;
 bool VAR_7 = (VAR_3->vmcb->control.exit_info_1 >> 32) &
       VAR_2;
 bool VAR_8 = FUNC_2(VAR_5);

 FUNC_4(VAR_3->vcpu.vcpu_id, VAR_5,
         VAR_8, VAR_7, VAR_6);
 if (VAR_8) {

  FUNC_0(!VAR_7, "svm: Handling trap read.\n");
  VAR_4 = FUNC_1(VAR_3);
 } else {

  VAR_4 = FUNC_3(&VAR_3->vcpu, 0);
 }

 return VAR_4;
}

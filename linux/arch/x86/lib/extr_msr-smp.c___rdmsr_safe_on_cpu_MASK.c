
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h; int l; } ;
struct TYPE_4__ {TYPE_1__ reg; int msr_no; int err; } ;
struct msr_info_completion {int done; TYPE_2__ msr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct msr_info_completion *VAR_1 = VAR_0;

 VAR_1->msr.err = FUNC_1(VAR_1->msr.msr_no, &VAR_1->msr.reg.l, &VAR_1->msr.reg.h);
 FUNC_0(&VAR_1->done);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int h; int l; } ;
struct TYPE_6__ {int err; TYPE_1__ reg; int msr_no; } ;
struct msr_info_completion {TYPE_2__ msr; int done; } ;
typedef int rv ;
struct TYPE_7__ {struct msr_info_completion* info; int func; } ;
typedef TYPE_3__ call_single_data_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct msr_info_completion*,int ,int) ;
 int FUNC_2 (unsigned int,TYPE_3__*) ;
 int FUNC_3 (int *) ;

int FUNC_4(unsigned int VAR_1, u32 VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 struct msr_info_completion VAR_5;
 call_single_data_t VAR_6 = {
  .func = VAR_0,
  .info = &VAR_5,
 };
 int VAR_7;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 FUNC_0(&VAR_5.done);
 VAR_5.msr.msr_no = VAR_2;

 VAR_7 = FUNC_2(VAR_1, &VAR_6);
 if (!VAR_7) {
  FUNC_3(&VAR_5.done);
  VAR_7 = VAR_5.msr.err;
 }
 *VAR_3 = VAR_5.msr.reg.l;
 *VAR_4 = VAR_5.msr.reg.h;

 return VAR_7;
}

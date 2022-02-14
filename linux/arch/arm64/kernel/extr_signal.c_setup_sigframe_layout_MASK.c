
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt_sigframe_user_layout {int sve_offset; int esr_offset; int fpsimd_offset; } ;
struct fpsimd_context {int dummy; } ;
struct esr_context {int dummy; } ;
struct TYPE_3__ {int sve_vl; scalar_t__ fault_code; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct rt_sigframe_user_layout*,int *,int) ;
 int FUNC_2 (struct rt_sigframe_user_layout*) ;
 int VAR_2 ;
 unsigned int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct rt_sigframe_user_layout *VAR_3,
     bool VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, &VAR_3->fpsimd_offset,
        sizeof(struct fpsimd_context));
 if (VAR_5)
  return VAR_5;


 if (VAR_4 || VAR_1->thread.fault_code) {
  VAR_5 = FUNC_1(VAR_3, &VAR_3->esr_offset,
         sizeof(struct esr_context));
  if (VAR_5)
   return VAR_5;
 }

 if (FUNC_4()) {
  unsigned int VAR_6 = 0;

  if (VAR_4 || FUNC_5(VAR_0)) {
   int VAR_7 = VAR_2;

   if (!VAR_4)
    VAR_7 = VAR_1->thread.sve_vl;

   VAR_6 = FUNC_3(VAR_7);
  }

  VAR_5 = FUNC_1(VAR_3, &VAR_3->sve_offset,
         FUNC_0(VAR_6));
  if (VAR_5)
   return VAR_5;
 }

 return FUNC_2(VAR_3);
}

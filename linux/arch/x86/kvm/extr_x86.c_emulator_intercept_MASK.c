
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_instruction_info {int dummy; } ;
struct x86_emulate_ctxt {int dummy; } ;
typedef enum x86_intercept_stage { ____Placeholder_x86_intercept_stage } x86_intercept_stage ;
struct TYPE_2__ {int (* check_intercept ) (int ,struct x86_instruction_info*,int) ;} ;


 int FUNC_0 (struct x86_emulate_ctxt*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,struct x86_instruction_info*,int) ;

__attribute__((used)) static int FUNC_2(struct x86_emulate_ctxt *VAR_1,
         struct x86_instruction_info *VAR_2,
         enum x86_intercept_stage VAR_3)
{
 return VAR_0->check_intercept(FUNC_0(VAR_1), VAR_2, VAR_3);
}

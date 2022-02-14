
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_emulate_ctxt {int dummy; } ;
struct TYPE_2__ {int (* pre_leave_smm ) (int ,char const*) ;} ;


 int FUNC_0 (struct x86_emulate_ctxt*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static int FUNC_2(struct x86_emulate_ctxt *VAR_1,
      const char *VAR_2)
{
 return VAR_0->pre_leave_smm(FUNC_0(VAR_1), VAR_2);
}

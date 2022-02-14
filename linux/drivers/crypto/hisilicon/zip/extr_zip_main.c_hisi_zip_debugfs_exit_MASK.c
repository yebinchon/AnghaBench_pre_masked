
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int debug_root; } ;
struct hisi_qm {scalar_t__ fun_type; TYPE_1__ debug; } ;
struct hisi_zip {struct hisi_qm qm; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hisi_zip*) ;

__attribute__((used)) static void FUNC_2(struct hisi_zip *VAR_1)
{
 struct hisi_qm *VAR_2 = &VAR_1->qm;

 FUNC_0(VAR_2->debug.debug_root);

 if (VAR_2->fun_type == VAR_0)
  FUNC_1(VAR_1);
}

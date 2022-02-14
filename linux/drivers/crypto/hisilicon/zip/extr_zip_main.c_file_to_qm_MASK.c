
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_qm {int dummy; } ;
struct hisi_zip {struct hisi_qm qm; } ;
struct ctrl_debug_file {TYPE_1__* ctrl; } ;
struct TYPE_2__ {struct hisi_zip* hisi_zip; } ;



__attribute__((used)) static inline struct hisi_qm *FUNC_0(struct ctrl_debug_file *VAR_0)
{
 struct hisi_zip *VAR_1 = VAR_0->ctrl->hisi_zip;

 return &VAR_1->qm;
}

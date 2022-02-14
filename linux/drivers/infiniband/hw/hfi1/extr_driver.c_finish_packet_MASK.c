
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfi1_packet {int numpkt; int etail; int updegr; TYPE_1__* rcd; } ;
struct TYPE_2__ {int head; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct hfi1_packet *VAR_1)
{






 FUNC_0(VAR_1->rcd, VAR_1->rcd->head, VAR_1->updegr,
         VAR_1->etail, VAR_0, VAR_1->numpkt);
}

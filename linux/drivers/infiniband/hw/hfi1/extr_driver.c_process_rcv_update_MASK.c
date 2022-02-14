
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_packet {int numpkt; int * grh; scalar_t__ updegr; int etail; int rhqoff; int rcd; } ;


 int FUNC_0 (int ,int ,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(int VAR_0, struct hfi1_packet *VAR_1)
{






 if (!VAR_0 && !(VAR_1->numpkt & 0xf)) {
  FUNC_0(VAR_1->rcd, VAR_1->rhqoff, VAR_1->updegr,
          VAR_1->etail, 0, 0);
  VAR_1->updegr = 0;
 }
 VAR_1->grh = ((void*)0);
}

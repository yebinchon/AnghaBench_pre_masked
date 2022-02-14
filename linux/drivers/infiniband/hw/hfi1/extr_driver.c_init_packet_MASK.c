
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_packet {int rsize; int maxcnt; int etail; scalar_t__ numpkt; int rhqoff; int rhf_addr; int rhf; scalar_t__ updegr; struct hfi1_ctxtdata* rcd; } ;
struct hfi1_ctxtdata {int rcvhdrqentsize; int rcvhdrq_cnt; int head; } ;


 int FUNC_0 (struct hfi1_ctxtdata*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct hfi1_ctxtdata *VAR_0,
          struct hfi1_packet *VAR_1)
{
 VAR_1->rsize = VAR_0->rcvhdrqentsize;
 VAR_1->maxcnt = VAR_0->rcvhdrq_cnt * VAR_1->rsize;
 VAR_1->rcd = VAR_0;
 VAR_1->updegr = 0;
 VAR_1->etail = -1;
 VAR_1->rhf_addr = FUNC_0(VAR_0);
 VAR_1->rhf = FUNC_1(VAR_1->rhf_addr);
 VAR_1->rhqoff = VAR_0->head;
 VAR_1->numpkt = 0;
}

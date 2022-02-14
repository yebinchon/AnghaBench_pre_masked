
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps_mdata {int ps_seq; int ps_tail; int ps_head; int maxcnt; int rsize; struct hfi1_ctxtdata* rcd; } ;
struct hfi1_packet {int rhqoff; int maxcnt; int rsize; struct hfi1_ctxtdata* rcd; } ;
struct hfi1_ctxtdata {scalar_t__ ctxt; int seq_cnt; int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct hfi1_ctxtdata*) ;

__attribute__((used)) static inline void FUNC_2(struct ps_mdata *VAR_2,
     struct hfi1_packet *VAR_3)
{
 struct hfi1_ctxtdata *VAR_4 = VAR_3->rcd;

 VAR_2->rcd = VAR_4;
 VAR_2->rsize = VAR_3->rsize;
 VAR_2->maxcnt = VAR_3->maxcnt;
 VAR_2->ps_head = VAR_3->rhqoff;

 if (FUNC_0(VAR_4->flags, VAR_0)) {
  VAR_2->ps_tail = FUNC_1(VAR_4);
  if (VAR_4->ctxt == VAR_1)
   VAR_2->ps_seq = VAR_4->seq_cnt;
  else
   VAR_2->ps_seq = 0;
 } else {
  VAR_2->ps_tail = 0;
  VAR_2->ps_seq = VAR_4->seq_cnt;
 }
}

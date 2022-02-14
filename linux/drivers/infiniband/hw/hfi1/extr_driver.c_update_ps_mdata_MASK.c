
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps_mdata {scalar_t__ ps_head; scalar_t__ rsize; scalar_t__ maxcnt; int ps_seq; } ;
struct hfi1_ctxtdata {scalar_t__ ctxt; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void FUNC_1(struct ps_mdata *VAR_2,
       struct hfi1_ctxtdata *VAR_3)
{
 VAR_2->ps_head += VAR_2->rsize;
 if (VAR_2->ps_head >= VAR_2->maxcnt)
  VAR_2->ps_head = 0;


 if (!FUNC_0(VAR_3->flags, VAR_0) ||
     (VAR_3->ctxt == VAR_1)) {
  if (++VAR_2->ps_seq > 13)
   VAR_2->ps_seq = 1;
 }
}

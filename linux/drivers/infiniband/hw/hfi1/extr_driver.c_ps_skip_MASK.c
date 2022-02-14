
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ps_mdata {scalar_t__ ps_head; scalar_t__ ps_tail; scalar_t__ ps_seq; } ;
struct hfi1_ctxtdata {scalar_t__ ctxt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct ps_mdata *VAR_1, u64 VAR_2,
     struct hfi1_ctxtdata *VAR_3)
{




 if ((VAR_3->ctxt == VAR_0) && (VAR_1->ps_head != VAR_1->ps_tail))
  return VAR_1->ps_seq != FUNC_0(VAR_2);

 return 0;
}

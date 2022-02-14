
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfi1_ctxtdata {unsigned long ctxt; TYPE_1__* dd; } ;
struct TYPE_2__ {unsigned long first_dyn_alloc_ctxt; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_0(struct hfi1_ctxtdata *VAR_1)
{
 return (VAR_1->ctxt - VAR_1->dd->first_dyn_alloc_ctxt) *
  VAR_0;
}

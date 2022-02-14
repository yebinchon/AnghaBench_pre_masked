
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qib_ctxtdata {scalar_t__ ctxt; int rcvegrcnt; int rcvegr_tid_base; TYPE_2__* dd; } ;
struct TYPE_4__ {int num_pports; TYPE_1__* cspec; } ;
struct TYPE_3__ {int rcvegrcnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct qib_ctxtdata *VAR_2)
{
 if (VAR_2->ctxt < VAR_1) {
  if (VAR_2->dd->num_pports > 1) {
   VAR_2->rcvegrcnt = VAR_0 / 2;
   VAR_2->rcvegr_tid_base = VAR_2->ctxt ? VAR_2->rcvegrcnt : 0;
  } else {
   VAR_2->rcvegrcnt = VAR_0;
   VAR_2->rcvegr_tid_base = 0;
  }
 } else {
  VAR_2->rcvegrcnt = VAR_2->dd->cspec->rcvegrcnt;
  VAR_2->rcvegr_tid_base = VAR_0 +
   (VAR_2->ctxt - VAR_1) * VAR_2->rcvegrcnt;
 }
}

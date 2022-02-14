
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qib_ctxtdata {int ctxt; int rcvegrcnt; void* rcvegr_tid_base; TYPE_2__* dd; } ;
struct TYPE_4__ {TYPE_1__* cspec; } ;
struct TYPE_3__ {int rcvegrcnt; } ;


 void* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct qib_ctxtdata *VAR_1)
{
 if (!VAR_1->ctxt) {
  VAR_1->rcvegrcnt = VAR_0;
  VAR_1->rcvegr_tid_base = 0;
 } else {
  VAR_1->rcvegrcnt = VAR_1->dd->cspec->rcvegrcnt;
  VAR_1->rcvegr_tid_base = VAR_0 +
   (VAR_1->ctxt - 1) * VAR_1->rcvegrcnt;
 }
}

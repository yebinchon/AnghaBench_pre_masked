
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int icr; int tbe; int frtt; int rif; int rdf; int nrm; int trm; int cdf; int adtf; scalar_t__ mcr; int pcr; int class_type; } ;
typedef TYPE_1__ srv_cls_param_t ;
struct TYPE_6__ {int LineRate; } ;
typedef TYPE_2__ IADEV ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0 (IADEV *VAR_1, srv_cls_param_t *VAR_2) {
  VAR_2->class_type = VAR_0;
  VAR_2->pcr = VAR_1->LineRate;
  VAR_2->mcr = 0;
  VAR_2->icr = 0x055cb7;
  VAR_2->tbe = 0xffffff;
  VAR_2->frtt = 0x3a;
  VAR_2->rif = 0xf;
  VAR_2->rdf = 0xb;
  VAR_2->nrm = 0x4;
  VAR_2->trm = 0x7;
  VAR_2->cdf = 0x3;
  VAR_2->adtf = 50;
}

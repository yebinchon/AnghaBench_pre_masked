
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_8__ {scalar_t__ accumbytes; scalar_t__ accumobjs; scalar_t__ curbytes; scalar_t__ curobjs; } ;
struct TYPE_9__ {TYPE_2__ dump_cnts; } ;
typedef TYPE_3__ prof_tctx_t ;
struct TYPE_7__ {int accumbytes; int accumobjs; int curbytes; int curobjs; } ;
struct TYPE_10__ {TYPE_1__ cnt_summed; int lock; } ;
typedef TYPE_4__ prof_gctx_t ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(tsdn_t *VAR_1, prof_tctx_t *VAR_2, prof_gctx_t *VAR_3) {
 FUNC_0(VAR_1, VAR_3->lock);

 VAR_3->cnt_summed.curobjs += VAR_2->dump_cnts.curobjs;
 VAR_3->cnt_summed.curbytes += VAR_2->dump_cnts.curbytes;
 if (VAR_0) {
  VAR_3->cnt_summed.accumobjs += VAR_2->dump_cnts.accumobjs;
  VAR_3->cnt_summed.accumbytes += VAR_2->dump_cnts.accumbytes;
 }
}

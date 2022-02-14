
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int uint32_t ;
struct hubbub {int dummy; } ;
struct TYPE_24__ {scalar_t__ pstate_change_ns; } ;
struct TYPE_25__ {TYPE_16__ cstate_pstate; } ;
struct TYPE_19__ {scalar_t__ pstate_change_ns; } ;
struct TYPE_20__ {TYPE_11__ cstate_pstate; } ;
struct TYPE_32__ {scalar_t__ pstate_change_ns; } ;
struct TYPE_33__ {TYPE_7__ cstate_pstate; } ;
struct TYPE_28__ {scalar_t__ pstate_change_ns; } ;
struct TYPE_29__ {TYPE_3__ cstate_pstate; } ;
struct dcn_watermark_set {TYPE_17__ d; TYPE_12__ c; TYPE_8__ b; TYPE_4__ a; } ;
struct TYPE_21__ {scalar_t__ pstate_change_ns; } ;
struct TYPE_22__ {TYPE_13__ cstate_pstate; } ;
struct TYPE_34__ {scalar_t__ pstate_change_ns; } ;
struct TYPE_18__ {TYPE_9__ cstate_pstate; } ;
struct TYPE_30__ {scalar_t__ pstate_change_ns; } ;
struct TYPE_31__ {TYPE_5__ cstate_pstate; } ;
struct TYPE_26__ {scalar_t__ pstate_change_ns; } ;
struct TYPE_27__ {TYPE_1__ cstate_pstate; } ;
struct TYPE_23__ {TYPE_14__ d; TYPE_10__ c; TYPE_6__ b; TYPE_2__ a; } ;
struct dcn10_hubbub {TYPE_15__ watermarks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct dcn10_hubbub* FUNC_2 (struct hubbub*) ;
 int FUNC_3 (scalar_t__,unsigned int,int) ;

void FUNC_4(
  struct hubbub *VAR_4,
  struct dcn_watermark_set *VAR_5,
  unsigned int VAR_6,
  bool VAR_7)
{
 struct dcn10_hubbub *VAR_8 = FUNC_2(VAR_4);
 uint32_t VAR_9;


 if (VAR_7 || VAR_5->a.cstate_pstate.pstate_change_ns
   > VAR_8->watermarks.a.cstate_pstate.pstate_change_ns) {
  VAR_8->watermarks.a.cstate_pstate.pstate_change_ns =
    VAR_5->a.cstate_pstate.pstate_change_ns;
  VAR_9 = FUNC_3(
    VAR_5->a.cstate_pstate.pstate_change_ns,
    VAR_6, 0x1fffff);
  FUNC_1(VAR_0, 0,
    VAR_0, VAR_9);
  FUNC_0("DRAM_CLK_CHANGE_WATERMARK_A calculated =%d\n"
   "HW register value = 0x%x\n\n",
   VAR_5->a.cstate_pstate.pstate_change_ns, VAR_9);
 }


 if (VAR_7 || VAR_5->b.cstate_pstate.pstate_change_ns
   > VAR_8->watermarks.b.cstate_pstate.pstate_change_ns) {
  VAR_8->watermarks.b.cstate_pstate.pstate_change_ns =
    VAR_5->b.cstate_pstate.pstate_change_ns;
  VAR_9 = FUNC_3(
    VAR_5->b.cstate_pstate.pstate_change_ns,
    VAR_6, 0x1fffff);
  FUNC_1(VAR_1, 0,
    VAR_1, VAR_9);
  FUNC_0("DRAM_CLK_CHANGE_WATERMARK_B calculated =%d\n"
   "HW register value = 0x%x\n\n",
   VAR_5->b.cstate_pstate.pstate_change_ns, VAR_9);
 }


 if (VAR_7 || VAR_5->c.cstate_pstate.pstate_change_ns
   > VAR_8->watermarks.c.cstate_pstate.pstate_change_ns) {
  VAR_8->watermarks.c.cstate_pstate.pstate_change_ns =
    VAR_5->c.cstate_pstate.pstate_change_ns;
  VAR_9 = FUNC_3(
    VAR_5->c.cstate_pstate.pstate_change_ns,
    VAR_6, 0x1fffff);
  FUNC_1(VAR_2, 0,
    VAR_2, VAR_9);
  FUNC_0("DRAM_CLK_CHANGE_WATERMARK_C calculated =%d\n"
   "HW register value = 0x%x\n\n",
   VAR_5->c.cstate_pstate.pstate_change_ns, VAR_9);
 }


 if (VAR_7 || VAR_5->d.cstate_pstate.pstate_change_ns
   > VAR_8->watermarks.d.cstate_pstate.pstate_change_ns) {
  VAR_8->watermarks.d.cstate_pstate.pstate_change_ns =
    VAR_5->d.cstate_pstate.pstate_change_ns;
  VAR_9 = FUNC_3(
    VAR_5->d.cstate_pstate.pstate_change_ns,
    VAR_6, 0x1fffff);
  FUNC_1(VAR_3, 0,
    VAR_3, VAR_9);
  FUNC_0("DRAM_CLK_CHANGE_WATERMARK_D calculated =%d\n"
   "HW register value = 0x%x\n\n",
   VAR_5->d.cstate_pstate.pstate_change_ns, VAR_9);
 }
}

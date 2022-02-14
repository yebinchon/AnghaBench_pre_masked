
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
struct TYPE_28__ {scalar_t__ cstate_enter_plus_exit_ns; scalar_t__ cstate_exit_ns; } ;
struct TYPE_29__ {TYPE_3__ cstate_pstate; } ;
struct TYPE_24__ {scalar_t__ cstate_enter_plus_exit_ns; scalar_t__ cstate_exit_ns; } ;
struct TYPE_25__ {TYPE_16__ cstate_pstate; } ;
struct TYPE_19__ {scalar_t__ cstate_enter_plus_exit_ns; scalar_t__ cstate_exit_ns; } ;
struct TYPE_20__ {TYPE_11__ cstate_pstate; } ;
struct TYPE_32__ {scalar_t__ cstate_enter_plus_exit_ns; scalar_t__ cstate_exit_ns; } ;
struct TYPE_33__ {TYPE_7__ cstate_pstate; } ;
struct dcn_watermark_set {TYPE_4__ d; TYPE_17__ c; TYPE_12__ b; TYPE_8__ a; } ;
struct TYPE_26__ {scalar_t__ cstate_enter_plus_exit_ns; scalar_t__ cstate_exit_ns; } ;
struct TYPE_27__ {TYPE_1__ cstate_pstate; } ;
struct TYPE_21__ {scalar_t__ cstate_enter_plus_exit_ns; scalar_t__ cstate_exit_ns; } ;
struct TYPE_22__ {TYPE_13__ cstate_pstate; } ;
struct TYPE_34__ {scalar_t__ cstate_enter_plus_exit_ns; scalar_t__ cstate_exit_ns; } ;
struct TYPE_18__ {TYPE_9__ cstate_pstate; } ;
struct TYPE_30__ {scalar_t__ cstate_enter_plus_exit_ns; scalar_t__ cstate_exit_ns; } ;
struct TYPE_31__ {TYPE_5__ cstate_pstate; } ;
struct TYPE_23__ {TYPE_2__ d; TYPE_14__ c; TYPE_10__ b; TYPE_6__ a; } ;
struct dcn20_hubbub {TYPE_15__ watermarks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 struct dcn20_hubbub* FUNC_2 (struct hubbub*) ;
 int FUNC_3 (scalar_t__,unsigned int,int) ;

__attribute__((used)) static void FUNC_4(
  struct hubbub *VAR_13,
  struct dcn_watermark_set *VAR_14,
  unsigned int VAR_15,
  bool VAR_16)
{
 struct dcn20_hubbub *VAR_17 = FUNC_2(VAR_13);
 uint32_t VAR_18;


 if (VAR_16 || VAR_14->a.cstate_pstate.cstate_enter_plus_exit_ns
   > VAR_17->watermarks.a.cstate_pstate.cstate_enter_plus_exit_ns) {
  VAR_17->watermarks.a.cstate_pstate.cstate_enter_plus_exit_ns =
    VAR_14->a.cstate_pstate.cstate_enter_plus_exit_ns;
  VAR_18 = FUNC_3(
    VAR_14->a.cstate_pstate.cstate_enter_plus_exit_ns,
    VAR_15, 0x1fffff);
  FUNC_1(VAR_0, 0,
    VAR_0, VAR_18,
    VAR_8, VAR_18);
  FUNC_0("SR_ENTER_EXIT_WATERMARK_A calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_14->a.cstate_pstate.cstate_enter_plus_exit_ns, VAR_18);
 }

 if (VAR_16 || VAR_14->a.cstate_pstate.cstate_exit_ns
   > VAR_17->watermarks.a.cstate_pstate.cstate_exit_ns) {
  VAR_17->watermarks.a.cstate_pstate.cstate_exit_ns =
    VAR_14->a.cstate_pstate.cstate_exit_ns;
  VAR_18 = FUNC_3(
    VAR_14->a.cstate_pstate.cstate_exit_ns,
    VAR_15, 0x1fffff);
  FUNC_1(VAR_4, 0,
    VAR_4, VAR_18,
    VAR_12, VAR_18);
  FUNC_0("SR_EXIT_WATERMARK_A calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_14->a.cstate_pstate.cstate_exit_ns, VAR_18);
 }


 if (VAR_16 || VAR_14->b.cstate_pstate.cstate_enter_plus_exit_ns
   > VAR_17->watermarks.b.cstate_pstate.cstate_enter_plus_exit_ns) {
  VAR_17->watermarks.b.cstate_pstate.cstate_enter_plus_exit_ns =
    VAR_14->b.cstate_pstate.cstate_enter_plus_exit_ns;
  VAR_18 = FUNC_3(
    VAR_14->b.cstate_pstate.cstate_enter_plus_exit_ns,
    VAR_15, 0x1fffff);
  FUNC_1(VAR_1, 0,
    VAR_1, VAR_18,
    VAR_9, VAR_18);
  FUNC_0("SR_ENTER_EXIT_WATERMARK_B calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_14->b.cstate_pstate.cstate_enter_plus_exit_ns, VAR_18);
 }

 if (VAR_16 || VAR_14->b.cstate_pstate.cstate_exit_ns
   > VAR_17->watermarks.b.cstate_pstate.cstate_exit_ns) {
  VAR_17->watermarks.b.cstate_pstate.cstate_exit_ns =
    VAR_14->b.cstate_pstate.cstate_exit_ns;
  VAR_18 = FUNC_3(
    VAR_14->b.cstate_pstate.cstate_exit_ns,
    VAR_15, 0x1fffff);
  FUNC_1(VAR_5, 0,
    VAR_5, VAR_18,
    VAR_12, VAR_18);
  FUNC_0("SR_EXIT_WATERMARK_B calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_14->b.cstate_pstate.cstate_exit_ns, VAR_18);
 }


 if (VAR_16 || VAR_14->c.cstate_pstate.cstate_enter_plus_exit_ns
   > VAR_17->watermarks.c.cstate_pstate.cstate_enter_plus_exit_ns) {
  VAR_17->watermarks.c.cstate_pstate.cstate_enter_plus_exit_ns =
    VAR_14->c.cstate_pstate.cstate_enter_plus_exit_ns;
  VAR_18 = FUNC_3(
    VAR_14->c.cstate_pstate.cstate_enter_plus_exit_ns,
    VAR_15, 0x1fffff);
  FUNC_1(VAR_2, 0,
    VAR_2, VAR_18,
    VAR_10, VAR_18);
  FUNC_0("SR_ENTER_EXIT_WATERMARK_C calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_14->c.cstate_pstate.cstate_enter_plus_exit_ns, VAR_18);
 }

 if (VAR_16 || VAR_14->c.cstate_pstate.cstate_exit_ns
   > VAR_17->watermarks.c.cstate_pstate.cstate_exit_ns) {
  VAR_17->watermarks.c.cstate_pstate.cstate_exit_ns =
    VAR_14->c.cstate_pstate.cstate_exit_ns;
  VAR_18 = FUNC_3(
    VAR_14->c.cstate_pstate.cstate_exit_ns,
    VAR_15, 0x1fffff);
  FUNC_1(VAR_6, 0,
    VAR_6, VAR_18,
    VAR_12, VAR_18);
  FUNC_0("SR_EXIT_WATERMARK_C calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_14->c.cstate_pstate.cstate_exit_ns, VAR_18);
 }


 if (VAR_16 || VAR_14->d.cstate_pstate.cstate_enter_plus_exit_ns
   > VAR_17->watermarks.d.cstate_pstate.cstate_enter_plus_exit_ns) {
  VAR_17->watermarks.d.cstate_pstate.cstate_enter_plus_exit_ns =
    VAR_14->d.cstate_pstate.cstate_enter_plus_exit_ns;
  VAR_18 = FUNC_3(
    VAR_14->d.cstate_pstate.cstate_enter_plus_exit_ns,
    VAR_15, 0x1fffff);
  FUNC_1(VAR_3, 0,
    VAR_3, VAR_18,
    VAR_11, VAR_18);
  FUNC_0("SR_ENTER_EXIT_WATERMARK_D calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_14->d.cstate_pstate.cstate_enter_plus_exit_ns, VAR_18);
 }

 if (VAR_16 || VAR_14->d.cstate_pstate.cstate_exit_ns
   > VAR_17->watermarks.d.cstate_pstate.cstate_exit_ns) {
  VAR_17->watermarks.d.cstate_pstate.cstate_exit_ns =
    VAR_14->d.cstate_pstate.cstate_exit_ns;
  VAR_18 = FUNC_3(
    VAR_14->d.cstate_pstate.cstate_exit_ns,
    VAR_15, 0x1fffff);
  FUNC_1(VAR_7, 0,
    VAR_7, VAR_18,
    VAR_12, VAR_18);
  FUNC_0("SR_EXIT_WATERMARK_D calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_14->d.cstate_pstate.cstate_exit_ns, VAR_18);
 }
}

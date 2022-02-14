
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct hubbub {int dummy; } ;
struct TYPE_18__ {scalar_t__ urgent_ns; scalar_t__ pte_meta_urgent_ns; } ;
struct TYPE_15__ {scalar_t__ urgent_ns; scalar_t__ pte_meta_urgent_ns; } ;
struct TYPE_13__ {scalar_t__ urgent_ns; scalar_t__ pte_meta_urgent_ns; } ;
struct TYPE_11__ {scalar_t__ urgent_ns; scalar_t__ pte_meta_urgent_ns; } ;
struct dcn_watermark_set {TYPE_9__ d; TYPE_6__ c; TYPE_4__ b; TYPE_2__ a; } ;
struct TYPE_16__ {scalar_t__ urgent_ns; scalar_t__ pte_meta_urgent_ns; } ;
struct TYPE_14__ {scalar_t__ urgent_ns; scalar_t__ pte_meta_urgent_ns; } ;
struct TYPE_12__ {scalar_t__ urgent_ns; scalar_t__ pte_meta_urgent_ns; } ;
struct TYPE_10__ {scalar_t__ urgent_ns; scalar_t__ pte_meta_urgent_ns; } ;
struct TYPE_17__ {TYPE_7__ d; TYPE_5__ c; TYPE_3__ b; TYPE_1__ a; } ;
struct dcn10_hubbub {TYPE_8__ watermarks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct dcn10_hubbub* FUNC_3 (struct hubbub*) ;
 int FUNC_4 (scalar_t__,unsigned int,int) ;

void FUNC_5(
  struct hubbub *VAR_8,
  struct dcn_watermark_set *VAR_9,
  unsigned int VAR_10,
  bool VAR_11)
{
 struct dcn10_hubbub *VAR_12 = FUNC_3(VAR_8);
 uint32_t VAR_13;



 if (VAR_11 || VAR_9->a.urgent_ns > VAR_12->watermarks.a.urgent_ns) {
  VAR_12->watermarks.a.urgent_ns = VAR_9->a.urgent_ns;
  VAR_13 = FUNC_4(VAR_9->a.urgent_ns,
    VAR_10, 0x1fffff);
  FUNC_1(VAR_0, 0,
    VAR_0, VAR_13);

  FUNC_0("URGENCY_WATERMARK_A calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_9->a.urgent_ns, VAR_13);
 }

 if (VAR_11 || VAR_9->a.pte_meta_urgent_ns > VAR_12->watermarks.a.pte_meta_urgent_ns) {
  VAR_12->watermarks.a.pte_meta_urgent_ns = VAR_9->a.pte_meta_urgent_ns;
  VAR_13 = FUNC_4(VAR_9->a.pte_meta_urgent_ns,
    VAR_10, 0x1fffff);
  FUNC_2(VAR_4, VAR_13);
  FUNC_0("PTE_META_URGENCY_WATERMARK_A calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_9->a.pte_meta_urgent_ns, VAR_13);
 }


 if (VAR_11 || VAR_9->b.urgent_ns > VAR_12->watermarks.b.urgent_ns) {
  VAR_12->watermarks.b.urgent_ns = VAR_9->b.urgent_ns;
  VAR_13 = FUNC_4(VAR_9->b.urgent_ns,
    VAR_10, 0x1fffff);
  FUNC_1(VAR_1, 0,
    VAR_1, VAR_13);

  FUNC_0("URGENCY_WATERMARK_B calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_9->b.urgent_ns, VAR_13);
 }

 if (VAR_11 || VAR_9->b.pte_meta_urgent_ns > VAR_12->watermarks.b.pte_meta_urgent_ns) {
  VAR_12->watermarks.b.pte_meta_urgent_ns = VAR_9->b.pte_meta_urgent_ns;
  VAR_13 = FUNC_4(VAR_9->b.pte_meta_urgent_ns,
    VAR_10, 0x1fffff);
  FUNC_2(VAR_5, VAR_13);
  FUNC_0("PTE_META_URGENCY_WATERMARK_B calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_9->b.pte_meta_urgent_ns, VAR_13);
 }


 if (VAR_11 || VAR_9->c.urgent_ns > VAR_12->watermarks.c.urgent_ns) {
  VAR_12->watermarks.c.urgent_ns = VAR_9->c.urgent_ns;
  VAR_13 = FUNC_4(VAR_9->c.urgent_ns,
    VAR_10, 0x1fffff);
  FUNC_1(VAR_2, 0,
    VAR_2, VAR_13);

  FUNC_0("URGENCY_WATERMARK_C calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_9->c.urgent_ns, VAR_13);
 }

 if (VAR_11 || VAR_9->c.pte_meta_urgent_ns > VAR_12->watermarks.c.pte_meta_urgent_ns) {
  VAR_12->watermarks.c.pte_meta_urgent_ns = VAR_9->c.pte_meta_urgent_ns;
  VAR_13 = FUNC_4(VAR_9->c.pte_meta_urgent_ns,
    VAR_10, 0x1fffff);
  FUNC_2(VAR_6, VAR_13);
  FUNC_0("PTE_META_URGENCY_WATERMARK_C calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_9->c.pte_meta_urgent_ns, VAR_13);
 }


 if (VAR_11 || VAR_9->d.urgent_ns > VAR_12->watermarks.d.urgent_ns) {
  VAR_12->watermarks.d.urgent_ns = VAR_9->d.urgent_ns;
  VAR_13 = FUNC_4(VAR_9->d.urgent_ns,
    VAR_10, 0x1fffff);
  FUNC_1(VAR_3, 0,
    VAR_3, VAR_13);

  FUNC_0("URGENCY_WATERMARK_D calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_9->d.urgent_ns, VAR_13);
 }

 if (VAR_11 || VAR_9->d.pte_meta_urgent_ns > VAR_12->watermarks.d.pte_meta_urgent_ns) {
  VAR_12->watermarks.d.pte_meta_urgent_ns = VAR_9->d.pte_meta_urgent_ns;
  VAR_13 = FUNC_4(VAR_9->d.pte_meta_urgent_ns,
    VAR_10, 0x1fffff);
  FUNC_2(VAR_7, VAR_13);
  FUNC_0("PTE_META_URGENCY_WATERMARK_D calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_9->d.pte_meta_urgent_ns, VAR_13);
 }
}

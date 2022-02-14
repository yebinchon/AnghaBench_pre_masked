
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
struct TYPE_16__ {scalar_t__ urgent_ns; scalar_t__ frac_urg_bw_flip; scalar_t__ frac_urg_bw_nom; } ;
struct TYPE_11__ {scalar_t__ urgent_ns; } ;
struct TYPE_15__ {scalar_t__ urgent_ns; } ;
struct TYPE_13__ {scalar_t__ urgent_ns; } ;
struct dcn_watermark_set {TYPE_7__ a; TYPE_2__ d; TYPE_6__ c; TYPE_4__ b; } ;
struct TYPE_17__ {scalar_t__ urgent_ns; scalar_t__ frac_urg_bw_flip; scalar_t__ frac_urg_bw_nom; } ;
struct TYPE_10__ {scalar_t__ urgent_ns; } ;
struct TYPE_14__ {scalar_t__ urgent_ns; } ;
struct TYPE_12__ {scalar_t__ urgent_ns; } ;
struct TYPE_18__ {TYPE_8__ a; TYPE_1__ d; TYPE_5__ c; TYPE_3__ b; } ;
struct dcn20_hubbub {TYPE_9__ watermarks; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 struct dcn20_hubbub* FUNC_3 (struct hubbub*) ;
 int FUNC_4 (scalar_t__,unsigned int,int) ;

__attribute__((used)) static void FUNC_5(
  struct hubbub *VAR_16,
  struct dcn_watermark_set *VAR_17,
  unsigned int VAR_18,
  bool VAR_19)
{
 struct dcn20_hubbub *VAR_20 = FUNC_3(VAR_16);
 uint32_t VAR_21;



 if (VAR_19 || VAR_17->a.urgent_ns > VAR_20->watermarks.a.urgent_ns) {
  VAR_20->watermarks.a.urgent_ns = VAR_17->a.urgent_ns;
  VAR_21 = FUNC_4(VAR_17->a.urgent_ns,
    VAR_18, 0x1fffff);
  FUNC_2(VAR_0, 0,
    VAR_0, VAR_21,
    VAR_12, VAR_21);

  FUNC_0("URGENCY_WATERMARK_A calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_17->a.urgent_ns, VAR_21);
 }


 if (VAR_19 || VAR_17->a.frac_urg_bw_flip
   > VAR_20->watermarks.a.frac_urg_bw_flip) {
  VAR_20->watermarks.a.frac_urg_bw_flip = VAR_17->a.frac_urg_bw_flip;

  FUNC_1(VAR_4, 0,
    VAR_4, VAR_17->a.frac_urg_bw_flip);
 }

 if (VAR_19 || VAR_17->a.frac_urg_bw_nom
   > VAR_20->watermarks.a.frac_urg_bw_nom) {
  VAR_20->watermarks.a.frac_urg_bw_nom = VAR_17->a.frac_urg_bw_nom;

  FUNC_1(VAR_8, 0,
    VAR_8, VAR_17->a.frac_urg_bw_nom);
 }


 if (VAR_19 || VAR_17->b.urgent_ns > VAR_20->watermarks.b.urgent_ns) {
  VAR_20->watermarks.b.urgent_ns = VAR_17->b.urgent_ns;
  VAR_21 = FUNC_4(VAR_17->b.urgent_ns,
    VAR_18, 0x1fffff);
  FUNC_2(VAR_1, 0,
    VAR_1, VAR_21,
    VAR_13, VAR_21);

  FUNC_0("URGENCY_WATERMARK_B calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_17->b.urgent_ns, VAR_21);
 }


 if (VAR_19 || VAR_17->a.frac_urg_bw_flip
   > VAR_20->watermarks.a.frac_urg_bw_flip) {
  VAR_20->watermarks.a.frac_urg_bw_flip = VAR_17->a.frac_urg_bw_flip;

  FUNC_1(VAR_5, 0,
    VAR_5, VAR_17->a.frac_urg_bw_flip);
 }

 if (VAR_19 || VAR_17->a.frac_urg_bw_nom
   > VAR_20->watermarks.a.frac_urg_bw_nom) {
  VAR_20->watermarks.a.frac_urg_bw_nom = VAR_17->a.frac_urg_bw_nom;

  FUNC_1(VAR_9, 0,
    VAR_9, VAR_17->a.frac_urg_bw_nom);
 }


 if (VAR_19 || VAR_17->c.urgent_ns > VAR_20->watermarks.c.urgent_ns) {
  VAR_20->watermarks.c.urgent_ns = VAR_17->c.urgent_ns;
  VAR_21 = FUNC_4(VAR_17->c.urgent_ns,
    VAR_18, 0x1fffff);
  FUNC_2(VAR_2, 0,
    VAR_2, VAR_21,
    VAR_14, VAR_21);

  FUNC_0("URGENCY_WATERMARK_C calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_17->c.urgent_ns, VAR_21);
 }


 if (VAR_19 || VAR_17->a.frac_urg_bw_flip
   > VAR_20->watermarks.a.frac_urg_bw_flip) {
  VAR_20->watermarks.a.frac_urg_bw_flip = VAR_17->a.frac_urg_bw_flip;

  FUNC_1(VAR_6, 0,
    VAR_6, VAR_17->a.frac_urg_bw_flip);
 }

 if (VAR_19 || VAR_17->a.frac_urg_bw_nom
   > VAR_20->watermarks.a.frac_urg_bw_nom) {
  VAR_20->watermarks.a.frac_urg_bw_nom = VAR_17->a.frac_urg_bw_nom;

  FUNC_1(VAR_10, 0,
    VAR_10, VAR_17->a.frac_urg_bw_nom);
 }


 if (VAR_19 || VAR_17->d.urgent_ns > VAR_20->watermarks.d.urgent_ns) {
  VAR_20->watermarks.d.urgent_ns = VAR_17->d.urgent_ns;
  VAR_21 = FUNC_4(VAR_17->d.urgent_ns,
    VAR_18, 0x1fffff);
  FUNC_2(VAR_3, 0,
    VAR_3, VAR_21,
    VAR_15, VAR_21);

  FUNC_0("URGENCY_WATERMARK_D calculated =%d\n"
   "HW register value = 0x%x\n",
   VAR_17->d.urgent_ns, VAR_21);
 }


 if (VAR_19 || VAR_17->a.frac_urg_bw_flip
   > VAR_20->watermarks.a.frac_urg_bw_flip) {
  VAR_20->watermarks.a.frac_urg_bw_flip = VAR_17->a.frac_urg_bw_flip;

  FUNC_1(VAR_7, 0,
    VAR_7, VAR_17->a.frac_urg_bw_flip);
 }

 if (VAR_19 || VAR_17->a.frac_urg_bw_nom
   > VAR_20->watermarks.a.frac_urg_bw_nom) {
  VAR_20->watermarks.a.frac_urg_bw_nom = VAR_17->a.frac_urg_bw_nom;

  FUNC_1(VAR_11, 0,
    VAR_11, VAR_17->a.frac_urg_bw_nom);
 }
}

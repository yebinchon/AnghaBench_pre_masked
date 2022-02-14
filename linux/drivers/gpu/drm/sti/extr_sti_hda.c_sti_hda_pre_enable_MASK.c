
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {int flags; } ;
struct sti_hda {int enabled; TYPE_2__ mode; int clk_hddac; int clk_pix; } ;
struct drm_bridge {struct sti_hda* driver_private; } ;
struct TYPE_3__ {int vid_cat; int nb_instr; int awg_instr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;




 scalar_t__ FUNC_2 (int ) ;
 size_t* VAR_23 ;
 size_t* VAR_24 ;
 size_t* VAR_25 ;
 int FUNC_3 (struct sti_hda*,int) ;
 int FUNC_4 (TYPE_2__,size_t*) ;
 size_t FUNC_5 (struct sti_hda*,scalar_t__) ;
 TYPE_1__* VAR_26 ;
 int FUNC_6 (struct sti_hda*,size_t,scalar_t__) ;
 int FUNC_7 (struct sti_hda*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct drm_bridge *VAR_27)
{
 struct sti_hda *VAR_28 = VAR_27->driver_private;
 u32 VAR_29, VAR_30, VAR_31;
 u32 VAR_32, VAR_33;
 u32 *VAR_34, *VAR_35;
 u32 VAR_36;

 FUNC_0("\n");

 if (VAR_28->enabled)
  return;


 if (FUNC_2(VAR_28->clk_pix))
  FUNC_1("Failed to prepare/enable hda_pix clk\n");
 if (FUNC_2(VAR_28->clk_hddac))
  FUNC_1("Failed to prepare/enable hda_hddac clk\n");

 if (!FUNC_4(VAR_28->mode, &VAR_31)) {
  FUNC_1("Undefined mode\n");
  return;
 }

 switch (VAR_26[VAR_31].vid_cat) {
 case 130:
  FUNC_1("Beyond HD analog capabilities\n");
  return;
 case 129:

  VAR_36 = VAR_3;
  VAR_32 = VAR_16;
  VAR_33 = VAR_13;
  VAR_34 = VAR_24;
  VAR_35 = VAR_23;
  break;
 case 131:

  VAR_36 = VAR_2;
  VAR_32 = VAR_15;
  VAR_33 = VAR_12;
  VAR_34 = VAR_25;
  VAR_35 = VAR_25;
  break;
 case 128:
  FUNC_1("Not supported\n");
  return;
 default:
  FUNC_1("Undefined resolution\n");
  return;
 }
 FUNC_0("Using HDA mode #%d\n", VAR_31);


 FUNC_3(VAR_28, 1);


 FUNC_6(VAR_28, VAR_22, VAR_10);
 FUNC_6(VAR_28, VAR_20, VAR_8);
 FUNC_6(VAR_28, VAR_21, VAR_9);


 FUNC_6(VAR_28 , VAR_32, VAR_14);
 FUNC_6(VAR_28, VAR_33, VAR_11);
 for (VAR_30 = 0; VAR_30 < VAR_19; VAR_30++) {
  FUNC_6(VAR_28, VAR_34[VAR_30], VAR_18 + VAR_30 * 4);
  FUNC_6(VAR_28, VAR_35[VAR_30], VAR_17 + VAR_30 * 4);
 }


 VAR_29 = 0;
 VAR_29 |= (VAR_28->mode.flags & VAR_6) ?
     0 : VAR_1;
 VAR_29 |= (VAR_5 << VAR_4);
 VAR_29 |= VAR_36;
 FUNC_6(VAR_28, VAR_29, VAR_7);


 FUNC_7(VAR_28, VAR_26[VAR_31].awg_instr,
         VAR_26[VAR_31].nb_instr);


 VAR_29 = FUNC_5(VAR_28, VAR_7);
 VAR_29 |= VAR_0;
 FUNC_6(VAR_28, VAR_29, VAR_7);

 VAR_28->enabled = 1;
}

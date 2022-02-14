
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int clock; } ;
struct sti_hdmi {int event_received; int wait_event; TYPE_1__ mode; } ;
struct TYPE_6__ {scalar_t__ min_tmds_freq; scalar_t__ max_tmds_freq; scalar_t__* config; } ;
struct TYPE_5__ {scalar_t__ min; scalar_t__ max; scalar_t__ idf; scalar_t__ odf; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_2 (struct sti_hdmi*,int ) ;
 int FUNC_3 (struct sti_hdmi*,int,int ) ;
 TYPE_3__* VAR_19 ;
 int FUNC_4 (int ) ;
 TYPE_2__* VAR_20 ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static bool FUNC_6(struct sti_hdmi *VAR_21)
{
 u32 VAR_22 = VAR_21->mode.clock * 1000;
 u32 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27 = 0;
 bool VAR_28 = 0;
 int VAR_29;

 FUNC_0("ckpxpll = %dHz\n", VAR_22);

 for (VAR_29 = 0; VAR_29 < VAR_14; VAR_29++) {
  if (VAR_22 >= VAR_20[VAR_29].min &&
      VAR_22 < VAR_20[VAR_29].max) {
   VAR_25 = VAR_20[VAR_29].idf;
   VAR_26 = VAR_20[VAR_29].odf;
   VAR_28 = 1;
   break;
  }
 }

 if (!VAR_28) {
  FUNC_1("input TMDS clock speed (%d) not supported\n",
     VAR_22);
  goto err;
 }


 VAR_24 = VAR_22;
 VAR_27 |= 40 << VAR_17;

 if (VAR_24 > 340000000) {
  FUNC_1("output TMDS clock (%d) out of range\n", VAR_24);
  goto err;
 }

 VAR_27 |= VAR_25 << VAR_16;
 VAR_27 |= VAR_26 << VAR_18;




 VAR_21->event_received = 0;
 FUNC_0("pllctrl = 0x%x\n", VAR_27);
 FUNC_3(VAR_21, (VAR_27 | VAR_15), VAR_9);


 FUNC_5(VAR_21->wait_event,
      VAR_21->event_received == 1,
      FUNC_4
      (VAR_12));

 if ((FUNC_2(VAR_21, VAR_10) & VAR_11) == 0) {
  FUNC_1("hdmi phy pll not locked\n");
  goto err;
 }

 FUNC_0("got PHY PLL Lock\n");

 VAR_23 = (VAR_2 |
        VAR_6 |
        VAR_3 |
        VAR_4);

 if (VAR_24 > 165000000)
  VAR_23 |= VAR_5;






 for (VAR_29 = 0; VAR_29 < VAR_13; VAR_29++) {
  if ((VAR_19[VAR_29].min_tmds_freq <= VAR_24) &&
      (VAR_19[VAR_29].max_tmds_freq >= VAR_24)) {
   VAR_23 |= (VAR_19[VAR_29].config[0]
    & ~VAR_7);
   FUNC_3(VAR_21, VAR_23, VAR_1);

   VAR_23 = VAR_19[VAR_29].config[1];
   FUNC_3(VAR_21, VAR_23, VAR_8);

   VAR_23 = VAR_19[VAR_29].config[2];
   FUNC_3(VAR_21, VAR_23, VAR_0);

   FUNC_0("serializer cfg 0x%x 0x%x 0x%x\n",
      VAR_19[VAR_29].config[0],
      VAR_19[VAR_29].config[1],
      VAR_19[VAR_29].config[2]);
   return 1;
  }
 }





 FUNC_3(VAR_21, VAR_23, VAR_1);
 FUNC_3(VAR_21, 0x0, VAR_8);
 FUNC_3(VAR_21, 0x0, VAR_0);

 return 1;

err:
 return 0;
}

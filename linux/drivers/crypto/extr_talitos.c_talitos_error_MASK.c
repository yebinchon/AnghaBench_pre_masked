
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct talitos_private {int num_channels; TYPE_1__* chan; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 unsigned int VAR_22 ;
 int FUNC_0 () ;
 int FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct talitos_private* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int,int,int) ;
 int FUNC_5 (struct talitos_private*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int) ;
 int FUNC_10 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_11(struct device *VAR_23, u32 VAR_24, u32 VAR_25)
{
 struct talitos_private *VAR_26 = FUNC_3(VAR_23);
 unsigned int VAR_27 = VAR_22;
 int VAR_28, VAR_29, VAR_30 = 0;
 u32 VAR_31;
 bool VAR_32 = FUNC_5(VAR_26);
 int VAR_33 = VAR_32 ? 1 : 0;

 for (VAR_28 = 0; VAR_28 < VAR_26->num_channels; VAR_28++) {

  if (VAR_32) {

   if (!(VAR_24 & (1 << (29 + (VAR_28 & 1) * 2 - (VAR_28 & 2) * 6))))
    continue;
  } else {
   if (!(VAR_24 & (1 << (VAR_28 * 2 + 1))))
    continue;
  }

  VAR_29 = -VAR_1;

  VAR_31 = FUNC_6(VAR_26->chan[VAR_28].reg + VAR_9);

  if (VAR_31 & VAR_10) {
   FUNC_2(VAR_23, "double fetch fifo overflow error\n");
   VAR_29 = -VAR_0;
   VAR_33 = 1;
  }
  if (VAR_31 & VAR_20) {

   FUNC_2(VAR_23, "single fetch fifo overflow error\n");
   VAR_29 = -VAR_0;
  }
  if (VAR_31 & VAR_17)
   FUNC_2(VAR_23, "master data transfer error\n");
  if (VAR_31 & VAR_19)
   FUNC_2(VAR_23, VAR_32 ? "pointer not complete error\n"
          : "s/g data length zero error\n");
  if (VAR_31 & VAR_12)
   FUNC_2(VAR_23, VAR_32 ? "parity error\n"
          : "fetch pointer zero error\n");
  if (VAR_31 & VAR_15)
   FUNC_2(VAR_23, "illegal descriptor header error\n");
  if (VAR_31 & VAR_16)
   FUNC_2(VAR_23, VAR_32 ? "static assignment error\n"
          : "invalid exec unit error\n");
  if (VAR_31 & VAR_11)
   FUNC_8(VAR_23, VAR_28, FUNC_1(VAR_23, VAR_28));
  if (!VAR_32) {
   if (VAR_31 & VAR_13)
    FUNC_2(VAR_23, "gather boundary error\n");
   if (VAR_31 & VAR_14)
    FUNC_2(VAR_23, "gather return/length error\n");
   if (VAR_31 & VAR_18)
    FUNC_2(VAR_23, "scatter boundary error\n");
   if (VAR_31 & VAR_21)
    FUNC_2(VAR_23, "scatter return/length error\n");
  }

  FUNC_4(VAR_23, VAR_28, VAR_29, VAR_33);

  if (VAR_33) {
   FUNC_9(VAR_23, VAR_28);
  } else {
   FUNC_10(VAR_26->chan[VAR_28].reg + VAR_7,
      VAR_5);
   FUNC_10(VAR_26->chan[VAR_28].reg + VAR_8, 0);
   while ((FUNC_6(VAR_26->chan[VAR_28].reg + VAR_7) &
          VAR_5) && --VAR_27)
    FUNC_0();
   if (VAR_27 == 0) {
    FUNC_2(VAR_23, "failed to restart channel %d\n",
     VAR_28);
    VAR_30 = 1;
   }
  }
 }
 if (VAR_30 || (VAR_32 && VAR_24 & ~VAR_3) ||
     (!VAR_32 && VAR_24 & ~VAR_6) || VAR_25) {
  if (VAR_32 && (VAR_25 & VAR_4))
   FUNC_2(VAR_23, "TEA error: ISR 0x%08x_%08x\n",
    VAR_24, VAR_25);
  else
   FUNC_2(VAR_23, "done overflow, internal time out, or "
    "rngu error: ISR 0x%08x_%08x\n", VAR_24, VAR_25);


  for (VAR_28 = 0; VAR_28 < VAR_26->num_channels; VAR_28++)
   FUNC_4(VAR_23, VAR_28, -VAR_2, 1);


  FUNC_7(VAR_23);
 }
}

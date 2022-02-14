
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct hda_softc {int regs; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct hda_softc*,scalar_t__,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct hda_softc *VAR_18)
{
 uint32_t VAR_19 = 0;
 uint8_t VAR_20;

 FUNC_0("Reset the HDA controller registers ...\n");

 FUNC_3(VAR_18->regs, 0, sizeof(VAR_18->regs));

 FUNC_2(VAR_18, VAR_3,
   VAR_4 |
   (VAR_16 << VAR_5) |
   (VAR_17 << VAR_6));
 FUNC_2(VAR_18, VAR_13, 0x01);
 FUNC_2(VAR_18, VAR_8, 0x3c);
 FUNC_2(VAR_18, VAR_7, 0x1d);
 FUNC_2(VAR_18, VAR_0,
     VAR_2 | VAR_1);
 FUNC_2(VAR_18, VAR_9,
     VAR_11 | VAR_10);

 for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
  VAR_19 = FUNC_1(VAR_20);
  FUNC_2(VAR_18, VAR_19 + VAR_12, VAR_14);
 }
}

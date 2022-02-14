
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct titsc {unsigned int bit_xp; int wires; unsigned int bit_xn; unsigned int bit_yn; unsigned int bit_yp; int coordinate_readouts; unsigned int charge_delay; int step_mask; int mfd_tscadc; int inp_yn; int inp_xp; int inp_yp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_2 (int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int) ;
 unsigned int FUNC_4 (struct titsc*,int ) ;
 int FUNC_5 (struct titsc*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct titsc *VAR_11)
{
 unsigned int VAR_12;
 int VAR_13;
 int VAR_14, VAR_15, VAR_16;
 u32 VAR_17;

 VAR_12 = VAR_6 |
   VAR_3 | VAR_11->bit_xp;
 switch (VAR_11->wires) {
 case 4:
  VAR_12 |= FUNC_2(VAR_11->inp_yp) | VAR_11->bit_xn;
  break;
 case 5:
  VAR_12 |= VAR_11->bit_yn |
    VAR_5 | VAR_11->bit_xn |
    VAR_11->bit_yp;
  break;
 case 8:
  VAR_12 |= FUNC_2(VAR_11->inp_yp) | VAR_11->bit_xn;
  break;
 }

 VAR_16 = VAR_11->coordinate_readouts * 2 + 2;
 VAR_15 = VAR_10 - VAR_16;

 VAR_14 = VAR_15 + VAR_16;
 for (VAR_13 = VAR_14 - VAR_11->coordinate_readouts; VAR_13 < VAR_14; VAR_13++) {
  FUNC_5(VAR_11, FUNC_0(VAR_13), VAR_12);
  FUNC_5(VAR_11, FUNC_1(VAR_13), VAR_7);
 }

 VAR_12 = 0;
 VAR_12 = VAR_6 |
   VAR_3 | VAR_11->bit_yn |
   VAR_4;
 switch (VAR_11->wires) {
 case 4:
  VAR_12 |= VAR_11->bit_yp | FUNC_2(VAR_11->inp_xp);
  break;
 case 5:
  VAR_12 |= VAR_11->bit_xp | VAR_5 |
    VAR_8 | VAR_9;
  break;
 case 8:
  VAR_12 |= VAR_11->bit_yp | FUNC_2(VAR_11->inp_xp);
  break;
 }


 VAR_14 = VAR_15 + VAR_11->coordinate_readouts;
 for (VAR_13 = VAR_15; VAR_13 < VAR_14; VAR_13++) {
  FUNC_5(VAR_11, FUNC_0(VAR_13), VAR_12);
  FUNC_5(VAR_11, FUNC_1(VAR_13), VAR_7);
 }



 VAR_12 = FUNC_4(VAR_11, VAR_2);
 FUNC_5(VAR_11, VAR_0, VAR_12);
 FUNC_5(VAR_11, VAR_1, VAR_11->charge_delay);


 VAR_12 = VAR_6 |
   VAR_3 | VAR_11->bit_yp |
   VAR_11->bit_xn | VAR_4 |
   FUNC_2(VAR_11->inp_xp);
 FUNC_5(VAR_11, FUNC_0(VAR_14), VAR_12);
 FUNC_5(VAR_11, FUNC_1(VAR_14),
   VAR_7);

 VAR_14++;
 VAR_12 |= FUNC_2(VAR_11->inp_yn);
 FUNC_5(VAR_11, FUNC_0(VAR_14), VAR_12);
 FUNC_5(VAR_11, FUNC_1(VAR_14),
   VAR_7);


 VAR_17 = 1;
 for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++)
  VAR_17 |= 1 << (VAR_15 + VAR_13 + 1);

 VAR_11->step_mask = VAR_17;
 FUNC_3(VAR_11->mfd_tscadc, VAR_11->step_mask);
}

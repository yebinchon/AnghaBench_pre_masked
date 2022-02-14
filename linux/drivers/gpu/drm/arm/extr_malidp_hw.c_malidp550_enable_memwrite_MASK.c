
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u32 ;
typedef int u16 ;
struct malidp_hw_device {int mw_state; } ;
typedef int const s32 ;
typedef int s16 ;
typedef int dma_addr_t ;


 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int const VAR_7 ;
 int const FUNC_0 (int ) ;
 int const FUNC_1 (int ) ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int,char*) ;
 int const FUNC_3 (int ) ;
 int FUNC_4 (struct malidp_hw_device*,int ) ;
 int FUNC_5 (struct malidp_hw_device*,int,int const) ;
 int FUNC_6 (struct malidp_hw_device*,int const,int const) ;
 int const FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct malidp_hw_device *VAR_18,
         dma_addr_t *VAR_19, s32 *VAR_20,
         int VAR_21, u16 VAR_22, u16 VAR_23, u32 VAR_24,
         const s16 *VAR_25)
{
 u32 VAR_26 = VAR_1;
 u32 VAR_27 = FUNC_4(VAR_18, VAR_6);


 FUNC_5(VAR_18, VAR_15, VAR_27 + VAR_7);

 VAR_18->mw_state = VAR_17;

 FUNC_6(VAR_18, VAR_24, VAR_26 + VAR_8);
 switch (VAR_21) {
 case 2:
  FUNC_6(VAR_18, FUNC_3(VAR_19[1]), VAR_26 + VAR_13);
  FUNC_6(VAR_18, FUNC_7(VAR_19[1]), VAR_26 + VAR_12);
  FUNC_6(VAR_18, VAR_20[1], VAR_26 + VAR_14);

 case 1:
  FUNC_6(VAR_18, FUNC_3(VAR_19[0]), VAR_26 + VAR_10);
  FUNC_6(VAR_18, FUNC_7(VAR_19[0]), VAR_26 + VAR_9);
  FUNC_6(VAR_18, VAR_20[0], VAR_26 + VAR_11);
  break;
 default:
  FUNC_2(1, "Invalid number of planes");
 }

 FUNC_6(VAR_18, FUNC_0(VAR_22) | FUNC_1(VAR_23),
   VAR_3);
 FUNC_5(VAR_18, VAR_2 | VAR_16,
     VAR_0);

 if (VAR_25) {
  int VAR_28;

  for (VAR_28 = 0; VAR_28 < VAR_5; VAR_28++) {
   FUNC_6(VAR_18, VAR_25[VAR_28],
     VAR_4 + VAR_28 * 4);
  }
 }

 return 0;
}

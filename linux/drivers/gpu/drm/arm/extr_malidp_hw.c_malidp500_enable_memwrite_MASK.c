
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u32 ;
typedef int u16 ;
struct malidp_hw_device {scalar_t__ mw_state; } ;
typedef int const s32 ;
typedef int s16 ;
typedef int dma_addr_t ;


 int const VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int const VAR_6 ;
 int const FUNC_0 (int ) ;
 int const FUNC_1 (int ) ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_2 (int,char*) ;
 int const FUNC_3 (int ) ;
 int FUNC_4 (struct malidp_hw_device*,int ) ;
 int FUNC_5 (struct malidp_hw_device*,int ,int const) ;
 int FUNC_6 (struct malidp_hw_device*,int const,int const) ;
 int const FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct malidp_hw_device *VAR_19,
         dma_addr_t *VAR_20, s32 *VAR_21,
         int VAR_22, u16 VAR_23, u16 VAR_24, u32 VAR_25,
         const s16 *VAR_26)
{
 u32 VAR_27 = VAR_1;
 u32 VAR_28 = FUNC_4(VAR_19, VAR_5);


 FUNC_5(VAR_19, VAR_14, VAR_28 + VAR_6);


 if (VAR_19->mw_state != VAR_16)
  VAR_19->mw_state = VAR_17;
 else
  VAR_19->mw_state = VAR_18;

 FUNC_6(VAR_19, VAR_25, VAR_27 + VAR_7);
 switch (VAR_22) {
 case 2:
  FUNC_6(VAR_19, FUNC_3(VAR_20[1]), VAR_27 + VAR_12);
  FUNC_6(VAR_19, FUNC_7(VAR_20[1]), VAR_27 + VAR_11);
  FUNC_6(VAR_19, VAR_21[1], VAR_27 + VAR_13);

 case 1:
  FUNC_6(VAR_19, FUNC_3(VAR_20[0]), VAR_27 + VAR_9);
  FUNC_6(VAR_19, FUNC_7(VAR_20[0]), VAR_27 + VAR_8);
  FUNC_6(VAR_19, VAR_21[0], VAR_27 + VAR_10);
  break;
 default:
  FUNC_2(1, "Invalid number of planes");
 }

 FUNC_6(VAR_19, FUNC_0(VAR_23) | FUNC_1(VAR_24),
   VAR_2);

 if (VAR_26) {
  int VAR_29;

  for (VAR_29 = 0; VAR_29 < VAR_4; VAR_29++) {
   FUNC_6(VAR_19, VAR_26[VAR_29],
     VAR_3 + VAR_29 * 4);
  }
 }

 FUNC_5(VAR_19, VAR_15, VAR_0);

 return 0;
}

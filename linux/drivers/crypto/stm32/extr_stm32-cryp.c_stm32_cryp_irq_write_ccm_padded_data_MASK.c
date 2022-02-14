
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int tmp ;
struct stm32_cryp {size_t total_in; size_t total_out; int dev; scalar_t__ total_out_save; int flags; struct scatterlist* out_sg; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,struct scatterlist*,scalar_t__,size_t,int ) ;
 void FUNC_4 (struct stm32_cryp*,int) ;
 int FUNC_5 (struct stm32_cryp*) ;
 int FUNC_6 (struct stm32_cryp*) ;
 int FUNC_7 (struct stm32_cryp*,scalar_t__) ;
 int FUNC_8 (struct stm32_cryp*) ;
 int FUNC_9 (struct stm32_cryp*) ;
 int FUNC_10 (struct stm32_cryp*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_11(struct stm32_cryp *VAR_13)
{
 int VAR_14 = 0;
 u32 VAR_15, VAR_16;
 u32 VAR_17[VAR_0], VAR_18[VAR_0], VAR_19[VAR_0];
 size_t VAR_20, VAR_21 = VAR_13->total_in;
 struct scatterlist *VAR_22 = VAR_13->out_sg;
 unsigned int VAR_23;


 VAR_13->flags |= VAR_12;


 FUNC_10(VAR_13, VAR_4, 0);

 VAR_15 = FUNC_7(VAR_13, VAR_1);
 VAR_15 &= ~VAR_9;
 FUNC_10(VAR_13, VAR_1, VAR_15);


 VAR_16 = FUNC_7(VAR_13, VAR_2 + 7 * 4);


 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_17); VAR_23++)
  VAR_17[VAR_23] = FUNC_7(VAR_13, VAR_2 + VAR_23 * 4);


 FUNC_10(VAR_13, VAR_5, VAR_16);


 VAR_15 &= ~VAR_8;
 VAR_15 |= VAR_7;
 FUNC_10(VAR_13, VAR_1, VAR_15);


 VAR_15 |= VAR_9;
 FUNC_10(VAR_13, VAR_1, VAR_15);


 FUNC_6(VAR_13);
 VAR_13->total_in = VAR_21;
 VAR_14 = FUNC_9(VAR_13);
 if (VAR_14) {
  FUNC_1(VAR_13->dev, "Timeout (wite ccm padded data)\n");
  return FUNC_4(VAR_13, VAR_14);
 }


 VAR_20 = VAR_13->total_out;
 FUNC_5(VAR_13);

 FUNC_2(VAR_19, 0, sizeof(VAR_19));
 FUNC_3(VAR_19, VAR_22,
     VAR_13->total_out_save - VAR_20,
     VAR_20, 0);


 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_18); VAR_23++)
  VAR_18[VAR_23] = FUNC_7(VAR_13, VAR_2 + VAR_23 * 4);


 VAR_15 &= ~VAR_8;
 VAR_15 |= VAR_6;
 FUNC_10(VAR_13, VAR_1, VAR_15);


 VAR_15 &= ~VAR_11;
 VAR_15 |= VAR_10;
 FUNC_10(VAR_13, VAR_1, VAR_15);


 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_19); VAR_23++) {
  VAR_19[VAR_23] ^= VAR_17[VAR_23];
  VAR_19[VAR_23] ^= VAR_18[VAR_23];
  FUNC_10(VAR_13, VAR_3, VAR_19[VAR_23]);
 }


 VAR_14 = FUNC_8(VAR_13);
 if (VAR_14)
  FUNC_1(VAR_13->dev, "Timeout (wite ccm padded data)\n");


 FUNC_4(VAR_13, VAR_14);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct crypto_tfm {int dummy; } ;
struct atmel_tdes_dev {int dma_size; int flags; int dev; } ;
struct atmel_tdes_ctx {struct atmel_tdes_dev* dd; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int,int) ;
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
 int FUNC_1 (struct atmel_tdes_dev*,int ,int) ;
 struct atmel_tdes_ctx* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (int ,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_16, dma_addr_t VAR_17,
          dma_addr_t VAR_18, int VAR_19)
{
 struct atmel_tdes_ctx *VAR_20 = FUNC_2(VAR_16);
 struct atmel_tdes_dev *VAR_21 = VAR_20->dd;
 int VAR_22;

 VAR_21->dma_size = VAR_19;

 if (!(VAR_21->flags & VAR_4)) {
  FUNC_3(VAR_21->dev, VAR_17, VAR_19,
        VAR_0);
 }

 if ((VAR_21->flags & VAR_1) && (VAR_21->flags & VAR_3))
  VAR_22 = FUNC_0(VAR_19, sizeof(u8));
 else if ((VAR_21->flags & VAR_1) && (VAR_21->flags & VAR_2))
  VAR_22 = FUNC_0(VAR_19, sizeof(u16));
 else
  VAR_22 = FUNC_0(VAR_19, sizeof(u32));

 FUNC_1(VAR_21, VAR_7, VAR_10|VAR_8);
 FUNC_1(VAR_21, VAR_15, VAR_17);
 FUNC_1(VAR_21, VAR_14, VAR_22);
 FUNC_1(VAR_21, VAR_13, VAR_18);
 FUNC_1(VAR_21, VAR_12, VAR_22);


 FUNC_1(VAR_21, VAR_5, VAR_6);


 FUNC_1(VAR_21, VAR_7, VAR_11 | VAR_9);

 return 0;
}

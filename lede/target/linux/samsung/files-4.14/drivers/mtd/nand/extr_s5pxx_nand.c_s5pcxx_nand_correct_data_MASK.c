
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct s5p_nand_host {scalar_t__ ecc_base; } ;
struct nand_chip {struct s5p_nand_host* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_4, u8 *VAR_5,
         u8 *VAR_6, u8 *VAR_7)
{
 int VAR_8 = 0;
    u32 VAR_9;
    u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    struct nand_chip *VAR_16 = VAR_4->priv;
 struct s5p_nand_host *VAR_17 = VAR_16->priv;


    while (FUNC_1(VAR_17->ecc_base + VAR_3) & (1 << 31));

    VAR_9 = FUNC_1(VAR_17->ecc_base + VAR_2) & 0x1F;
    VAR_10 = FUNC_1(VAR_17->ecc_base + VAR_0);
    VAR_11 = FUNC_1(VAR_17->ecc_base + VAR_0 + 0x04);
    VAR_12 = FUNC_1(VAR_17->ecc_base + VAR_0 + 0x08);
    VAR_13 = FUNC_1(VAR_17->ecc_base + VAR_0 + 0x0C);

    VAR_14 = FUNC_1(VAR_17->ecc_base + VAR_1);
    VAR_15 = FUNC_1(VAR_17->ecc_base + VAR_1 + 0x04);

    switch (VAR_9) {
    case 8:
        VAR_5[(VAR_13 >> 16) & 0x3FF] ^= (VAR_15 >> 24) & 0xFF;
    case 7:
        VAR_5[VAR_13 & 0x3FF] ^= (VAR_15 >> 16) & 0xFF;
    case 6:
        VAR_5[(VAR_12 >> 16) & 0x3FF] ^= (VAR_15 >> 8) & 0xFF;
    case 5:
        VAR_5[VAR_12 & 0x3FF] ^= VAR_15 & 0xFF;
    case 4:
        VAR_5[(VAR_11 >> 16) & 0x3FF] ^= (VAR_14 >> 24) & 0xFF;
    case 3:
        VAR_5[VAR_11 & 0x3FF] ^= (VAR_14 >> 16) & 0xFF;
    case 2:
        VAR_5[(VAR_10 >> 16) & 0x3FF] ^= (VAR_14 >> 8) & 0xFF;
    case 1:
        VAR_5[VAR_10 & 0x3FF] ^= VAR_14 & 0xFF;
    case 0:
        break;
    default:
        VAR_8 = -1;
        FUNC_0("ECC uncorrectable error detected:%d\n", VAR_9);
        break;
    }

    return VAR_8;
}

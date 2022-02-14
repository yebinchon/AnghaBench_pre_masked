
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_dsi {int data_rate; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mtk_dsi *VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12, VAR_13;
 u32 VAR_14, VAR_15;

 VAR_14 = 1000 / VAR_9->data_rate + 0x01;
 VAR_15 = 8000 / VAR_9->data_rate + 0x01;

 VAR_10 = VAR_8 | VAR_5 << 8 | VAR_7 << 16 | VAR_6 << 24;
 VAR_11 = 4 * VAR_8 | (3 * VAR_8 / 2) << 8 | 5 * VAR_8 << 16 |
    VAR_4 << 24;
 VAR_12 = ((FUNC_0(0x64, VAR_15) + 0xa) << 24) |
    (FUNC_0(0x150, VAR_15) << 16);
 VAR_13 = FUNC_0(0x40, VAR_15) | (2 * VAR_8) << 16 |
    FUNC_0(80 + 52 * VAR_14, VAR_15) << 8;

 FUNC_1(VAR_10, VAR_9->regs + VAR_0);
 FUNC_1(VAR_11, VAR_9->regs + VAR_1);
 FUNC_1(VAR_12, VAR_9->regs + VAR_2);
 FUNC_1(VAR_13, VAR_9->regs + VAR_3);
}

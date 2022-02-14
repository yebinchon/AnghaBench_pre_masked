
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_dc_priv {scalar_t__ dc_reg; } ;
typedef enum ipu_dc_map { ____Placeholder_ipu_dc_map } ipu_dc_map ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ipu_dc_priv *VAR_0, enum ipu_dc_map VAR_1,
  int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = VAR_1 * 3 + VAR_2;
 u32 VAR_6;

 VAR_6 = FUNC_2(VAR_0->dc_reg + FUNC_1(VAR_5));
 VAR_6 &= ~(0xffff << (16 * (VAR_5 & 0x1)));
 VAR_6 |= ((VAR_3 << 8) | VAR_4) << (16 * (VAR_5 & 0x1));
 FUNC_3(VAR_6, VAR_0->dc_reg + FUNC_1(VAR_5));

 VAR_6 = FUNC_2(VAR_0->dc_reg + FUNC_0(VAR_1));
 VAR_6 &= ~(0x1f << ((16 * (VAR_1 & 0x1)) + (5 * VAR_2)));
 VAR_6 |= VAR_5 << ((16 * (VAR_1 & 0x1)) + (5 * VAR_2));
 FUNC_3(VAR_6, VAR_0->dc_reg + FUNC_0(VAR_1));
}

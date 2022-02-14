
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_dc_priv {scalar_t__ dc_tmpl_reg; } ;
struct ipu_dc {struct ipu_dc_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ipu_dc *VAR_2, int VAR_3, u32 VAR_4, u32 VAR_5,
  int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 struct ipu_dc_priv *VAR_11 = VAR_2->priv;
 u32 VAR_12, VAR_13;

 if (VAR_4 == VAR_0) {
  VAR_12 = (VAR_5 << 20) & 0xfff00000;
  VAR_13 = VAR_5 >> 12 | VAR_4 << 1 | VAR_10 << 9;
 } else if (VAR_4 == VAR_1) {
  VAR_12 = VAR_9 | VAR_8 << 4 | ++VAR_7 << 11 | ((VAR_5 << 15) & 0xffff8000);
  VAR_13 = VAR_5 >> 17 | VAR_4 << 7 | VAR_10 << 9;
 } else {
  VAR_12 = VAR_9 | VAR_8 << 4 | ++VAR_7 << 11 | ++VAR_6 << 15 | ((VAR_5 << 20) & 0xfff00000);
  VAR_13 = VAR_5 >> 12 | VAR_4 << 4 | VAR_10 << 9;
 }
 FUNC_0(VAR_12, VAR_11->dc_tmpl_reg + VAR_3 * 8);
 FUNC_0(VAR_13, VAR_11->dc_tmpl_reg + VAR_3 * 8 + 4);
}

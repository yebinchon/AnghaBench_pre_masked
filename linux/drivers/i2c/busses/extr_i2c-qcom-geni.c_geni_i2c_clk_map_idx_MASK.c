
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct geni_i2c_dev {scalar_t__ clk_freq_out; struct geni_i2c_clk_fld const* clk_fld; } ;
struct geni_i2c_clk_fld {scalar_t__ clk_freq_out; } ;


 int FUNC_0 (struct geni_i2c_clk_fld*) ;
 int VAR_0 ;
 struct geni_i2c_clk_fld* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct geni_i2c_dev *VAR_2)
{
 int VAR_3;
 const struct geni_i2c_clk_fld *VAR_4 = VAR_1;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++, VAR_4++) {
  if (VAR_4->clk_freq_out == VAR_2->clk_freq_out) {
   VAR_2->clk_fld = VAR_4;
   return 0;
  }
 }
 return -VAR_0;
}

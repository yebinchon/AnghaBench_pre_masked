
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dvb_frontend {struct dib0090_fw_state* tuner_priv; } ;
struct dib0090_fw_state {int dummy; } ;
struct TYPE_2__ {int adc_clock_ratio; int pll_range; int pll_loopdiv; int pll_prediv; int pll_bypass; } ;
struct dib0090_config {int data_tx_drv; int ls_cfg_pad_drv; int clkouttobamse; int clkoutdrive; TYPE_1__ io; int analog_output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dib0090_fw_state*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dib0090_fw_state*,int) ;
 int FUNC_3 (struct dib0090_fw_state*,int,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_4, const struct dib0090_config *VAR_5)
{
 struct dib0090_fw_state *VAR_6 = VAR_4->tuner_priv;
 u16 VAR_7;
 u16 VAR_8;
 int VAR_9;

 FUNC_4("fw reset digital\n");
 FUNC_0(VAR_6);

 FUNC_3(VAR_6, 0x24, VAR_3 | VAR_1);
 FUNC_3(VAR_6, 0x1b, VAR_2 | VAR_3 | VAR_1);

 FUNC_3(VAR_6, 0x20,
   ((VAR_5->io.adc_clock_ratio - 1) << 11) | (0 << 10) | (1 << 9) | (1 << 8) | (VAR_5->data_tx_drv << 4) | VAR_5->ls_cfg_pad_drv);

 VAR_8 = (0 << 15) | ((!VAR_5->analog_output) << 14) | (1 << 9) | (0 << 8) | (VAR_5->clkouttobamse << 4) | (0 << 2) | (0);
 if (VAR_5->clkoutdrive != 0)
  VAR_8 |= VAR_5->clkoutdrive << 5;
 else
  VAR_8 |= 7 << 5;

 VAR_8 |= 2 << 10;
 FUNC_3(VAR_6, 0x23, VAR_8);


 VAR_7 = FUNC_2(VAR_6, 0x21);


 if ((VAR_7 & 0x1FFF) != ((VAR_5->io.pll_range << 12) | (VAR_5->io.pll_loopdiv << 6) | (VAR_5->io.pll_prediv)) && !VAR_5->io.pll_bypass) {


  VAR_7 |= (1 << 15);
  FUNC_3(VAR_6, 0x21, VAR_7);


  VAR_7 &= ~(1 << 13);
  FUNC_3(VAR_6, 0x21, VAR_7);


  VAR_7 = (1 << 15) | (0 << 13) | (VAR_5->io.pll_range << 12) | (VAR_5->io.pll_loopdiv << 6) | (VAR_5->io.pll_prediv);
  FUNC_3(VAR_6, 0x21, VAR_7);


  VAR_7 |= (1 << 13);
  FUNC_3(VAR_6, 0x21, VAR_7);


  VAR_9 = 100;
  do {
   VAR_8 = !!(FUNC_2(VAR_6, 0x1a) & 0x800);
   if (VAR_8)
    break;
  } while (--VAR_9);

  if (VAR_9 == 0) {
   FUNC_4("Pll: Unable to lock Pll\n");
   return -VAR_0;
  }


  VAR_7 &= ~(1 << 15);
  FUNC_3(VAR_6, 0x21, VAR_7);
 }

 if (VAR_5->io.pll_bypass) {
  VAR_7 |= (VAR_5->io.pll_bypass << 15);
  FUNC_3(VAR_6, 0x21, VAR_7);
 }

 return FUNC_1(VAR_4);
}

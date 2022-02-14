
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stv0367_state {int activedemod; TYPE_2__* config; int fe; TYPE_1__* cab_state; } ;
struct TYPE_4__ {int xtal; } ;
struct TYPE_3__ {int adc_clk; int mclk; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct stv0367_state*,int ,int ) ;
 int FUNC_2 (struct stv0367_state*,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct stv0367_state *VAR_12)
{
 FUNC_2(VAR_12, VAR_2, 0x00);
 FUNC_2(VAR_12, VAR_3, 0x01);
 FUNC_2(VAR_12, VAR_4, 0x06);
 FUNC_2(VAR_12, VAR_5, 0x03);
 FUNC_2(VAR_12, VAR_6, 0x00);
 FUNC_2(VAR_12, VAR_7, 0x00);



 FUNC_2(VAR_12, VAR_1, 0x8B);

 FUNC_2(VAR_12, VAR_8, 0x04);



 FUNC_2(VAR_12, VAR_0, 0x0D);

 FUNC_2(VAR_12, VAR_9, 0x10);


 FUNC_1(VAR_12, VAR_10, VAR_12->config->xtal);

 FUNC_0(50);

 FUNC_2(VAR_12, VAR_0, 0x00);

 VAR_12->cab_state->mclk = FUNC_4(&VAR_12->fe,
  VAR_12->config->xtal);
 VAR_12->cab_state->adc_clk = FUNC_3(&VAR_12->fe,
  VAR_12->config->xtal);

 VAR_12->activedemod = VAR_11;
}

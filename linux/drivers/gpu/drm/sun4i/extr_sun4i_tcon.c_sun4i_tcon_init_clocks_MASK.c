
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_tcon {void* sclk1; TYPE_1__* quirks; void* sclk0; void* clk; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ has_channel_1; scalar_t__ has_channel_0; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,char*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0,
      struct sun4i_tcon *VAR_1)
{
 VAR_1->clk = FUNC_4(VAR_0, "ahb");
 if (FUNC_0(VAR_1->clk)) {
  FUNC_3(VAR_0, "Couldn't get the TCON bus clock\n");
  return FUNC_1(VAR_1->clk);
 }
 FUNC_2(VAR_1->clk);

 if (VAR_1->quirks->has_channel_0) {
  VAR_1->sclk0 = FUNC_4(VAR_0, "tcon-ch0");
  if (FUNC_0(VAR_1->sclk0)) {
   FUNC_3(VAR_0, "Couldn't get the TCON channel 0 clock\n");
   return FUNC_1(VAR_1->sclk0);
  }
 }
 FUNC_2(VAR_1->sclk0);

 if (VAR_1->quirks->has_channel_1) {
  VAR_1->sclk1 = FUNC_4(VAR_0, "tcon-ch1");
  if (FUNC_0(VAR_1->sclk1)) {
   FUNC_3(VAR_0, "Couldn't get the TCON channel 1 clock\n");
   return FUNC_1(VAR_1->sclk1);
  }
 }

 return 0;
}

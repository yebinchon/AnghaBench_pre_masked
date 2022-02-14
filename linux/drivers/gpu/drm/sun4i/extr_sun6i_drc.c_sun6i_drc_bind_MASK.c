
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_drc {void* reset; void* bus_clk; void* mod_clk; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct sun6i_drc*) ;
 void* FUNC_6 (struct device*,char*) ;
 struct sun6i_drc* FUNC_7 (struct device*,int,int ) ;
 void* FUNC_8 (struct device*,int *) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_2, struct device *VAR_3,
    void *VAR_4)
{
 struct sun6i_drc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_7(VAR_2, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 FUNC_5(VAR_2, VAR_5);

 VAR_5->reset = FUNC_8(VAR_2, ((void*)0));
 if (FUNC_0(VAR_5->reset)) {
  FUNC_4(VAR_2, "Couldn't get our reset line\n");
  return FUNC_1(VAR_5->reset);
 }

 VAR_6 = FUNC_10(VAR_5->reset);
 if (VAR_6) {
  FUNC_4(VAR_2, "Couldn't deassert our reset line\n");
  return VAR_6;
 }

 VAR_5->bus_clk = FUNC_6(VAR_2, "ahb");
 if (FUNC_0(VAR_5->bus_clk)) {
  FUNC_4(VAR_2, "Couldn't get our bus clock\n");
  VAR_6 = FUNC_1(VAR_5->bus_clk);
  goto err_assert_reset;
 }
 FUNC_3(VAR_5->bus_clk);

 VAR_5->mod_clk = FUNC_6(VAR_2, "mod");
 if (FUNC_0(VAR_5->mod_clk)) {
  FUNC_4(VAR_2, "Couldn't get our mod clock\n");
  VAR_6 = FUNC_1(VAR_5->mod_clk);
  goto err_disable_bus_clk;
 }
 FUNC_3(VAR_5->mod_clk);

 return 0;

err_disable_bus_clk:
 FUNC_2(VAR_5->bus_clk);
err_assert_reset:
 FUNC_9(VAR_5->reset);
 return VAR_6;
}

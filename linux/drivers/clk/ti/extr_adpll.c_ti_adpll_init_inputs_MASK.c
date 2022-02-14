
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_adpll_data {struct clk** parent_clocks; int dev; int * parent_names; TYPE_1__* c; int np; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int nr_max_inputs; scalar_t__ is_type_s; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int ,char const*,...) ;
 struct clk* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int) ;

__attribute__((used)) static int FUNC_6(struct ti_adpll_data *VAR_4)
{
 const char *VAR_5 = "need at least %i inputs";
 struct clk *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_4->np);
 if (VAR_7 < VAR_4->c->nr_max_inputs) {
  FUNC_2(VAR_4->dev, VAR_5, VAR_7);
  return -VAR_0;
 }
 FUNC_5(VAR_4->np, VAR_4->parent_names, VAR_7);

 VAR_6 = FUNC_3(VAR_4->dev, VAR_4->parent_names[0]);
 if (FUNC_0(VAR_6)) {
  FUNC_2(VAR_4->dev, "could not get clkinp\n");
  return FUNC_1(VAR_6);
 }
 VAR_4->parent_clocks[VAR_1] = VAR_6;

 VAR_6 = FUNC_3(VAR_4->dev, VAR_4->parent_names[1]);
 if (FUNC_0(VAR_6)) {
  FUNC_2(VAR_4->dev, "could not get clkinpulow clock\n");
  return FUNC_1(VAR_6);
 }
 VAR_4->parent_clocks[VAR_3] = VAR_6;

 if (VAR_4->c->is_type_s) {
  VAR_6 = FUNC_3(VAR_4->dev, VAR_4->parent_names[2]);
  if (FUNC_0(VAR_6)) {
   FUNC_2(VAR_4->dev, "could not get clkinphif clock\n");
   return FUNC_1(VAR_6);
  }
  VAR_4->parent_clocks[VAR_2] = VAR_6;
 }

 return 0;
}

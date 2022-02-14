
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icst_vco {int dummy; } ;
struct clk_icst {unsigned long rate; TYPE_1__* params; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {unsigned long ref; } ;


 unsigned long FUNC_0 (TYPE_1__*,struct icst_vco) ;
 int FUNC_1 (char*) ;
 struct clk_icst* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (struct clk_icst*,struct icst_vco*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_0,
          unsigned long VAR_1)
{
 struct clk_icst *VAR_2 = FUNC_2(VAR_0);
 struct icst_vco VAR_3;
 int VAR_4;

 if (VAR_1)
  VAR_2->params->ref = VAR_1;
 VAR_4 = FUNC_3(VAR_2, &VAR_3);
 if (VAR_4) {
  FUNC_1("ICST: could not get VCO setting\n");
  return 0;
 }
 VAR_2->rate = FUNC_0(VAR_2->params, VAR_3);
 return VAR_2->rate;
}

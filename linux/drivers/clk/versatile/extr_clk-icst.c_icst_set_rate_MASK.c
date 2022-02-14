
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct icst_vco {int dummy; } ;
struct clk_icst {scalar_t__ ctype; TYPE_1__* params; int rate; int lockreg_off; int map; int vcoreg_off; } ;
struct clk_hw {int dummy; } ;
struct TYPE_3__ {unsigned long ref; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,struct icst_vco) ;
 struct icst_vco FUNC_1 (TYPE_1__*,unsigned long) ;
 int FUNC_2 (char*,unsigned long) ;
 int FUNC_3 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_4 (int ,int ,int ) ;
 struct clk_icst* FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (struct clk_icst*,struct icst_vco) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_4, unsigned long VAR_5,
    unsigned long VAR_6)
{
 struct clk_icst *VAR_7 = FUNC_5(VAR_4);
 struct icst_vco VAR_8;

 if (VAR_7->ctype == VAR_1) {

  unsigned int VAR_9;
  int VAR_10;

  if (VAR_5 == 25000000) {
   VAR_9 = 0;
  } else if (VAR_5 == 33000000) {
   VAR_9 = VAR_2;
  } else {
   FUNC_2("ICST: cannot set PCI frequency %lu\n",
          VAR_5);
   return -VAR_0;
  }
  VAR_10 = FUNC_4(VAR_7->map, VAR_7->lockreg_off,
       VAR_3);
  if (VAR_10)
   return VAR_10;
  VAR_10 = FUNC_3(VAR_7->map, VAR_7->vcoreg_off,
      VAR_2,
      VAR_9);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_4(VAR_7->map, VAR_7->lockreg_off, 0);
  if (VAR_10)
   return VAR_10;
  return 0;
 }

 if (VAR_6)
  VAR_7->params->ref = VAR_6;
 VAR_8 = FUNC_1(VAR_7->params, VAR_5);
 VAR_7->rate = FUNC_0(VAR_7->params, VAR_8);
 return FUNC_6(VAR_7, VAR_8);
}

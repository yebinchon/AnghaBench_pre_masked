
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct clk_hw {int clk; } ;
struct clk {int dummy; } ;
struct TYPE_9__ {struct clk* clk; } ;
struct TYPE_12__ {TYPE_3__ hw; } ;
struct TYPE_8__ {struct clk* clk; } ;
struct TYPE_11__ {TYPE_2__ hw; } ;
struct TYPE_7__ {struct clk* clk; } ;
struct TYPE_10__ {TYPE_1__ hw; } ;


 int FUNC_0 (int) ;
 struct clk* FUNC_1 (int ) ;
 unsigned long FUNC_2 (struct clk*) ;
 TYPE_6__ VAR_0 ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_3 (int ,struct clk*) ;
 int FUNC_4 (struct clk*,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_3, unsigned long VAR_4,
  unsigned long VAR_5)
{
 int VAR_6, VAR_7;
 struct clk *VAR_8;

 if (VAR_4 == FUNC_2(VAR_0)) {
  VAR_6 = FUNC_3(VAR_3->clk, VAR_0);
  return VAR_6;
 }

 if (VAR_4 == FUNC_2(VAR_1)) {
  VAR_6 = FUNC_3(VAR_3->clk, VAR_1);
  return VAR_6;
 }

 if (VAR_4 == FUNC_2(VAR_2)) {
  VAR_6 = FUNC_3(VAR_3->clk, VAR_2);
  return VAR_6;
 }

 VAR_8 = FUNC_1(VAR_3->clk);


 if (VAR_8 == VAR_0) {
  VAR_6 = FUNC_3(VAR_3->clk, VAR_1);
  FUNC_0(VAR_6);
 }

 VAR_7 = FUNC_4(VAR_0, VAR_4);

 VAR_6 = FUNC_3(VAR_3->clk, VAR_0);

 return VAR_7 ? VAR_7 : VAR_6;
}

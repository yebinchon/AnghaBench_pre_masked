
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* dev_id; struct clk* clk; } ;
struct clk {unsigned long rate; TYPE_1__ cl; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct clk* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;

void FUNC_3(const char *VAR_1, unsigned long VAR_2)
{
 struct clk *VAR_3 = FUNC_1(sizeof(struct clk), VAR_0);

 if (!VAR_3)
  FUNC_2("failed to add clock");

 VAR_3->cl.dev_id = VAR_1;
 VAR_3->cl.clk = VAR_3;

 VAR_3->rate = VAR_2;

 FUNC_0(&VAR_3->cl);
}

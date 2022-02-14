
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* dev_id; char* con_id; struct clk* clk; } ;
struct clk {TYPE_1__ cl; int disable; int enable; int bits; scalar_t__ module; int rates; int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 struct clk* FUNC_1 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(void)
{
 struct clk *VAR_8 = FUNC_1(sizeof(struct clk), VAR_1);
 struct clk *VAR_9 = FUNC_1(sizeof(struct clk), VAR_1);


 VAR_8->cl.dev_id = "17000000.pci";
 VAR_8->cl.con_id = ((void*)0);
 VAR_8->cl.clk = VAR_8;
 VAR_8->rate = VAR_0;
 VAR_8->rates = VAR_7;
 VAR_8->enable = VAR_3;
 VAR_8->disable = VAR_6;
 VAR_8->module = 0;
 VAR_8->bits = VAR_2;
 FUNC_0(&VAR_8->cl);


 VAR_9->cl.dev_id = "17000000.pci";
 VAR_9->cl.con_id = "external";
 VAR_9->cl.clk = VAR_9;
 VAR_9->enable = VAR_5;
 VAR_9->disable = VAR_4;
 FUNC_0(&VAR_9->cl);
}

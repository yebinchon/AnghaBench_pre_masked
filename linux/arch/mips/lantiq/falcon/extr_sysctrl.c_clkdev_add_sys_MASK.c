
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* dev_id; struct clk* clk; int * con_id; } ;
struct clk {unsigned int module; unsigned int bits; TYPE_1__ cl; int reboot; int disable; int enable; int deactivate; int activate; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct clk* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline void FUNC_2(const char *VAR_6, unsigned int VAR_7,
     unsigned int VAR_8)
{
 struct clk *VAR_9 = FUNC_1(sizeof(struct clk), VAR_0);

 VAR_9->cl.dev_id = VAR_6;
 VAR_9->cl.con_id = ((void*)0);
 VAR_9->cl.clk = VAR_9;
 VAR_9->module = VAR_7;
 VAR_9->bits = VAR_8;
 VAR_9->activate = VAR_1;
 VAR_9->deactivate = VAR_4;
 VAR_9->enable = VAR_3;
 VAR_9->disable = VAR_2;
 VAR_9->reboot = VAR_5;
 FUNC_0(&VAR_9->cl);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* dev_id; char const* con_id; struct clk* clk; } ;
struct clk {unsigned int module; unsigned int bits; TYPE_1__ cl; int (* disable ) (struct clk*) ;int enable; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct clk* FUNC_1 (int,int ) ;
 int FUNC_2 (struct clk*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(const char *VAR_2, const char *VAR_3, bool VAR_4,
      unsigned int VAR_5, unsigned int VAR_6)
{
 struct clk *VAR_7 = FUNC_1(sizeof(struct clk), VAR_0);

 VAR_7->cl.dev_id = VAR_2;
 VAR_7->cl.con_id = VAR_3;
 VAR_7->cl.clk = VAR_7;
 VAR_7->enable = VAR_1;
 VAR_7->disable = FUNC_2;
 VAR_7->module = VAR_5;
 VAR_7->bits = VAR_6;
 if (VAR_4) {




  FUNC_2(VAR_7);
 }
 FUNC_0(&VAR_7->cl);
}

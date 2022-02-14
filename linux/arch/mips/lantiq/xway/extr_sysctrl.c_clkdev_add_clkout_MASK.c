
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* dev_id; char* con_id; struct clk* clk; } ;
struct clk {int module; TYPE_1__ cl; int enable; int rates; scalar_t__ rate; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char*,int) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  struct clk *VAR_4;
  char *VAR_5;

  VAR_5 = FUNC_1(sizeof("clkout0"), VAR_0);
  FUNC_2(VAR_5, "clkout%d", VAR_3);

  VAR_4 = FUNC_1(sizeof(struct clk), VAR_0);
  VAR_4->cl.dev_id = "1f103000.cgu";
  VAR_4->cl.con_id = VAR_5;
  VAR_4->cl.clk = VAR_4;
  VAR_4->rate = 0;
  VAR_4->rates = VAR_2[VAR_3];
  VAR_4->enable = VAR_1;
  VAR_4->module = VAR_3;
  FUNC_0(&VAR_4->cl);
 }
}

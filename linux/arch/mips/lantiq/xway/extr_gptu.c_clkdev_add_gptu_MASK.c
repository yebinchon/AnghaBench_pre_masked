
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {char const* con_id; struct clk* clk; int dev_id; } ;
struct clk {unsigned int bits; TYPE_1__ cl; int disable; int enable; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct device*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct clk* FUNC_2 (int,int ) ;

__attribute__((used)) static inline void FUNC_3(struct device *VAR_3, const char *VAR_4,
       unsigned int VAR_5)
{
 struct clk *VAR_6 = FUNC_2(sizeof(struct clk), VAR_0);

 VAR_6->cl.dev_id = FUNC_1(VAR_3);
 VAR_6->cl.con_id = VAR_4;
 VAR_6->cl.clk = VAR_6;
 VAR_6->enable = VAR_2;
 VAR_6->disable = VAR_1;
 VAR_6->bits = VAR_5;
 FUNC_0(&VAR_6->cl);
}

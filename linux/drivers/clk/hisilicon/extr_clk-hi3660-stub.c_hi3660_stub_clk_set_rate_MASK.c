
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hi3660_stub_clk {unsigned long* msg; unsigned long cmd; unsigned long rate; } ;
struct clk_hw {int dummy; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {int mbox; TYPE_1__ cl; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,unsigned long*) ;
 TYPE_2__ VAR_1 ;
 struct hi3660_stub_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_2, unsigned long VAR_3,
        unsigned long VAR_4)
{
 struct hi3660_stub_clk *VAR_5 = FUNC_3(VAR_2);

 VAR_5->msg[0] = VAR_5->cmd;
 VAR_5->msg[1] = VAR_3 / VAR_0;

 FUNC_0(VAR_1.cl.dev, "set rate msg[0]=0x%x msg[1]=0x%x\n",
  VAR_5->msg[0], VAR_5->msg[1]);

 FUNC_2(VAR_1.mbox, VAR_5->msg);
 FUNC_1(VAR_1.mbox, 0);

 VAR_5->rate = VAR_3;
 return 0;
}

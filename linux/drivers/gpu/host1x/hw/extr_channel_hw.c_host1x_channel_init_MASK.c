
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_channel {scalar_t__ regs; } ;
struct host1x {scalar_t__ regs; } ;


 int FUNC_0 (struct host1x*,struct host1x_channel*) ;

__attribute__((used)) static int FUNC_1(struct host1x_channel *VAR_0, struct host1x *VAR_1,
          unsigned int VAR_2)
{

 VAR_0->regs = VAR_1->regs + VAR_2 * 0x4000;



 FUNC_0(VAR_1, VAR_0);
 return 0;
}

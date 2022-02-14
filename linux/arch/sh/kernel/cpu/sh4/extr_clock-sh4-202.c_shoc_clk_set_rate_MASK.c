
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int rate; TYPE_1__* parent; } ;
struct TYPE_2__ {int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int* VAR_2 ;
 unsigned int FUNC_2 (struct clk*,unsigned long) ;
 scalar_t__ FUNC_3 (struct clk*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct clk *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;
 unsigned int VAR_6;


 if (FUNC_3(VAR_3, VAR_4) != 0)
  return -VAR_1;

 VAR_6 = FUNC_2(VAR_3, VAR_4);

 VAR_5 = FUNC_0(VAR_0);
 VAR_5 &= ~(0x0007 << 6);
 VAR_5 |= VAR_6 << 6;
 FUNC_1(VAR_5, VAR_0);

 VAR_3->rate = VAR_3->parent->rate / VAR_2[VAR_6];

 return 0;
}

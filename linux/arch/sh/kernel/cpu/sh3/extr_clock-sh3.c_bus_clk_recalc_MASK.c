
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {TYPE_1__* parent; } ;
struct TYPE_2__ {unsigned long rate; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long* VAR_1 ;

__attribute__((used)) static unsigned long FUNC_1(struct clk *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = ((VAR_3 & 0x8000) >> 13) | ((VAR_3 & 0x0030) >> 4);

 return VAR_2->parent->rate / VAR_1[VAR_4];
}

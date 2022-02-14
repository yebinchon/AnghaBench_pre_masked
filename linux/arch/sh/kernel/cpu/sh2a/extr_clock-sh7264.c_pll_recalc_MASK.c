
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {TYPE_1__* parent; } ;
struct TYPE_2__ {unsigned long rate; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 unsigned long* VAR_2 ;

__attribute__((used)) static unsigned long FUNC_1(struct clk *VAR_3)
{
 unsigned long VAR_4 = VAR_3->parent->rate / VAR_1;
 return VAR_4 * VAR_2[(FUNC_0(VAR_0) >> 8) & 1];
}

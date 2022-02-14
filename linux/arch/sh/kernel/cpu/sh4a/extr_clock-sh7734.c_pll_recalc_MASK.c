
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk {TYPE_1__* parent; } ;
struct TYPE_2__ {int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk *VAR_3)
{
 int VAR_4 = 12;
 u32 VAR_5 = FUNC_0(VAR_0);

 if ((VAR_5 & VAR_2) & VAR_1)
  VAR_4 = 16;

 return VAR_3->parent->rate * VAR_4;
}

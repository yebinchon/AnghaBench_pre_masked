
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {unsigned long rate; TYPE_1__* parent; int name; } ;
struct TYPE_2__ {int rate; int name; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,int) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_0)
{
 if (FUNC_0(!VAR_0->parent))
  return VAR_0->rate;

 FUNC_1("%s: (parent %s) rate = %lu KHz\n",
   VAR_0->name, VAR_0->parent->name, VAR_0->parent->rate / 1000);

 return VAR_0->parent->rate;
}

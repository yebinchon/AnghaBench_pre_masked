
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int con_id; int dev_id; } ;
struct clk {unsigned long* rates; unsigned long rate; TYPE_1__ cl; } ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (char*,int ,int ,unsigned long) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct clk *VAR_0, unsigned long VAR_1)
{
 if (FUNC_2(!FUNC_0(VAR_0)))
  return 0;
 if (VAR_0->rates && *VAR_0->rates) {
  unsigned long *VAR_2 = VAR_0->rates;

  while (*VAR_2 && (*VAR_2 != VAR_1))
   VAR_2++;
  if (!*VAR_2) {
   FUNC_1("clk %s.%s: trying to set invalid rate %ld\n",
    VAR_0->cl.dev_id, VAR_0->cl.con_id, VAR_1);
   return -1;
  }
 }
 VAR_0->rate = VAR_1;
 return 0;
}

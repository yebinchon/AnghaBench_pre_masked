
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {scalar_t__ rate; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (struct clk*) ;

__attribute__((used)) static int FUNC_4(struct clk *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_1);

 if (FUNC_2("lantiq,ar9") ||
   FUNC_2("lantiq,vr9")) {
  VAR_3 &= ~0x1f00000;
  if (VAR_2->rate == VAR_0)
   VAR_3 |= 0xe00000;
  else
   VAR_3 |= 0x700000;
 } else {
  VAR_3 &= ~0xf00000;
  if (VAR_2->rate == VAR_0)
   VAR_3 |= 0x800000;
  else
   VAR_3 |= 0x400000;
 }
 FUNC_1(VAR_3, VAR_1);
 FUNC_3(VAR_2);
 return 0;
}

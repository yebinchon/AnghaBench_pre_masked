
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_multiplier {int flags; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_multiplier *VAR_1,
    unsigned long VAR_2,
    unsigned long VAR_3)
{
 if (VAR_1->flags & VAR_0)
  return FUNC_0(VAR_2, VAR_3);

 return VAR_2 / VAR_3;
}

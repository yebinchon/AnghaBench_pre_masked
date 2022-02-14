
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf100_gr {scalar_t__ firmware; } ;


 int FUNC_0 (struct gf100_gr*) ;
 int FUNC_1 (struct gf100_gr*) ;

int
FUNC_2(struct gf100_gr *VAR_0)
{
 int VAR_1;

 if (VAR_0->firmware)
  VAR_1 = FUNC_0(VAR_0);
 else
  VAR_1 = FUNC_1(VAR_0);

 return VAR_1;
}

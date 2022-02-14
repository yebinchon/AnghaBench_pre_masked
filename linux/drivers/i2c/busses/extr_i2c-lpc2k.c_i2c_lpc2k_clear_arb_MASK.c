
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc2k_i2c {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct lpc2k_i2c*) ;
 unsigned long VAR_5 ;
 unsigned long FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct lpc2k_i2c *VAR_6)
{
 unsigned long VAR_7 = VAR_5 + FUNC_2(1000);





 FUNC_5(VAR_3, VAR_6->base + VAR_1);


 while (FUNC_3(VAR_6->base + VAR_2) != VAR_4) {
  if (FUNC_4(VAR_5, VAR_7)) {

   FUNC_1(VAR_6);
   return -VAR_0;
  }

  FUNC_0();
 }

 return 0;
}

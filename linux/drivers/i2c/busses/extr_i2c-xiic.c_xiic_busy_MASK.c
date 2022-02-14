
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xiic_i2c {scalar_t__ tx_msg; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct xiic_i2c*) ;

__attribute__((used)) static int FUNC_2(struct xiic_i2c *VAR_1)
{
 int VAR_2 = 3;
 int VAR_3;

 if (VAR_1->tx_msg)
  return -VAR_0;





 VAR_3 = FUNC_1(VAR_1);
 while (VAR_3 && VAR_2--) {
  FUNC_0(1);
  VAR_3 = FUNC_1(VAR_1);
 }

 return VAR_3;
}

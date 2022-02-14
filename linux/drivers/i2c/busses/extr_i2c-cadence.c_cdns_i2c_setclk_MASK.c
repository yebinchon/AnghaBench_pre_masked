
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns_i2c {unsigned long i2c_clk; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long*,unsigned long,unsigned int*,unsigned int*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_5, struct cdns_i2c *VAR_6)
{
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9;
 int VAR_10 = 0;
 unsigned long VAR_11 = VAR_6->i2c_clk;

 VAR_10 = FUNC_0(&VAR_11, VAR_5, &VAR_7, &VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_1(VAR_4);
 VAR_9 &= ~(VAR_0 | VAR_2);
 VAR_9 |= ((VAR_7 << VAR_1) |
   (VAR_8 << VAR_3));
 FUNC_2(VAR_9, VAR_4);

 return 0;
}

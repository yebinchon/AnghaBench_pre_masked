
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axi_clkgen {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct axi_clkgen*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct axi_clkgen *VAR_3)
{
 unsigned int VAR_4 = 10000;
 unsigned int VAR_5;

 do {
  FUNC_0(VAR_3, VAR_1, &VAR_5);
 } while ((VAR_5 & VAR_0) && --VAR_4);

 if (VAR_5 & VAR_0)
  return -VAR_2;

 return VAR_5 & 0xffff;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axi_clkgen {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct axi_clkgen*) ;
 int FUNC_1 (struct axi_clkgen*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct axi_clkgen *VAR_3,
 unsigned int VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = VAR_1 | VAR_0;
 VAR_6 |= (VAR_4 << 16);

 FUNC_1(VAR_3, VAR_2, VAR_6);

 VAR_7 = FUNC_0(VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 *VAR_5 = VAR_7;

 return 0;
}

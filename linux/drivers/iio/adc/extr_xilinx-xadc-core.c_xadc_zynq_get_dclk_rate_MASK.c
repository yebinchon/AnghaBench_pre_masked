
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xadc {int clk; } ;





 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct xadc*,int ,int*) ;

__attribute__((used)) static unsigned long FUNC_2(struct xadc *VAR_2)
{
 unsigned int VAR_3;
 uint32_t VAR_4;

 FUNC_1(VAR_2, VAR_1, &VAR_4);

 switch (VAR_4 & VAR_0) {
 case 129:
  VAR_3 = 4;
  break;
 case 128:
  VAR_3 = 8;
  break;
 case 130:
  VAR_3 = 16;
  break;
 default:
  VAR_3 = 2;
  break;
 }

 return FUNC_0(VAR_2->clk) / VAR_3;
}

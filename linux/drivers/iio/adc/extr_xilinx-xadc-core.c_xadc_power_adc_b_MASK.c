
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct xadc {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xadc*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct xadc *VAR_3, unsigned int VAR_4)
{
 uint16_t VAR_5;

 switch (VAR_4) {
 case 128:
 case 129:
  VAR_5 = VAR_0;
  break;
 default:
  VAR_5 = 0;
  break;
 }

 return FUNC_0(VAR_3, VAR_2, VAR_1,
  VAR_5);
}

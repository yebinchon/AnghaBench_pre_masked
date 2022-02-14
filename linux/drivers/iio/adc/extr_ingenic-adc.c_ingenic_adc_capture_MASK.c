
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ingenic_adc {scalar_t__ base; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ingenic_adc*,int,int) ;
 int FUNC_2 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct ingenic_adc *VAR_1,
          int VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 FUNC_1(VAR_1, VAR_2, 1);
 VAR_4 = FUNC_2(VAR_1->base + VAR_0, VAR_3,
     !(VAR_3 & FUNC_0(VAR_2)), 250, 1000);
 if (VAR_4)
  FUNC_1(VAR_1, VAR_2, 0);

 return VAR_4;
}

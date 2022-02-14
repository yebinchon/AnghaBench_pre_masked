
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dwapb_gpio {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dwapb_gpio*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 u32 VAR_4;
 struct dwapb_gpio *VAR_5 = VAR_3;

 VAR_4 = FUNC_0(VAR_5);

 return VAR_4 ? VAR_0 : VAR_1;
}

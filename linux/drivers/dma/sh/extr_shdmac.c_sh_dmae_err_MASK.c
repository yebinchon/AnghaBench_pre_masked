
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_dmae_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sh_dmae_device*) ;
 int FUNC_1 (struct sh_dmae_device*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct sh_dmae_device *VAR_5 = VAR_4;

 if (!(FUNC_0(VAR_5) & VAR_0))
  return VAR_2;

 FUNC_1(VAR_5);
 return VAR_1;
}

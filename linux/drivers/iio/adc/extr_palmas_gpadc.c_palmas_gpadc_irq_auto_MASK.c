
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_gpadc {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct palmas_gpadc*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct palmas_gpadc *VAR_3 = VAR_2;

 FUNC_0(VAR_3->dev, "Threshold interrupt %d occurs\n", VAR_1);
 FUNC_1(VAR_3);

 return VAR_0;
}

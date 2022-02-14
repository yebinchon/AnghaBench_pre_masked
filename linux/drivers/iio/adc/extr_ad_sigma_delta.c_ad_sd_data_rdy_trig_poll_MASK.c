
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad_sigma_delta {int irq_dis; int trig; int completion; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct ad_sigma_delta *VAR_3 = VAR_2;

 FUNC_0(&VAR_3->completion);
 FUNC_1(VAR_1);
 VAR_3->irq_dis = 1;
 FUNC_2(VAR_3->trig);

 return VAR_0;
}

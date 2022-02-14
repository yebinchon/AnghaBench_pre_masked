
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoctal {int * channel; scalar_t__ int_space; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(void *VAR_4)
{
 unsigned int VAR_5;
 struct ipoctal *VAR_6 = (struct ipoctal *) VAR_4;


 FUNC_1(VAR_6->int_space + VAR_0);
 FUNC_1(VAR_6->int_space + VAR_1);


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  FUNC_0(&VAR_6->channel[VAR_5]);

 return VAR_2;
}

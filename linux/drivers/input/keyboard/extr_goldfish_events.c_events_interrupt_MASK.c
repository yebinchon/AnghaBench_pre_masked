
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_dev {int input; scalar_t__ addr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct event_dev *VAR_4 = VAR_3;
 unsigned int VAR_5, VAR_6, VAR_7;

 VAR_5 = FUNC_0(VAR_4->addr + VAR_1);
 VAR_6 = FUNC_0(VAR_4->addr + VAR_1);
 VAR_7 = FUNC_0(VAR_4->addr + VAR_1);

 FUNC_1(VAR_4->input, VAR_5, VAR_6, VAR_7);
 FUNC_2(VAR_4->input);
 return VAR_0;
}

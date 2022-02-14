
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altr_i2c_dev {int isr_status; int isr_mask; scalar_t__ base; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_3, void *VAR_4)
{
 struct altr_i2c_dev *VAR_5 = VAR_4;
 irqreturn_t VAR_6 = VAR_1;


 VAR_5->isr_status = FUNC_0(VAR_5->base + VAR_0) & VAR_5->isr_mask;
 if (VAR_5->isr_status)
  VAR_6 = VAR_2;

 return VAR_6;
}

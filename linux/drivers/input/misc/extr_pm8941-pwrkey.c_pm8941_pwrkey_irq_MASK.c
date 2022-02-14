
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pm8941_pwrkey {int input; TYPE_1__* data; int code; scalar_t__ baseaddr; int regmap; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {unsigned int status_bit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct pm8941_pwrkey *VAR_4 = VAR_3;
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4->regmap,
       VAR_4->baseaddr + VAR_1, &VAR_5);
 if (VAR_6)
  return VAR_0;

 FUNC_0(VAR_4->input, VAR_4->code,
    VAR_5 & VAR_4->data->status_bit);
 FUNC_1(VAR_4->input);

 return VAR_0;
}

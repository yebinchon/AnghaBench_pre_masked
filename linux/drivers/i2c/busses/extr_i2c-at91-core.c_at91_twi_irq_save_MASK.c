
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at91_twi_dev {int imr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct at91_twi_dev*) ;
 int FUNC_1 (struct at91_twi_dev*,int ) ;

void FUNC_2(struct at91_twi_dev *VAR_2)
{
 VAR_2->imr = FUNC_1(VAR_2, VAR_0) & VAR_1;
 FUNC_0(VAR_2);
}

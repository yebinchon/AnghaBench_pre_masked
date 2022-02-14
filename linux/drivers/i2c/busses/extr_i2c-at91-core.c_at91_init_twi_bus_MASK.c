
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at91_twi_dev {scalar_t__ slave_detected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct at91_twi_dev*) ;
 int FUNC_1 (struct at91_twi_dev*) ;
 int FUNC_2 (struct at91_twi_dev*) ;
 int FUNC_3 (struct at91_twi_dev*,int ,int ) ;

void FUNC_4(struct at91_twi_dev *VAR_2)
{
 FUNC_0(VAR_2);
 FUNC_3(VAR_2, VAR_0, VAR_1);
 if (VAR_2->slave_detected)
  FUNC_2(VAR_2);
 else
  FUNC_1(VAR_2);
}

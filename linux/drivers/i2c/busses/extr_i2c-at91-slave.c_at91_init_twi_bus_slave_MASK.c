
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at91_twi_dev {scalar_t__ smr; scalar_t__ slave_detected; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct at91_twi_dev*,int ,scalar_t__) ;

void FUNC_1(struct at91_twi_dev *VAR_4)
{
 FUNC_0(VAR_4, VAR_0, VAR_1);
 if (VAR_4->slave_detected && VAR_4->smr) {
  FUNC_0(VAR_4, VAR_2, VAR_4->smr);
  FUNC_0(VAR_4, VAR_0, VAR_3);
 }
}

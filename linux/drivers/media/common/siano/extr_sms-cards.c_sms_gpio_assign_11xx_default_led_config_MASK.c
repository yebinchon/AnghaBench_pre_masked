
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_config_gpio {int pullupdown; int outputslewrate; int outputdriving; int inputcharacteristics; int direction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_0(
  struct smscore_config_gpio *VAR_5) {
 VAR_5->direction = VAR_0;
 VAR_5->inputcharacteristics =
  VAR_1;
 VAR_5->outputdriving = VAR_2;
 VAR_5->outputslewrate = VAR_3;
 VAR_5->pullupdown = VAR_4;
}

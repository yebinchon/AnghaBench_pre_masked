
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sig_handler_t ;




 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;

sig_handler_t FUNC_1(int VAR_2, sig_handler_t VAR_3)
{
 sig_handler_t VAR_4;

 switch (VAR_2) {
 case 129:
  VAR_4 = VAR_1;
  VAR_1 = VAR_3;
  break;

 case 128:
  VAR_4 = VAR_0;
  VAR_0 = VAR_3;
  break;

 default:
  return FUNC_0(VAR_2, VAR_3);
 }

 return VAR_4;
}

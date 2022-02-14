
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AT91PS_USART ;


 int FUNC_0 (int ,char) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

int FUNC_2(int VAR_1)
{
 if (VAR_1 == '\n')
  FUNC_2('\r');
 while (!FUNC_1((AT91PS_USART)VAR_0));
 FUNC_0((AT91PS_USART)VAR_0, (char)VAR_1);
 return VAR_1;
}

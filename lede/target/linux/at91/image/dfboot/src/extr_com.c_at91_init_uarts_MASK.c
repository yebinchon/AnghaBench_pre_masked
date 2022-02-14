
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AT91PS_USART ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__* VAR_5 ;

void FUNC_8(void)
{
 int VAR_6;

 VAR_3 = 0;
 FUNC_0();
 FUNC_1();
 FUNC_2();

 for(VAR_6=0; VAR_6<VAR_2; VAR_6++) {
  VAR_4 = VAR_5[VAR_6];
  FUNC_6((AT91PS_USART)VAR_4);
  FUNC_7((AT91PS_USART)VAR_4);


  FUNC_3(
   (AT91PS_USART)VAR_4,
   VAR_0,
   VAR_1,
   115200,
   0
   );


  FUNC_5((AT91PS_USART)VAR_4);

  FUNC_4((AT91PS_USART)VAR_4);
 }
 VAR_4 = VAR_5[0];
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AT91PS_MciDevice ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,unsigned int*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_2 (unsigned int) ;

int FUNC_3(
 AT91PS_MciDevice VAR_3,
 int VAR_4,
 unsigned int *VAR_5,
 int VAR_6)
{
 int VAR_7;
 unsigned char *VAR_8 = (unsigned char *)VAR_5;


 for(VAR_7=0;VAR_7<VAR_1;VAR_7++)
  *VAR_8++ = 0x00;
 FUNC_1(&VAR_2,VAR_4,VAR_5,VAR_6);


 FUNC_0(VAR_0);

 {
  int VAR_9;
  unsigned int *VAR_10 = VAR_5;

  for(VAR_9 = 0; VAR_9 < 512/4; VAR_9++)
   VAR_10[VAR_9] = FUNC_2(VAR_10[VAR_9]);
 }
 return(1);
}

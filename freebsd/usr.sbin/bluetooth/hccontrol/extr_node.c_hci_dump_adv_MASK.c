
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(uint8_t *VAR_0, int VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;

 while(VAR_1>0){
  VAR_2 = *VAR_0;
  VAR_0++;
  VAR_1 --;
  VAR_2--;
  if(VAR_1<=0)
   break;
  VAR_3 = *VAR_0;
  VAR_0++;
  VAR_1 --;
  VAR_2--;
  if(VAR_1<=0)
   break;
  switch(VAR_3){
  case 0x1:
   FUNC_1("NDflag:%x\n", *VAR_0);
   break;
  case 0x9:
   FUNC_1("LocalName:");
   for(VAR_4 = 0; VAR_4 < FUNC_0(VAR_1,VAR_2); VAR_4++){
    FUNC_2(VAR_0[VAR_4]);
   }
   FUNC_1("\n");
   break;
  default:
   FUNC_1("Type%d:", VAR_3);
   for(VAR_4=0; VAR_4 < FUNC_0(VAR_1,VAR_2); VAR_4++){
    FUNC_1("%02x ",VAR_0[VAR_4]);
   }
   FUNC_1("\n");
   break;
  }
  VAR_0 += VAR_2;
  VAR_1 -= VAR_2;
 }
 return 0;
}

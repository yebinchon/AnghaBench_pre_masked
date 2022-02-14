
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int qboolean ;







 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static qboolean FUNC_1(uint8_t *VAR_2,
  uint32_t VAR_3,
  uint32_t VAR_4,
  uint32_t VAR_5)
{
 uint8_t *VAR_6;
 uint8_t VAR_7;
 uint8_t *VAR_8, *VAR_9, *VAR_10;
 uint32_t VAR_11, VAR_12, VAR_13;





 uint8_t VAR_14[8] = {0, 0, 0, 0, 0, 0, 0, 0};





 if(!(VAR_2 && VAR_5))
 {
  return(VAR_0);
 }





 if((!VAR_3) || (!VAR_4))
 {
  return(VAR_1);
 }





 VAR_6 = VAR_2;
 for(VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
 {




  VAR_7 = *VAR_6;
  VAR_6++;





  VAR_8 = VAR_14;







  if(VAR_12 > 0)
  {
   VAR_9 = VAR_6 - (VAR_4 + 1);
  }
  else
  {
   VAR_9 = VAR_14;
  }





  VAR_10 = VAR_14;





  for(VAR_11 = 0; VAR_11 < (VAR_4 / VAR_5); VAR_11++)
  {




   for(VAR_13 = 0; VAR_13 < VAR_5; VAR_13++)
   {
    switch(VAR_7)
    {
     case 131 :
     {




      break;
     }

     case 129 :
     {
      VAR_6[VAR_13] += VAR_8[VAR_13];

      break;
     }

     case 128 :
     {
      VAR_6[VAR_13] += VAR_9[VAR_13];

      break;
     }

     case 132 :
     {
      VAR_6[VAR_13] += ((uint8_t) ((((uint16_t) VAR_8[VAR_13]) + ((uint16_t) VAR_9[VAR_13])) / 2));

      break;
     }

     case 130 :
     {
      VAR_6[VAR_13] += FUNC_0(VAR_8[VAR_13], VAR_9[VAR_13], VAR_10[VAR_13]);

      break;
     }

     default :
     {
      return(VAR_0);
     }
    }
   }

   VAR_8 = VAR_6;





   if(VAR_12 > 0)
   {
    VAR_10 = VAR_6 - (VAR_4 + 1);
   }





   VAR_6 += VAR_5;





   if(VAR_12 > 0)
   {
    VAR_9 = VAR_6 - (VAR_4 + 1);
   }
  }
 }

 return(VAR_1);
}

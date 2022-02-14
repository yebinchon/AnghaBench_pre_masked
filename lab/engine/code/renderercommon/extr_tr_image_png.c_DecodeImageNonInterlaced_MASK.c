
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct PNG_Chunk_IHDR {int ColourType; int BitDepth; int Height; int Width; } ;
typedef int qboolean ;
typedef int byte ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct PNG_Chunk_IHDR*,int *,int*,int ,int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int*,int,int,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static qboolean FUNC_3(struct PNG_Chunk_IHDR *VAR_8,
  byte *VAR_9,
  uint8_t *VAR_10,
  uint32_t VAR_11,
  qboolean VAR_12,
  uint8_t *VAR_13,
  uint8_t *VAR_14)
{
 uint32_t VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17, VAR_18, VAR_19;
 uint32_t VAR_20, VAR_21, VAR_22;
 byte *VAR_23;
 uint8_t *VAR_24;





 if(!(VAR_8 && VAR_9 && VAR_10 && VAR_11 && VAR_13 && VAR_14))
 {
  return(VAR_6);
 }





 VAR_15 = FUNC_0(VAR_8->Width);
 VAR_16 = FUNC_0(VAR_8->Height);





 switch(VAR_8->ColourType)
 {
  case 132 :
  {
   switch(VAR_8->BitDepth)
   {
    case 137 :
    case 135 :
    case 134 :
    {
     VAR_18 = 1;
     VAR_19 = 8 / VAR_8->BitDepth;

     break;
    }

    case 133 :
    case 136 :
    {
     VAR_18 = (VAR_8->BitDepth / 8) * VAR_0;
     VAR_19 = 1;

     break;
    }

    default :
    {
     return(VAR_6);
    }
   }

   break;
  }

  case 129 :
  {
   switch(VAR_8->BitDepth)
   {
    case 133 :
    case 136 :
    {
     VAR_18 = (VAR_8->BitDepth / 8) * VAR_3;
     VAR_19 = 1;

     break;
    }

    default :
    {
     return(VAR_6);
    }
   }

   break;
  }

  case 130 :
  {
   switch(VAR_8->BitDepth)
   {
    case 137 :
    case 135 :
    case 134 :
    {
     VAR_18 = 1;
     VAR_19 = 8 / VAR_8->BitDepth;

     break;
    }

    case 133 :
    {
     VAR_18 = VAR_2;
     VAR_19 = 1;

     break;
    }

    default :
    {
     return(VAR_6);
    }
   }

   break;
  }

  case 131 :
  {
   switch(VAR_8->BitDepth)
   {
    case 133 :
    case 136 :
    {
     VAR_18 = (VAR_8->BitDepth / 8) * VAR_1;
     VAR_19 = 1;

     break;
    }

    default :
    {
     return(VAR_6);
    }
   }

   break;
  }

  case 128 :
  {
   switch(VAR_8->BitDepth)
   {
    case 133 :
    case 136 :
    {
     VAR_18 = (VAR_8->BitDepth / 8) * VAR_4;
     VAR_19 = 1;

     break;
    }

    default :
    {
     return(VAR_6);
    }
   }

   break;
  }

  default :
  {
   return(VAR_6);
  }
 }





 VAR_17 = (VAR_15 * VAR_18 + (VAR_19 - 1)) / VAR_19;





 if(!(VAR_11 == ((VAR_17 + 1) * VAR_16)))
 {
  return(VAR_6);
 }





 if(!FUNC_2(VAR_10, VAR_16, VAR_17, VAR_18))
 {
  return(VAR_6);
 }





 VAR_23 = VAR_9;
 VAR_24 = VAR_10;





 for(VAR_21 = 0; VAR_21 < VAR_16; VAR_21++)
 {




  uint32_t VAR_25;





  VAR_24++;





  VAR_25 = 0;

  for(VAR_20 = 0; VAR_20 < (VAR_17 / VAR_18); VAR_20++)
  {
   if(VAR_19 > 1)
   {
    uint8_t VAR_26;
    uint32_t VAR_27;
    uint8_t VAR_28;

    for(VAR_22 = 0; VAR_22 < VAR_19; VAR_22++)
    {
     if(VAR_25 < VAR_15)
     {
      VAR_26 = (1 << VAR_8->BitDepth) - 1;
      VAR_27 = (VAR_19 - 1 - VAR_22) * VAR_8->BitDepth;

      VAR_28 = ((VAR_24[0] & (VAR_26 << VAR_27)) >> VAR_27);

      if(!FUNC_1(VAR_8, VAR_23, &VAR_28, VAR_12, VAR_13, VAR_14))
      {
       return(VAR_6);
      }

      VAR_23 += VAR_5;
      VAR_25++;
     }
    }

   }
   else
   {
    if(!FUNC_1(VAR_8, VAR_23, VAR_24, VAR_12, VAR_13, VAR_14))
    {
     return(VAR_6);
    }


    VAR_23 += VAR_5;
   }

   VAR_24 += VAR_18;
  }
 }

 return(VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct PNG_Chunk_IHDR {int ColourType; int BitDepth; } ;
typedef int qboolean ;
typedef int byte ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static qboolean FUNC_0(struct PNG_Chunk_IHDR *VAR_3,
  byte *VAR_4,
  uint8_t *VAR_5,
  qboolean VAR_6,
  uint8_t *VAR_7,
  uint8_t *VAR_8)
{




 if(!(VAR_3 && VAR_4 && VAR_5 && VAR_7 && VAR_8))
 {
  return(VAR_1);
 }

 switch(VAR_3->ColourType)
 {
  case 132 :
  {
   switch(VAR_3->BitDepth)
   {
    case 137 :
    case 135 :
    case 134 :
    {
     uint8_t VAR_9;
     uint8_t VAR_10;

     VAR_9 = 0xFF / ((1 << VAR_3->BitDepth) - 1);

     VAR_10 = VAR_5[0] * VAR_9;

     VAR_4[0] = VAR_10;
     VAR_4[1] = VAR_10;
     VAR_4[2] = VAR_10;
     VAR_4[3] = 0xFF;





     if(VAR_6)
     {
      if(VAR_7[1] == VAR_5[0])
      {
       VAR_4[3] = 0x00;
      }
     }


     break;
    }

    case 133 :
    case 136 :
    {
     VAR_4[0] = VAR_5[0];
     VAR_4[1] = VAR_5[0];
     VAR_4[2] = VAR_5[0];
     VAR_4[3] = 0xFF;





     if(VAR_6)
     {
      if(VAR_3->BitDepth == 133)
      {
       if(VAR_7[1] == VAR_5[0])
       {
        VAR_4[3] = 0x00;
       }
      }
      else
      {
       if((VAR_7[0] == VAR_5[0]) && (VAR_7[1] == VAR_5[1]))
       {
        VAR_4[3] = 0x00;
       }
      }
     }

     break;
    }

    default :
    {
     return(VAR_1);
    }
   }

   break;
  }

  case 129 :
  {
   switch(VAR_3->BitDepth)
   {
    case 133 :
    {
     VAR_4[0] = VAR_5[0];
     VAR_4[1] = VAR_5[1];
     VAR_4[2] = VAR_5[2];
     VAR_4[3] = 0xFF;





     if(VAR_6)
     {
      if((VAR_7[1] == VAR_5[0]) &&
        (VAR_7[3] == VAR_5[1]) &&
        (VAR_7[5] == VAR_5[2]))
      {
       VAR_4[3] = 0x00;
      }
     }

     break;
    }

    case 136 :
    {




     VAR_4[0] = VAR_5[0];
     VAR_4[1] = VAR_5[2];
     VAR_4[2] = VAR_5[4];
     VAR_4[3] = 0xFF;





     if(VAR_6)
     {
      if((VAR_7[0] == VAR_5[0]) && (VAR_7[1] == VAR_5[1]) &&
        (VAR_7[2] == VAR_5[2]) && (VAR_7[3] == VAR_5[3]) &&
        (VAR_7[4] == VAR_5[4]) && (VAR_7[5] == VAR_5[5]))
      {
       VAR_4[3] = 0x00;
      }
     }

     break;
    }

    default :
    {
     return(VAR_1);
    }
   }

   break;
  }

  case 130 :
  {
   VAR_4[0] = VAR_8[VAR_5[0] * VAR_0 + 0];
   VAR_4[1] = VAR_8[VAR_5[0] * VAR_0 + 1];
   VAR_4[2] = VAR_8[VAR_5[0] * VAR_0 + 2];
   VAR_4[3] = VAR_8[VAR_5[0] * VAR_0 + 3];

   break;
  }

  case 131 :
  {
   switch(VAR_3->BitDepth)
   {
    case 133 :
    {
     VAR_4[0] = VAR_5[0];
     VAR_4[1] = VAR_5[0];
     VAR_4[2] = VAR_5[0];
     VAR_4[3] = VAR_5[1];

     break;
    }

    case 136 :
    {




     VAR_4[0] = VAR_5[0];
     VAR_4[1] = VAR_5[0];
     VAR_4[2] = VAR_5[0];
     VAR_4[3] = VAR_5[2];

     break;
    }

    default :
    {
     return(VAR_1);
    }
   }

   break;
  }

  case 128 :
  {
   switch(VAR_3->BitDepth)
   {
    case 133 :
    {
     VAR_4[0] = VAR_5[0];
     VAR_4[1] = VAR_5[1];
     VAR_4[2] = VAR_5[2];
     VAR_4[3] = VAR_5[3];

     break;
    }

    case 136 :
    {




     VAR_4[0] = VAR_5[0];
     VAR_4[1] = VAR_5[2];
     VAR_4[2] = VAR_5[4];
     VAR_4[3] = VAR_5[6];

     break;
    }

    default :
    {
     return(VAR_1);
    }
   }

   break;
  }

  default :
  {
   return(VAR_1);
  }
 }

 return(VAR_2);
}

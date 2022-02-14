
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct PNG_ChunkHeader {int Type; int Length; } ;
struct BufferedFile {int dummy; } ;
typedef scalar_t__ qboolean ;


 scalar_t__ FUNC_0 (int ) ;
 struct PNG_ChunkHeader* FUNC_1 (struct BufferedFile*,int ) ;
 int FUNC_2 (struct BufferedFile*,int ) ;
 int FUNC_3 (struct BufferedFile*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static qboolean FUNC_4(struct BufferedFile *VAR_4, uint32_t VAR_5)
{
 struct PNG_ChunkHeader *VAR_6;

 uint32_t VAR_7;
 uint32_t VAR_8;





 if(!VAR_4)
 {
  return(VAR_2);
 }





 while(VAR_3)
 {




  VAR_6 = FUNC_1(VAR_4, VAR_1);
  if(!VAR_6)
  {
   return(VAR_2);
  }






  VAR_7 = FUNC_0(VAR_6->Length);
  VAR_8 = FUNC_0(VAR_6->Type);





  if(VAR_8 == VAR_5)
  {




   FUNC_2(VAR_4, VAR_1);

   break;
  }
  else
  {




   if(VAR_7)
   {
    if(!FUNC_3(VAR_4, VAR_7 + VAR_0))
    {
     return(VAR_2);
    }
   }
  }
 }

 return(VAR_3);
}

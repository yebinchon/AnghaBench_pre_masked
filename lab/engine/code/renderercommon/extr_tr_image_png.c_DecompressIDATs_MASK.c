
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct PNG_ChunkHeader {int Type; int Length; } ;
struct BufferedFile {int dummy; } ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {int (* Free ) (int *) ;int * (* Malloc ) (int) ;} ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (struct BufferedFile*,int) ;
 int FUNC_2 (struct BufferedFile*,int) ;
 int FUNC_3 (struct BufferedFile*,scalar_t__) ;
 int FUNC_4 (struct BufferedFile*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,int *,int) ;
 scalar_t__ FUNC_6 (int *,int*,int *,int*) ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int * FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static uint32_t FUNC_16(struct BufferedFile *VAR_7, uint8_t **VAR_8)
{
 uint8_t *VAR_9;
 uint32_t VAR_10;

 uint8_t *VAR_11;
 uint8_t *VAR_12;
 uint32_t VAR_13;

 struct PNG_ChunkHeader *VAR_14;

 uint32_t VAR_15;
 uint32_t VAR_16;

 int VAR_17;

 int32_t VAR_18;
 uint8_t *VAR_19;
 uint32_t VAR_20;
 uint8_t *VAR_21;
 uint32_t VAR_22;





 if(!(VAR_7 && VAR_8))
 {
  return(-1);
 }





 VAR_9 = ((void*)0);
 *VAR_8 = VAR_9;

 VAR_11 = ((void*)0);
 VAR_13 = 0;

 VAR_17 = 0;





 if(!FUNC_4(VAR_7, VAR_2))
 {
  return(-1);
 }





 while(VAR_5)
 {




  VAR_14 = FUNC_1(VAR_7, VAR_1);
  if(!VAR_14)
  {





   FUNC_2(VAR_7, VAR_17);

   return(-1);
  }





  VAR_15 = FUNC_0(VAR_14->Length);
  VAR_16 = FUNC_0(VAR_14->Type);





  if(!(VAR_16 == VAR_2))
  {
   FUNC_2(VAR_7, VAR_1);

   break;
  }





  VAR_17 += VAR_1;





  if(VAR_15)
  {
   if(!FUNC_3(VAR_7, VAR_15 + VAR_0))
   {
    FUNC_2(VAR_7, VAR_17);

    return(-1);
   }

   VAR_17 += VAR_15 + VAR_0;
   VAR_13 += VAR_15;
  }
 }

 FUNC_2(VAR_7, VAR_17);

 VAR_11 = VAR_6.Malloc(VAR_13);
 if(!VAR_11)
 {
  return(-1);
 }

 VAR_12 = VAR_11;





 while(VAR_5)
 {




  VAR_14 = FUNC_1(VAR_7, VAR_1);
  if(!VAR_14)
  {
   VAR_6.Free(VAR_11);

   return(-1);
  }





  VAR_15 = FUNC_0(VAR_14->Length);
  VAR_16 = FUNC_0(VAR_14->Type);





  if(!(VAR_16 == VAR_2))
  {
   FUNC_2(VAR_7, VAR_1);

   break;
  }





  if(VAR_15)
  {
   uint8_t *VAR_23;

   VAR_23 = FUNC_1(VAR_7, VAR_15);
   if(!VAR_23)
   {
    VAR_6.Free(VAR_11);

    return(-1);
   }

   if(!FUNC_3(VAR_7, VAR_0))
   {
    VAR_6.Free(VAR_11);

    return(-1);
   }

   FUNC_5(VAR_12, VAR_23, VAR_15);
   VAR_12 += VAR_15;
  }
 }





 VAR_19 = ((void*)0);
 VAR_20 = 0;





 VAR_21 = VAR_11 + VAR_4;
 VAR_22 = VAR_13 - VAR_4 - VAR_3;





 VAR_18 = FUNC_6(VAR_19, &VAR_20, VAR_21, &VAR_22);
 if(!((VAR_18 == 0) && (VAR_20 > 0)))
 {
  VAR_6.Free(VAR_11);

  return(-1);
 }





 VAR_9 = VAR_6.Malloc(VAR_20);
 if(!VAR_9)
 {
  VAR_6.Free(VAR_11);

  return(-1);
 }





 VAR_19 = VAR_9;
 VAR_21 = VAR_11 + VAR_4;
 VAR_22 = VAR_13 - VAR_4 - VAR_3;





 VAR_18 = FUNC_6(VAR_19, &VAR_20, VAR_21, &VAR_22);





 VAR_6.Free(VAR_11);





 if(!((VAR_18 == 0) && (VAR_20 > 0)))
 {
  VAR_6.Free(VAR_9);

  return(-1);
 }





 VAR_10 = VAR_20;
 *VAR_8 = VAR_9;

 return(VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef size_t u32 ;
typedef int u16 ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int *,size_t*) ;

__attribute__((used)) static u32
FUNC_4(u64 VAR_6, u16 VAR_7, u8 *VAR_8, u8 VAR_9)
{
 u64 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13 = 0;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u8 VAR_17;

 FUNC_0();

 switch (VAR_7) {
 case 10:



  switch (VAR_9) {
  case 1:

   VAR_15 = VAR_3;
   break;

  case 4:

   VAR_15 = VAR_1;
   break;

  case 8:
  default:

   VAR_15 = VAR_2;
   break;
  }

  VAR_17 = VAR_5;
  VAR_16 = 0;

  for (VAR_11 = VAR_15; VAR_11 > 0; VAR_11--) {



   VAR_10 = VAR_6;
   for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
    (void)FUNC_3(VAR_10, 10, &VAR_10,
          &VAR_16);
   }



   if (VAR_16 != 0) {
    VAR_17 = VAR_4;
   }

   if (!VAR_17) {
    VAR_8[VAR_13] = (u8) (VAR_0 + VAR_16);
    VAR_13++;
   }
  }
  break;

 case 16:



  VAR_14 = (VAR_9 * 2);
  for (VAR_11 = 0, VAR_12 = (VAR_14 - 1); VAR_11 < VAR_14; VAR_11++, VAR_12--) {



   VAR_8[VAR_13] = (u8)
       FUNC_2(VAR_6, FUNC_1(VAR_12));
   VAR_13++;
  }
  break;

 default:
  return (0);
 }







 if (!VAR_13) {
  VAR_8[0] = VAR_0;
  VAR_13 = 1;
 }

 VAR_8[VAR_13] = 0;
 return ((u32) VAR_13);
}

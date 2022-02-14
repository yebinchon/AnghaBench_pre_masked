
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;


 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (size_t*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (char,size_t) ;
 int VAR_7 ;

void FUNC_6(char *VAR_8)
{
 u32 VAR_9;
 u8 VAR_10 = VAR_4;
 u32 VAR_11;

 FUNC_3(VAR_7);





 if (FUNC_0(VAR_8, VAR_2)) {
  return;
 }

 FUNC_1(&VAR_11, VAR_8);



 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if (FUNC_5(VAR_8[VAR_9], VAR_9)) {
   continue;
  }






  VAR_8[VAR_9] = '*';
  VAR_10 = VAR_5;
 }

 if (VAR_10) {



  if (!VAR_6) {
   FUNC_4((VAR_3,
          "Invalid character(s) in name (0x%.8X), repaired: [%4.4s]",
          VAR_11, VAR_8));
  } else {
   FUNC_2((VAR_0,
       "Invalid character(s) in name (0x%.8X), repaired: [%4.4s]",
       VAR_11, VAR_8));
  }
 }
}

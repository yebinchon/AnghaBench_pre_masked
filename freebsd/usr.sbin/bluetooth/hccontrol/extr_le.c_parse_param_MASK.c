
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 char FUNC_0 (int ) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 (char*,int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,int *,int) ;

__attribute__((used)) static int
FUNC_6(int VAR_4, char *VAR_5[], char *VAR_6, int *VAR_7)
{
 char *VAR_8 = VAR_6 + (*VAR_7);
 char *VAR_9 = VAR_6;
 char *VAR_10,*VAR_11;
 int VAR_12;
 int VAR_13;
 uint16_t VAR_14;
 VAR_3 = 1;
 VAR_2 = 0;
 while ((VAR_12 = FUNC_1(VAR_4, VAR_5 , "n:f:u:")) != -1) {
  switch(VAR_12){
  case 'n':
   VAR_13 = FUNC_3(VAR_1);
   if ((VAR_9 + VAR_13 + 2) >= VAR_8)
    goto done;
   VAR_9[0] = VAR_13 + 1;
   VAR_9[1] = 8;
   VAR_9 += 2;
   FUNC_2(VAR_9, VAR_1, VAR_13);
   VAR_9 += VAR_13;
   break;
  case 'f':
   if (VAR_9+3 > VAR_8)
    goto done;
   VAR_9[0] = 2;
   VAR_9[1] = 1;
   VAR_9[2] = FUNC_0(VAR_1);
   VAR_9 += 3;
   break;
  case 'u':
   VAR_11 = VAR_6;
   if ((VAR_6+2) >= VAR_8)
    goto done;
   VAR_9[1] = 2;
   *VAR_11 = 1;
   VAR_9 += 2;
   while ((VAR_10 = FUNC_4(&VAR_1, ",")) != ((void*)0)) {
    VAR_14 = FUNC_5(VAR_10, ((void*)0), 16);
    if ((VAR_9+2) >= VAR_8)
     break;
    VAR_9[0] = VAR_14 &0xff;
    VAR_9[1] = (VAR_14>>8)&0xff;
    VAR_9 += 2;
   }

  }
 }
done:
 *VAR_7 = VAR_9 - VAR_6;

 return VAR_0;
}

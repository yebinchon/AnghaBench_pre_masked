
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iconv_t ;
typedef scalar_t__ iconv_ibp ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (int ,scalar_t__*,size_t*,char**,size_t*) ;
 size_t FUNC_2 (size_t,int) ;
 size_t FUNC_3 (size_t,int ,int) ;
 int FUNC_4 (size_t,int) ;
 char* FUNC_5 (size_t) ;
 char* FUNC_6 (char*,size_t) ;

char *FUNC_7(const char *VAR_2, size_t VAR_3, iconv_t VAR_4,
       size_t VAR_5, size_t *VAR_6)
{
 size_t VAR_7, VAR_8;
 char *VAR_9, *VAR_10;
 iconv_ibp VAR_11;

 VAR_7 = VAR_3;
 VAR_8 = FUNC_2(VAR_7, 1 + VAR_5);
 VAR_9 = FUNC_5(VAR_8);
 VAR_10 = VAR_9 + VAR_5;
 VAR_11 = (iconv_ibp)VAR_2;

 while (1) {
  size_t VAR_12 = FUNC_1(VAR_4, &VAR_11, &VAR_3, &VAR_10, &VAR_7);

  if (VAR_12 == (size_t) -1) {
   size_t VAR_13;
   if (VAR_1 != VAR_0) {
    FUNC_0(VAR_9);
    return ((void*)0);
   }





   VAR_13 = VAR_10 - VAR_9;
   VAR_8 = FUNC_3(VAR_13, FUNC_4(VAR_3, 2), 32);
   VAR_9 = FUNC_6(VAR_9, VAR_8);
   VAR_10 = VAR_9 + VAR_13;
   VAR_7 = VAR_8 - VAR_13 - 1;
  }
  else {
   *VAR_10 = '\0';
   if (VAR_6)
    *VAR_6 = VAR_10 - VAR_9;
   break;
  }
 }
 return VAR_9;
}

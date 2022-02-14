
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int nl_item ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (size_t) ;
 unsigned char** VAR_13 ;
 scalar_t__ VAR_14 ;
 size_t FUNC_1 (int*,char*,size_t) ;
 scalar_t__ FUNC_2 (int const) ;
 int FUNC_3 (char*,int,unsigned char*) ;
 int FUNC_4 (int*) ;
 void* FUNC_5 (int) ;
 unsigned char* FUNC_6 (unsigned char*) ;
 size_t FUNC_7 (unsigned char*) ;
 unsigned char FUNC_8 (unsigned char) ;
 int FUNC_9 (int) ;
 int** VAR_15 ;

void
FUNC_10(void)
{
 const nl_item VAR_16[12] = { VAR_0, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_1,
     VAR_2, VAR_3 };
 unsigned char *VAR_17;
 size_t VAR_18;

 if (VAR_12 == 1) {
  if (VAR_13 == ((void*)0)) {
   unsigned char *VAR_19;

   VAR_13 = FUNC_5(sizeof(unsigned char*) * 12);
   for (int VAR_20 = 0; VAR_20 < 12; VAR_20++) {
    VAR_13[VAR_20] = ((void*)0);
    VAR_17 = (unsigned char *) FUNC_2(VAR_16[VAR_20]);
    if (VAR_14)
     FUNC_3("month[%d]=%s\n", VAR_20, VAR_17);
    if (*VAR_17 == '\0')
     continue;
    VAR_19 = FUNC_6(VAR_17);
    VAR_18 = FUNC_7(VAR_17);
    for (unsigned int VAR_21 = 0; VAR_21 < VAR_18; VAR_21++)
     VAR_19[VAR_21] = FUNC_8(VAR_19[VAR_21]);
    VAR_13[VAR_20] = VAR_19;
   }
  }

 } else {
  if (VAR_15 == ((void*)0)) {
   wchar_t *VAR_22;

   VAR_15 = FUNC_5(sizeof(wchar_t *) * 12);
   for (int VAR_23 = 0; VAR_23 < 12; VAR_23++) {
    VAR_15[VAR_23] = ((void*)0);
    VAR_17 = (unsigned char *) FUNC_2(VAR_16[VAR_23]);
    if (VAR_14)
     FUNC_3("month[%d]=%s\n", VAR_23, VAR_17);
    if (*VAR_17 == '\0')
     continue;
    VAR_18 = FUNC_7(VAR_17);
    VAR_22 = FUNC_5(FUNC_0(VAR_18 + 1));
    if (FUNC_1(VAR_22, (char*)VAR_17, VAR_18) ==
        ((size_t) - 1)) {
     FUNC_4(VAR_22);
     continue;
    }
    VAR_22[VAR_18] = L'\0';
    for (unsigned int VAR_24 = 0; VAR_24 < VAR_18; VAR_24++)
     VAR_22[VAR_24] = FUNC_9(VAR_22[VAR_24]);
    VAR_15[VAR_23] = VAR_22;
   }
  }
 }
}

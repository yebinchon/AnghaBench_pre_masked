
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iconv_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (int ,char**,size_t*,char**,size_t*,int ,size_t*) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 (char*,int,int,int ) ;
 size_t FUNC_7 (int ,int *,int *,char**,size_t*) ;
 int FUNC_8 (int ,int ,void*) ;
 int FUNC_9 (char*,char*,size_t) ;
 int VAR_7 ;
 int FUNC_10 (char*,unsigned long long) ;

__attribute__((used)) static int
FUNC_11(FILE *VAR_8, iconv_t VAR_9, bool VAR_10, bool VAR_11)
{
 char VAR_12[VAR_4], VAR_13[VAR_5], *VAR_14, *VAR_15;
 unsigned long long VAR_16;
 size_t VAR_17, VAR_18, VAR_19;

 int VAR_20 = (int)VAR_11;
 if (FUNC_8(VAR_9, VAR_3, (void *)&VAR_20) == -1)
  FUNC_1(VAR_2, "iconvctl(DISCARD_ILSEQ, %d)", VAR_20);

 VAR_16 = 0;
 while ((VAR_17 = FUNC_5(VAR_12, 1, VAR_4, VAR_8)) > 0) {
  VAR_14 = VAR_12;
  while (VAR_17 > 0) {
   size_t VAR_21;

   VAR_15 = VAR_13;
   VAR_18 = VAR_5;
   VAR_19 = FUNC_0(VAR_9, &VAR_14, &VAR_17, &VAR_15, &VAR_18,
       0, &VAR_21);
   VAR_16 += VAR_21;
   if (VAR_18 < VAR_5)
    (void)FUNC_6(VAR_13, 1, VAR_5 - VAR_18,
        VAR_7);
   if (VAR_19 == (size_t)-1 && VAR_6 != VAR_0) {
    if (VAR_6 != VAR_1 || VAR_14 == VAR_12)
     FUNC_1(VAR_2, "iconv()");


    (void)FUNC_9(VAR_12, VAR_14, VAR_17);
    VAR_19 = FUNC_5(VAR_12 + VAR_17, 1,
        VAR_4 - VAR_17, VAR_8);
    if (VAR_19 == 0) {
     FUNC_4(VAR_7);
     if (FUNC_3(VAR_8))
      FUNC_2(VAR_2,
          "unexpected end of file; "
          "the last character is "
          "incomplete.");
     else
      FUNC_1(VAR_2, "fread()");
    }
    VAR_14 = VAR_12;
    VAR_17 += VAR_19;
   }
  }
 }

 VAR_18 = VAR_5;
 VAR_15 = VAR_13;
 VAR_19 = FUNC_7(VAR_9, ((void*)0), ((void*)0), &VAR_15, &VAR_18);
 if (VAR_19 == (size_t)-1)
  FUNC_1(VAR_2, "iconv()");
 if (VAR_18 < VAR_5)
  (void)FUNC_6(VAR_13, 1, VAR_5 - VAR_18, VAR_7);

 if (VAR_16 > 0 && !VAR_10)
  FUNC_10("warning: invalid characters: %llu", VAR_16);

 return (VAR_16 > 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_store {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char** VAR_1 ;
 scalar_t__ FUNC_2 (struct ref_store*,int ) ;
 int FUNC_3 (char const*,char*,char*) ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct strbuf*,char const*,int,char*) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (char*) ;
 char** FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (char*,size_t,char*,int,char*) ;
 char* FUNC_12 (char const*) ;

char *FUNC_13(struct ref_store *VAR_2,
       const char *VAR_3, int VAR_4)
{
 int VAR_5;
 static char **VAR_6;
 static int VAR_7;
 char *VAR_8;
 struct strbuf VAR_9 = VAR_0;

 if (!VAR_7) {






  size_t VAR_10 = 0;
  size_t VAR_11 = 0;


  for (VAR_7 = 0; VAR_1[VAR_7]; VAR_7++)

   VAR_10 += FUNC_9(VAR_1[VAR_7]) - 2 + 1;

  VAR_6 = FUNC_10(FUNC_4(FUNC_5(sizeof(char *), VAR_7), VAR_10));

  VAR_11 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
   FUNC_0(VAR_11 < VAR_10);
   VAR_6[VAR_5] = (char *)&VAR_6[VAR_7] + VAR_11;
   VAR_11 += FUNC_11(VAR_6[VAR_5], VAR_10 - VAR_11,
         VAR_1[VAR_5], 2, "%s") + 1;
  }
 }


 if (!VAR_7)
  return FUNC_12(VAR_3);


 VAR_8 = FUNC_12(VAR_3);


 for (VAR_5 = VAR_7 - 1; VAR_5 > 0 ; --VAR_5) {
  int VAR_12;
  int VAR_13 = VAR_5;
  int VAR_14;

  if (1 != FUNC_3(VAR_3, VAR_6[VAR_5], VAR_8))
   continue;

  VAR_14 = FUNC_9(VAR_8);





  if (VAR_4)
   VAR_13 = VAR_7;





  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
   const char *VAR_15 = VAR_1[VAR_12];


   if (VAR_5 == VAR_12)
    continue;






   FUNC_8(&VAR_9);
   FUNC_6(&VAR_9, VAR_15,
        VAR_14, VAR_8);
   if (FUNC_2(VAR_2, VAR_9.buf))
    break;
  }





  if (VAR_12 == VAR_13) {
   FUNC_7(&VAR_9);
   return VAR_8;
  }
 }

 FUNC_7(&VAR_9);
 FUNC_1(VAR_8);
 return FUNC_12(VAR_3);
}

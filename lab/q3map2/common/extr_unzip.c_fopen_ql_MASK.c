
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char*,int,int,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (char*,int *) ;
 int VAR_2 ;
 int ** VAR_3 ;

FILE* FUNC_4 (const char* VAR_4, const char* VAR_5) {
    FILE* VAR_6 = ((void*)0);

    if ((VAR_4!=((void*)0)) && (VAR_5 != ((void*)0)))
        VAR_6 = FUNC_0(VAR_4, VAR_5);

 if (VAR_6) {
  int VAR_7;
  char VAR_8[4];
  int VAR_9 = 1;


  FUNC_1(VAR_8, 1, 4, VAR_6);
  if (VAR_8[0] == 'P' && VAR_8[1] == 'K' && VAR_8[2] == '\x03') {
   VAR_9 = 0;
  }
  FUNC_2(VAR_6, 0, VAR_1);
  if (!VAR_9) {

   return VAR_6;
  }
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {


   if (VAR_3[VAR_7] == ((void*)0)) {
    VAR_3[VAR_7] = VAR_6;

    if (VAR_7 > VAR_2) {
     VAR_2 = VAR_7;
    }
    return VAR_6;
    break;
   }
  }
  FUNC_3("error couldn't find a spot for %p\n", VAR_6);
  return ((void*)0);
 }

    return VAR_6;
}

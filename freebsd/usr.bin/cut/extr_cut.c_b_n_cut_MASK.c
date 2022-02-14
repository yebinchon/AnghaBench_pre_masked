
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbstate_t ;
typedef int mbs ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (int *,size_t*) ;
 int FUNC_1 (char*,int,int,int ) ;
 size_t VAR_1 ;
 int FUNC_2 (char*,size_t,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int* VAR_2 ;
 int FUNC_4 (char) ;
 int VAR_3 ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static int
FUNC_6(FILE *VAR_4, const char *VAR_5)
{
 size_t VAR_6, VAR_7, VAR_8;
 char *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 mbstate_t VAR_13;

 FUNC_3(&VAR_13, 0, sizeof(VAR_13));
 VAR_12 = 0;
 while ((VAR_9 = FUNC_0(VAR_4, &VAR_8)) != ((void*)0)) {
  for (VAR_6 = 0; VAR_8 > 0; VAR_6 += VAR_11) {
   if ((VAR_11 = FUNC_2(VAR_9, VAR_8, &VAR_13)) < 0) {
    if (!VAR_12) {
     FUNC_5("%s", VAR_5);
     VAR_12 = 1;
    }
    FUNC_3(&VAR_13, 0, sizeof(VAR_13));
    VAR_11 = 1;
   }
   if (VAR_11 == 0 || *VAR_9 == '\n')
    break;
   if (VAR_6 < VAR_1 && !VAR_2[1 + VAR_6]) {






    VAR_7 = VAR_6;
    while (VAR_7 < VAR_6 + VAR_11 && VAR_7 < VAR_1 &&
        !VAR_2[1 + VAR_7])
     VAR_7++;
    VAR_10 = VAR_7 < VAR_6 + VAR_11;
    for (; VAR_7 < VAR_6 + VAR_11 && VAR_7 < VAR_1; VAR_7++)
     VAR_10 &= VAR_2[1 + VAR_7];
    if (VAR_10)
     FUNC_1(VAR_9, 1, VAR_11, VAR_3);
   } else {




    VAR_10 = 1;
    for (VAR_7 = VAR_6; VAR_7 < VAR_6 + VAR_11; VAR_7++)
     if ((VAR_7 >= VAR_1 && !VAR_0) ||
         (VAR_7 < VAR_1 && !VAR_2[1 + VAR_7])) {
      VAR_10 = 0;
      break;
     }
    if (VAR_10)
     FUNC_1(VAR_9, 1, VAR_11, VAR_3);
   }
   VAR_9 += VAR_11;
   VAR_8 -= VAR_11;
  }
  if (VAR_8 > 0)
   FUNC_4('\n');
 }
 return (VAR_12);
}

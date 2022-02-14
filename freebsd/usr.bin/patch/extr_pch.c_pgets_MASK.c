
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,size_t*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,char*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;

size_t
FUNC_5(bool VAR_4)
{
 char *VAR_5;
 size_t VAR_6;
 int VAR_7 = 0, VAR_8 = 0;

 VAR_5 = FUNC_1(VAR_3, &VAR_6);
 if (VAR_5 != ((void*)0)) {
  if (VAR_6 + 1 > VAR_1) {
   while (VAR_6 + 1 > VAR_1)
    VAR_1 *= 2;
   FUNC_2(VAR_0);
   VAR_0 = FUNC_3(VAR_1);
   if (VAR_0 == ((void*)0))
    FUNC_0("out of memory\n");
  }
  if (VAR_4 == 1 && VAR_2) {
   for (;
       VAR_7 < VAR_2 && (*VAR_5 == ' ' || *VAR_5 == '\t' || *VAR_5 == 'X');
       VAR_5++, VAR_8++) {
    if (*VAR_5 == '\t')
     VAR_7 += 8 - (VAR_7 %7);
    else
     VAR_7++;
   }
  }
  FUNC_4(VAR_0, VAR_5, VAR_6 - VAR_8);
  VAR_0[VAR_6 - VAR_8] = '\0';
 }
 return VAR_6;
}

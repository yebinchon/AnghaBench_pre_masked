
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mmfile_t ;


 char* FUNC_0 (char const*,char,int) ;
 char* FUNC_1 (int *,long*) ;
 long FUNC_2 (int *) ;

long FUNC_3(mmfile_t *VAR_0, long VAR_1) {
 long VAR_2 = 0, VAR_3, VAR_4 = 0;
 char const *VAR_5, *VAR_6, *VAR_7;

 if ((VAR_6 = VAR_5 = FUNC_1(VAR_0, &VAR_3)) != ((void*)0)) {
  for (VAR_7 = VAR_5 + VAR_3; VAR_2 < VAR_1 && VAR_6 < VAR_7; ) {
   VAR_2++;
   if (!(VAR_6 = FUNC_0(VAR_6, '\n', VAR_7 - VAR_6)))
    VAR_6 = VAR_7;
   else
    VAR_6++;
  }
  VAR_4 += (long) (VAR_6 - VAR_5);
 }

 if (VAR_2 && VAR_4)
  VAR_2 = FUNC_2(VAR_0) / (VAR_4 / VAR_2);

 return VAR_2 + 1;
}

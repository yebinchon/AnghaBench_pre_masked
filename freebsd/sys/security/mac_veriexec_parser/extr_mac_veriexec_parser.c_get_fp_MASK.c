
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fp_size; int * fp_type; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (int *) ;
 size_t FUNC_2 (char*,size_t) ;
 char* FUNC_3 (char const*,int *) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2, char **VAR_3, unsigned char **VAR_4, int *VAR_5)
{
 char *VAR_6;
 char *VAR_7;
 char *VAR_8;
 char *VAR_9;
 size_t VAR_10;
 int VAR_11;

 VAR_6 = ((void*)0);
 VAR_8 = ((void*)0);
 VAR_9 = ((void*)0);

 for (VAR_11 = 0; VAR_1[VAR_11].fp_type != ((void*)0); VAR_11++) {
  VAR_8 = FUNC_3(VAR_2, VAR_1[VAR_11].fp_type);

  while (VAR_8 != ((void*)0)) {
   VAR_9 = VAR_8;
   VAR_8++;
   VAR_8 = FUNC_3(VAR_8, VAR_1[VAR_11].fp_type);
  }
  VAR_8 = VAR_9;
  if (VAR_8 != ((void*)0)) {
   if (VAR_8 == VAR_2 || VAR_8[-1] != ' ')
    return (VAR_0);





   VAR_10 = FUNC_1(VAR_1[VAR_11].fp_type) +
    2 * VAR_1[VAR_11].fp_size;

   if (FUNC_2(VAR_8, VAR_10) < VAR_10)
    return (VAR_0);

   VAR_7 = &VAR_8[FUNC_1(VAR_1[VAR_11].fp_type)];
   VAR_6 = &VAR_7[2 * VAR_1[VAR_11].fp_size];





   if (*VAR_6 != '\n' &&
       *VAR_6 != '\0' &&
       *VAR_6 != ' ')
    return (VAR_0);




   if (*VAR_6 == ' ' && VAR_5 != ((void*)0))
    *VAR_5 = FUNC_0(VAR_6);





   VAR_7[-1] = '\0';
   *VAR_6 = '\0';
   VAR_8[-1] = '\0';
   break;
  }
 }

 if (VAR_8 == ((void*)0))
  return (VAR_0);

 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_8;

 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_7;

 return (0);
}

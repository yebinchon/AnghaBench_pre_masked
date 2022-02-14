
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rbuf ;


 char const* FUNC_0 (int) ;
 char const* FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*,float) ;
 char* FUNC_3 (char*,char const*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_0, int *VAR_1, const char * const *VAR_2)
{
    char *VAR_3;
    int VAR_4;
    const char *VAR_5;
    char VAR_6[6];


    VAR_3 = VAR_0;
    while ((VAR_5 = *VAR_2++) != ((void*)0))
    {

 VAR_4 = *VAR_1++;


 if (VAR_4 > 0)
 {

     if (VAR_5[0] == 'K')
     {

  VAR_3 = FUNC_3(VAR_3, FUNC_0(VAR_4));


  VAR_3 = FUNC_3(VAR_3, VAR_5+1);
     }

     else if (VAR_5[0] == ':')
     {
  (void) FUNC_2(VAR_6, sizeof(VAR_6), "%.2f",
      (float)*(VAR_1 - 2) / (float)VAR_4);
  VAR_3 = FUNC_3(VAR_3, VAR_6);
  VAR_3 = FUNC_3(VAR_3, VAR_5);
     }
     else
     {
  VAR_3 = FUNC_3(VAR_3, FUNC_1(VAR_4));
  VAR_3 = FUNC_3(VAR_3, VAR_5);
     }
 }


 else if (VAR_4 < 0)
 {
     VAR_3 = FUNC_3(VAR_3, VAR_5);
 }
    }


    VAR_3 -= 2;
    if (VAR_3 >= VAR_0 && VAR_3[0] == ',' && VAR_3[1] == ' ')
    {
 *VAR_3 = '\0';
    }
}

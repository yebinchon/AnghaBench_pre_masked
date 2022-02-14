
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (size_t,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static char *
FUNC_5(char *VAR_4, int VAR_5)
{
    size_t VAR_6, VAR_7;
    char *VAR_8;

    VAR_3 = VAR_2;
    if (VAR_3 < VAR_0)
    {
 VAR_3 = VAR_0;
    }

    VAR_6 = VAR_3 + VAR_5 + VAR_1;
    VAR_8 = FUNC_0(VAR_6, sizeof(char));
    if (VAR_8 == ((void*)0))
    {
 FUNC_1(4, "can't allocate sufficient memory");
    }
    if (VAR_4 != ((void*)0))
    {
 VAR_7 = FUNC_4(VAR_4);
 FUNC_3(VAR_8, VAR_4, VAR_7 < VAR_6 - 1 ? VAR_7 : VAR_6 - 1);
 FUNC_2(VAR_4);
    }

    return VAR_8;
}

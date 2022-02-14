
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stub {int (* f ) (int,char**,char**) ;int * name; } ;


 char* VAR_0 ;
 int FUNC_0 () ;
 struct stub* VAR_1 ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int VAR_2 ;
 int FUNC_2 (char*,int *) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (int,char**,char**) ;

int
FUNC_5(int VAR_3, char **VAR_4, char **VAR_5)
{
    char *VAR_6, *VAR_7;
    struct stub *VAR_8;

    if(VAR_4[0] == ((void*)0) || *VAR_4[0] == '\0')
 FUNC_0();

    VAR_6 = FUNC_3(VAR_4[0], '/');
    VAR_7 = VAR_6? VAR_6+1 : VAR_4[0];

    for(VAR_8=VAR_1; VAR_8->name != ((void*)0); VAR_8++)
 if(!FUNC_2(VAR_7, VAR_8->name)) break;

    if(VAR_8->name)
 return VAR_8->f(VAR_3, VAR_4, VAR_5);
    else {
 FUNC_1(VAR_2, "%s: %s not compiled in\n", VAR_0, VAR_7);
 FUNC_0();
    }
}

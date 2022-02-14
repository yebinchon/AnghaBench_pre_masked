
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stub {char* name; } ;


 char* VAR_0 ;
 struct stub* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3()
{
    int VAR_3, VAR_4;
    struct stub *VAR_5;

    FUNC_1(VAR_2, "usage: %s <prog> <args> ..., where <prog> is one of:\n",
     VAR_0);
    VAR_3 = 0;
    for(VAR_5=VAR_1; VAR_5->name != ((void*)0); VAR_5++) {
 VAR_4 = FUNC_2(VAR_5->name) + 1;
 if(VAR_3+VAR_4 < 80)
     VAR_3 += VAR_4;
 else {
     FUNC_1(VAR_2, "\n");
     VAR_3 = VAR_4;
 }
 FUNC_1(VAR_2, " %s", VAR_5->name);
    }
    FUNC_1(VAR_2, "\n");
    FUNC_0(1);
}

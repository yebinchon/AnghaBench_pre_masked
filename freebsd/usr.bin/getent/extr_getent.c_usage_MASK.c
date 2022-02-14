
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct getentdb {char* name; } ;


 int VAR_0 ;
 struct getentdb* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 () ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(void)
{
 struct getentdb *VAR_3;

 FUNC_1(VAR_2, "Usage: %s database [key ...]\n",
     FUNC_2());
 FUNC_1(VAR_2, "       database may be one of:\n\t");
 for (VAR_3 = VAR_1; VAR_3->name != ((void*)0); VAR_3++) {
  FUNC_1(VAR_2, " %s", VAR_3->name);
 }
 FUNC_1(VAR_2, "\n");
 FUNC_0(VAR_0);

}

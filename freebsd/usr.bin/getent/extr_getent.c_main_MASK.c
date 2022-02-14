
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct getentdb {int (* callback ) (int,char**) ;int * name; } ;


 int VAR_0 ;
 struct getentdb* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int,char**) ;
 int FUNC_5 () ;

int
FUNC_6(int VAR_3, char *VAR_4[])
{
 struct getentdb *VAR_5;

 FUNC_2(VAR_4[0]);

 if (VAR_3 < 2)
  FUNC_5();
 for (VAR_5 = VAR_1; VAR_5->name != ((void*)0); VAR_5++) {
  if (FUNC_3(VAR_5->name, VAR_4[1]) == 0) {
   FUNC_0(VAR_5->callback(VAR_3, VAR_4));
  }
 }
 FUNC_1(VAR_2, "Unknown database: %s\n", VAR_4[1]);
 FUNC_5();

 return VAR_0;
}

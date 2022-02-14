
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,char*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (struct strbuf*,int *) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*,int ) ;

__attribute__((used)) static void FUNC_7(int VAR_2)
{
 struct strbuf VAR_3 = VAR_1;
 FILE *VAR_4;

 VAR_4 = FUNC_2(VAR_2, "r");
 if (VAR_4 == ((void*)0)) {
  FUNC_3("fdopen of error channel failed");
  FUNC_0(VAR_2);
  return;
 }

 while (FUNC_4(&VAR_3, VAR_4) != VAR_0) {
  FUNC_3("%s", VAR_3.buf);
  FUNC_6(&VAR_3, 0);
 }

 FUNC_5(&VAR_3);
 FUNC_1(VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct strbuf*,char*,int) ;
 scalar_t__ FUNC_7 (struct strbuf*,int *) ;
 int FUNC_8 (struct strbuf*) ;
 int * FUNC_9 (int ,char*) ;

__attribute__((used)) static void FUNC_10(int VAR_4)
{
 FILE *VAR_5;
 struct strbuf VAR_6 = VAR_1;
 struct strbuf VAR_7 = VAR_1;
 int VAR_8 = 0;

 if (VAR_4 < 1)
  return;

 FUNC_3(((void*)0), VAR_3, ((void*)0), 0);
 VAR_5 = FUNC_1(VAR_2, "r");
 if (!VAR_5) {
  FUNC_4();
  VAR_5 = FUNC_9(VAR_2, "r");
  FUNC_0(VAR_5);
 } else {
  FUNC_6(&VAR_6, ":%d ", VAR_4);
  while (FUNC_7(&VAR_7, VAR_5) != VAR_0) {
   if (FUNC_5(VAR_7.buf, VAR_6.buf)) {
    VAR_8++;
    break;
   }
  }
  FUNC_0(VAR_5);
  if (!VAR_8)
   FUNC_4();
 }
 FUNC_2(((void*)0));
 FUNC_8(&VAR_6);
 FUNC_8(&VAR_7);
}

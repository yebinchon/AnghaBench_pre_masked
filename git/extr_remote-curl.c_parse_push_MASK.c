
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int * buf; } ;
struct argv_array {int argv; int argc; } ;


 struct argv_array VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct argv_array*) ;
 int FUNC_2 (struct argv_array*,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (struct strbuf*,int ) ;
 int FUNC_10 (struct strbuf*) ;

__attribute__((used)) static void FUNC_11(struct strbuf *VAR_4)
{
 struct argv_array VAR_5 = VAR_0;
 int VAR_6;

 do {
  if (FUNC_8(VAR_4->buf, "push "))
   FUNC_2(&VAR_5, VAR_4->buf + 5);
  else
   FUNC_3(FUNC_0("http transport does not support %s"), VAR_4->buf);

  FUNC_10(VAR_4);
  if (FUNC_9(VAR_4, VAR_2) == VAR_1)
   goto free_specs;
  if (!*VAR_4->buf)
   break;
 } while (1);

 VAR_6 = FUNC_7(VAR_5.argc, VAR_5.argv);
 FUNC_6("\n");
 FUNC_5(VAR_3);

 if (VAR_6)
  FUNC_4(128);

 free_specs:
 FUNC_1(&VAR_5);
}

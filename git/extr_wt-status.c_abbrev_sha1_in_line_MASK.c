
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct object_id*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (struct strbuf*,struct object_id*,int ) ;
 int FUNC_3 (struct strbuf*,struct strbuf*) ;
 int FUNC_4 (struct strbuf*,char) ;
 int FUNC_5 (struct strbuf**) ;
 int FUNC_6 (struct strbuf*) ;
 struct strbuf** FUNC_7 (struct strbuf*,char,int) ;
 int FUNC_8 (struct strbuf*) ;

__attribute__((used)) static void FUNC_9(struct strbuf *VAR_1)
{
 struct strbuf **VAR_2;
 int VAR_3;

 if (FUNC_1(VAR_1->buf, "exec ") ||
     FUNC_1(VAR_1->buf, "x ") ||
     FUNC_1(VAR_1->buf, "label ") ||
     FUNC_1(VAR_1->buf, "l "))
  return;

 VAR_2 = FUNC_7(VAR_1, ' ', 3);
 if (VAR_2[0] && VAR_2[1]) {
  struct object_id VAR_4;





  FUNC_8(VAR_2[1]);
  if (!FUNC_0(VAR_2[1]->buf, &VAR_4)) {
   FUNC_6(VAR_2[1]);
   FUNC_2(VAR_2[1], &VAR_4,
       VAR_0);
   FUNC_4(VAR_2[1], ' ');
   FUNC_6(VAR_1);
   for (VAR_3 = 0; VAR_2[VAR_3]; VAR_3++)
    FUNC_3(VAR_1, VAR_2[VAR_3]);
  }
 }
 FUNC_5(VAR_2);
}

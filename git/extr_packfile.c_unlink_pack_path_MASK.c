
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; int buf; } ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*,size_t) ;
 int FUNC_5 (int ,size_t*,char*) ;
 int FUNC_6 (int ) ;

void FUNC_7(const char *VAR_2, int VAR_3)
{
 static const char *VAR_4[] = {".pack", ".idx", ".keep", ".bitmap", ".promisor"};
 int VAR_5;
 struct strbuf VAR_6 = VAR_1;
 size_t VAR_7;

 FUNC_2(&VAR_6, VAR_2);
 FUNC_5(VAR_6.buf, &VAR_6.len, ".pack");
 VAR_7 = VAR_6.len;

 if (!VAR_3) {
  FUNC_2(&VAR_6, ".keep");
  if (!FUNC_1(VAR_6.buf, VAR_0)) {
   FUNC_3(&VAR_6);
   return;
  }
 }

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); VAR_5++) {
  FUNC_4(&VAR_6, VAR_7);
  FUNC_2(&VAR_6, VAR_4[VAR_5]);
  FUNC_6(VAR_6.buf);
 }

 FUNC_3(&VAR_6);
}

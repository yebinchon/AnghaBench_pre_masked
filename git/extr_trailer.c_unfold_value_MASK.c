
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; char* buf; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,size_t) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*,struct strbuf*) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(struct strbuf *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;
 size_t VAR_3;

 FUNC_2(&VAR_2, VAR_1->len);
 VAR_3 = 0;
 while (VAR_3 < VAR_1->len) {
  char VAR_4 = VAR_1->buf[VAR_3++];
  if (VAR_4 == '\n') {

   while (VAR_3 < VAR_1->len && FUNC_0(VAR_1->buf[VAR_3]))
    VAR_3++;
   FUNC_1(&VAR_2, ' ');
  } else {
   FUNC_1(&VAR_2, VAR_4);
  }
 }


 FUNC_5(&VAR_2);


 FUNC_4(&VAR_2, VAR_1);
 FUNC_3(&VAR_2);
}

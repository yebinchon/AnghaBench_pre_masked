
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; char* buf; } ;


 int FUNC_0 (struct strbuf*,char*,size_t,size_t) ;
 char* FUNC_1 (size_t) ;

__attribute__((used)) static void FUNC_2(struct strbuf *VAR_0)
{
 char *VAR_1;
 size_t VAR_2, VAR_3;
 char VAR_4;


 for (VAR_2 = VAR_3 = 0, VAR_4 = '\0'; VAR_2 < VAR_0->len; VAR_2++) {
  if (VAR_0->buf[VAR_2] == '\n' && VAR_4 != '\r')
   VAR_3++;
  VAR_4 = VAR_0->buf[VAR_2];
  VAR_3++;
 }

 VAR_1 = FUNC_1(VAR_3);





 for (VAR_2 = VAR_3 = 0, VAR_4 = '\0'; VAR_2 < VAR_0->len; VAR_2++) {
  if (VAR_0->buf[VAR_2] == '\n' && VAR_4 != '\r')
   VAR_1[VAR_3++] = '\r';
  VAR_4 = VAR_1[VAR_3++] = VAR_0->buf[VAR_2];
 }
 FUNC_0(VAR_0, VAR_1, VAR_3, VAR_3 + 1);
}

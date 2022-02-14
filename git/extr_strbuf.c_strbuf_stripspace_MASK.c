
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; char* buf; } ;


 size_t FUNC_0 (char*,size_t) ;
 char VAR_0 ;
 char* FUNC_1 (char*,char,size_t) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (struct strbuf*,int) ;
 int FUNC_4 (struct strbuf*,size_t) ;

void FUNC_5(struct strbuf *VAR_1, int VAR_2)
{
 size_t VAR_3 = 0;
 size_t VAR_4, VAR_5, VAR_6, VAR_7;
 char *VAR_8;


 FUNC_3(VAR_1, 1);

 for (VAR_4 = VAR_5 = 0; VAR_4 < VAR_1->len; VAR_4 += VAR_6, VAR_5 += VAR_7) {
  VAR_8 = FUNC_1(VAR_1->buf + VAR_4, '\n', VAR_1->len - VAR_4);
  VAR_6 = VAR_8 ? VAR_8 - (VAR_1->buf + VAR_4) + 1 : VAR_1->len - VAR_4;

  if (VAR_2 && VAR_6 && VAR_1->buf[VAR_4] == VAR_0) {
   VAR_7 = 0;
   continue;
  }
  VAR_7 = FUNC_0(VAR_1->buf + VAR_4, VAR_6);


  if (VAR_7) {
   if (VAR_3 > 0 && VAR_5 > 0)
    VAR_1->buf[VAR_5++] = '\n';
   VAR_3 = 0;
   FUNC_2(VAR_1->buf + VAR_5, VAR_1->buf + VAR_4, VAR_7);
   VAR_1->buf[VAR_7 + VAR_5++] = '\n';
  } else {
   VAR_3++;
  }
 }

 FUNC_4(VAR_1, VAR_5);
}

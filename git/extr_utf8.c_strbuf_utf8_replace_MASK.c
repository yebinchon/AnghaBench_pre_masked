
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;


 struct strbuf VAR_0 ;
 size_t FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (struct strbuf*,int) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*,int) ;
 int FUNC_5 (struct strbuf*,struct strbuf*) ;
 int FUNC_6 (char const*) ;
 size_t FUNC_7 (char const**,int *) ;

void FUNC_8(struct strbuf *VAR_1, int VAR_2, int VAR_3,
    const char *VAR_4)
{
 struct strbuf VAR_5 = VAR_0;
 char *VAR_6 = VAR_1->buf;
 char *VAR_7 = VAR_6 + VAR_1->len;
 char *VAR_8;
 int VAR_9 = 0, VAR_10 = 0;

 if (VAR_4)
  VAR_10 = FUNC_6(VAR_4);
 FUNC_2(&VAR_5, VAR_1->len + VAR_10);
 VAR_8 = VAR_5.buf;

 while (VAR_6 < VAR_7) {
  char *VAR_11;
  size_t VAR_12;

  while ((VAR_12 = FUNC_0(VAR_6))) {
   FUNC_1(VAR_8, VAR_6, VAR_12);
   VAR_6 += VAR_12;
   VAR_8 += VAR_12;
  }

  if (VAR_6 >= VAR_7)
   break;

  VAR_11 = VAR_6;
  VAR_12 = FUNC_7((const char**)&VAR_6, ((void*)0));
  if (!VAR_6)
   goto out;
  if (VAR_12 && VAR_9 >= VAR_2 && VAR_9 < VAR_2 + VAR_3) {
   if (VAR_4) {
    FUNC_1(VAR_8, VAR_4, VAR_10);
    VAR_8 += VAR_10;
    VAR_4 = ((void*)0);
   }
   VAR_9 += VAR_12;
   continue;
  }
  FUNC_1(VAR_8, VAR_11, VAR_6 - VAR_11);
  VAR_8 += VAR_6 - VAR_11;
  VAR_9 += VAR_12;
 }
 FUNC_4(&VAR_5, VAR_8 - VAR_5.buf);
 FUNC_5(VAR_1, &VAR_5);
out:
 FUNC_3(&VAR_5);
}

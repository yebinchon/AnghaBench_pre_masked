
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf**,size_t,size_t) ;
 char* FUNC_1 (char const*,int,size_t) ;
 int FUNC_2 (struct strbuf*,char const*,int) ;
 int FUNC_3 (struct strbuf*,int) ;
 struct strbuf* FUNC_4 (int) ;

struct strbuf **FUNC_5(const char *VAR_0, size_t VAR_1,
     int VAR_2, int VAR_3)
{
 struct strbuf **VAR_4 = ((void*)0);
 size_t VAR_5 = 0, VAR_6 = 0;
 struct strbuf *VAR_7;

 while (VAR_1) {
  int VAR_8 = VAR_1;
  if (VAR_3 <= 0 || VAR_5 + 1 < VAR_3) {
   const char *VAR_9 = FUNC_1(VAR_0, VAR_2, VAR_1);
   if (VAR_9)
    VAR_8 = VAR_9 - VAR_0 + 1;
  }
  VAR_7 = FUNC_4(sizeof(struct strbuf));
  FUNC_3(VAR_7, VAR_8);
  FUNC_2(VAR_7, VAR_0, VAR_8);
  FUNC_0(VAR_4, VAR_5 + 2, VAR_6);
  VAR_4[VAR_5++] = VAR_7;
  VAR_0 += VAR_8;
  VAR_1 -= VAR_8;
 }
 FUNC_0(VAR_4, VAR_5 + 1, VAR_6);
 VAR_4[VAR_5] = ((void*)0);
 return VAR_4;
}

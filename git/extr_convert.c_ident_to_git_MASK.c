
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; char* buf; } ;


 int FUNC_0 (char const*,size_t) ;
 char* FUNC_1 (char const*,char,int) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char const*,size_t) ;
 size_t FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*,size_t) ;
 int FUNC_7 (struct strbuf*,int) ;

__attribute__((used)) static int FUNC_8(const char *VAR_0, size_t VAR_1,
   struct strbuf *VAR_2, int VAR_3)
{
 char *VAR_4, *VAR_5;

 if (!VAR_3 || (VAR_0 && !FUNC_0(VAR_0, VAR_1)))
  return 0;

 if (!VAR_2)
  return 1;


 if (FUNC_5(VAR_2) + VAR_2->len < VAR_1)
  FUNC_6(VAR_2, VAR_1 - VAR_2->len);
 VAR_4 = VAR_2->buf;
 for (;;) {
  VAR_5 = FUNC_1(VAR_0, '$', VAR_1);
  if (!VAR_5)
   break;
  FUNC_4(VAR_4, VAR_0, VAR_5 + 1 - VAR_0);
  VAR_4 += VAR_5 + 1 - VAR_0;
  VAR_1 -= VAR_5 + 1 - VAR_0;
  VAR_0 = VAR_5 + 1;

  if (VAR_1 > 3 && !FUNC_2(VAR_0, "Id:", 3)) {
   VAR_5 = FUNC_1(VAR_0 + 3, '$', VAR_1 - 3);
   if (!VAR_5)
    break;
   if (FUNC_1(VAR_0 + 3, '\n', VAR_5 - VAR_0 - 3)) {

    continue;
   }

   FUNC_3(VAR_4, "Id$", 3);
   VAR_4 += 3;
   VAR_1 -= VAR_5 + 1 - VAR_0;
   VAR_0 = VAR_5 + 1;
  }
 }
 FUNC_4(VAR_4, VAR_0, VAR_1);
 FUNC_7(VAR_2, VAR_4 + VAR_1 - VAR_2->buf);
 return 1;
}

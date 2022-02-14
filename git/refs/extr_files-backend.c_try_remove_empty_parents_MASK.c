
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;
struct files_ref_store {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (struct files_ref_store*,struct strbuf*,char*) ;
 int FUNC_1 (struct files_ref_store*,struct strbuf*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*,int) ;

__attribute__((used)) static void FUNC_7(struct files_ref_store *VAR_3,
         const char *VAR_4,
         unsigned int VAR_5)
{
 struct strbuf VAR_6 = VAR_2;
 struct strbuf VAR_7 = VAR_2;
 char *VAR_8, *VAR_9;
 int VAR_10;

 FUNC_3(&VAR_6, VAR_4);
 VAR_8 = VAR_6.buf;
 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
  while (*VAR_8 && *VAR_8 != '/')
   VAR_8++;

  while (*VAR_8 == '/')
   VAR_8++;
 }
 VAR_9 = VAR_6.buf + VAR_6.len;
 while (VAR_5 & (VAR_0 | VAR_1)) {
  while (VAR_9 > VAR_8 && *VAR_9 != '/')
   VAR_9--;
  while (VAR_9 > VAR_8 && *(VAR_9-1) == '/')
   VAR_9--;
  if (VAR_9 == VAR_8)
   break;
  FUNC_6(&VAR_6, VAR_9 - VAR_6.buf);

  FUNC_5(&VAR_7);
  FUNC_0(VAR_3, &VAR_7, VAR_6.buf);
  if ((VAR_5 & VAR_0) && FUNC_2(VAR_7.buf))
   VAR_5 &= ~VAR_0;

  FUNC_5(&VAR_7);
  FUNC_1(VAR_3, &VAR_7, VAR_6.buf);
  if ((VAR_5 & VAR_1) && FUNC_2(VAR_7.buf))
   VAR_5 &= ~VAR_1;
 }
 FUNC_4(&VAR_6);
 FUNC_4(&VAR_7);
}

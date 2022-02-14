
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;


 struct strbuf VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (struct strbuf*,int *) ;
 int FUNC_2 (struct strbuf*,int ,char*,int ) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*,int ,int) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (struct strbuf*,char const*,int *) ;

__attribute__((used)) static char *FUNC_7(struct strbuf *VAR_1,
      const char *VAR_2,
      int VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 char *VAR_5;





 if (FUNC_6(&VAR_4, VAR_2, ((void*)0))) {
  FUNC_3(&VAR_4);
  return ((void*)0);
 }

 for (VAR_5 = VAR_4.buf; VAR_3; VAR_3--) {
  VAR_5 = FUNC_5(VAR_5, '/');
  if (!VAR_5) {
   FUNC_3(&VAR_4);
   return ((void*)0);
  }
  VAR_5++;
 }

 FUNC_4(&VAR_4, 0, VAR_5 - VAR_4.buf);
 if (VAR_1->len)
  FUNC_2(&VAR_4, 0, VAR_1->buf, VAR_1->len);
 return FUNC_0(FUNC_1(&VAR_4, ((void*)0)));
}

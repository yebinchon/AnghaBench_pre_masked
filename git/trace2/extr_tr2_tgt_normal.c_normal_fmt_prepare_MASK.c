
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr2_tbuf {int buf; } ;
struct strbuf {scalar_t__ len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct strbuf*,char) ;
 int FUNC_1 (struct strbuf*,char*,char const*,int) ;
 int FUNC_2 (struct strbuf*,int ) ;
 int FUNC_3 (struct strbuf*,int ) ;
 int FUNC_4 (struct tr2_tbuf*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(const char *VAR_2, int VAR_3, struct strbuf *VAR_4)
{
 FUNC_3(VAR_4, 0);

 if (!VAR_1) {
  struct tr2_tbuf VAR_5;

  FUNC_4(&VAR_5);
  FUNC_2(VAR_4, VAR_5.buf);
  FUNC_0(VAR_4, ' ');

  if (VAR_2 && *VAR_2)
   FUNC_1(VAR_4, "%s:%d ", VAR_2, VAR_3);
  while (VAR_4->len < VAR_0)
   FUNC_0(VAR_4, ' ');
 }
}

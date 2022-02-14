
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static inline int FUNC_3(const struct strbuf *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);
 return !FUNC_2(VAR_0->buf, VAR_1, VAR_2) && VAR_0->len > VAR_2 &&
   VAR_0->buf[VAR_2] == ':' && FUNC_0(VAR_0->buf[VAR_2 + 1]);
}

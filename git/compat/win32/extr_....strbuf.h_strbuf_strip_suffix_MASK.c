
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;


 int FUNC_0 (struct strbuf*,int ) ;
 scalar_t__ FUNC_1 (int ,int *,char const*) ;

__attribute__((used)) static inline int FUNC_2(struct strbuf *VAR_0, const char *VAR_1)
{
 if (FUNC_1(VAR_0->buf, &VAR_0->len, VAR_1)) {
  FUNC_0(VAR_0, VAR_0->len);
  return 1;
 } else
  return 0;
}

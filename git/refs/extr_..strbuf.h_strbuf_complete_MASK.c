
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char* buf; } ;


 int FUNC_0 (struct strbuf*,char) ;

__attribute__((used)) static inline void FUNC_1(struct strbuf *VAR_0, char VAR_1)
{
 if (VAR_0->len && VAR_0->buf[VAR_0->len - 1] != VAR_1)
  FUNC_0(VAR_0, VAR_1);
}

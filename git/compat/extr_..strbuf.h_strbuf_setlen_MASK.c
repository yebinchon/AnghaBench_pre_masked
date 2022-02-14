
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int alloc; size_t len; char* buf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* VAR_0 ;

__attribute__((used)) static inline void FUNC_2(struct strbuf *VAR_1, size_t VAR_2)
{
 if (VAR_2 > (VAR_1->alloc ? VAR_1->alloc - 1 : 0))
  FUNC_1("BUG: strbuf_setlen() beyond buffer");
 VAR_1->len = VAR_2;
 if (VAR_1->buf != VAR_0)
  VAR_1->buf[VAR_2] = '\0';
 else
  FUNC_0(!VAR_0[0]);
}

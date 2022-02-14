
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t alloc; size_t len; } ;



__attribute__((used)) static inline size_t FUNC_0(const struct strbuf *VAR_0)
{
 return VAR_0->alloc ? VAR_0->alloc - VAR_0->len - 1 : 0;
}

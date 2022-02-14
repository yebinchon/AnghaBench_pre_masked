
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traverse_info {int dummy; } ;
struct strbuf {size_t len; scalar_t__ alloc; scalar_t__ buf; } ;


 int FUNC_0 (scalar_t__,scalar_t__,struct traverse_info const*,char const*,size_t) ;
 int FUNC_1 (struct strbuf*,size_t) ;
 int FUNC_2 (struct strbuf*,size_t) ;
 size_t FUNC_3 (struct traverse_info const*,size_t) ;

void FUNC_4(struct strbuf *VAR_0,
          const struct traverse_info *VAR_1,
          const char *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = FUNC_3(VAR_1, VAR_3);

 FUNC_1(VAR_0, VAR_4);
 FUNC_0(VAR_0->buf + VAR_0->len, VAR_0->alloc - VAR_0->len,
      VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_0, VAR_0->len + VAR_4);
}

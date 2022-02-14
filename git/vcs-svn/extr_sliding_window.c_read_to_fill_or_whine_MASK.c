
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; } ;
struct line_buffer {int dummy; } ;


 int FUNC_0 (struct line_buffer*,struct strbuf*,size_t) ;
 int FUNC_1 (struct line_buffer*) ;

__attribute__((used)) static int FUNC_2(struct line_buffer *VAR_0,
    struct strbuf *VAR_1, size_t VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2 - VAR_1->len);
 if (VAR_1->len != VAR_2)
  return FUNC_1(VAR_0);
 return 0;
}

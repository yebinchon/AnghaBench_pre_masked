
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uintmax_t ;
struct strbuf {scalar_t__ len; } ;
struct line_buffer {int dummy; } ;
typedef scalar_t__ off_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (struct line_buffer*,struct strbuf*,size_t) ;
 int FUNC_2 (struct line_buffer*) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static int FUNC_4(struct line_buffer *VAR_0, off_t *VAR_1,
        struct strbuf *VAR_2, size_t VAR_3)
{
 FUNC_0(*VAR_1 >= 0);
 FUNC_3(VAR_2);
 if (VAR_3 > (uintmax_t) *VAR_1 ||
     FUNC_1(VAR_0, VAR_2, VAR_3) != VAR_3)
  return FUNC_2(VAR_0);
 *VAR_1 -= VAR_2->len;
 return 0;
}

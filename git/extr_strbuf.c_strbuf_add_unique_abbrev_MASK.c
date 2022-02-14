
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; scalar_t__ buf; } ;
struct object_id {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,struct object_id const*,int) ;
 int FUNC_1 (struct strbuf*,scalar_t__) ;
 int FUNC_2 (struct strbuf*,scalar_t__) ;

void FUNC_3(struct strbuf *VAR_1, const struct object_id *VAR_2,
         int VAR_3)
{
 int VAR_4;
 FUNC_1(VAR_1, VAR_0 + 1);
 VAR_4 = FUNC_0(VAR_1->buf + VAR_1->len, VAR_2, VAR_3);
 FUNC_2(VAR_1, VAR_1->len + VAR_4);
}

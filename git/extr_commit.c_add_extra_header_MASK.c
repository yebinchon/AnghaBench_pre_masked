
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct commit_extra_header {scalar_t__ len; int value; int key; } ;


 int FUNC_0 (struct strbuf*,char*,int ,scalar_t__) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,int ) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_0,
        struct commit_extra_header *VAR_1)
{
 FUNC_2(VAR_0, VAR_1->key);
 if (VAR_1->len)
  FUNC_0(VAR_0, " ", VAR_1->value, VAR_1->len);
 else
  FUNC_1(VAR_0, '\n');
}

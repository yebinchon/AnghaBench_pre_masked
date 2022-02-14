
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int string; } ;
struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf*,char) ;
 int FUNC_1 (struct strbuf*,int ) ;

__attribute__((used)) static int FUNC_2(struct string_list_item *VAR_0,
      void *VAR_1)
{
 struct strbuf *VAR_2 = VAR_1;
 FUNC_1(VAR_2, VAR_0->string);
 FUNC_0(VAR_2, '\n');
 return 0;
}

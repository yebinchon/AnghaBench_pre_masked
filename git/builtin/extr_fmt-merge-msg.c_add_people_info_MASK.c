
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int nr; int items; } ;
struct strbuf {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct strbuf*,struct string_list*,char) ;

__attribute__((used)) static void FUNC_2(struct strbuf *VAR_1,
       struct string_list *VAR_2,
       struct string_list *VAR_3)
{
 FUNC_0(VAR_2->items, VAR_2->nr,
       VAR_0);
 FUNC_0(VAR_3->items, VAR_3->nr,
       VAR_0);

 FUNC_1(VAR_1, VAR_2, 'a');
 FUNC_1(VAR_1, VAR_3, 'c');
}

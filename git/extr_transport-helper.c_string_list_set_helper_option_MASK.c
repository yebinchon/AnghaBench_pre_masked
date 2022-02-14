
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {int dummy; } ;
struct helper_data {int dummy; } ;
struct TYPE_2__ {int string; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ,struct strbuf*,int *,int ) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,char*,char const*) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct helper_data*,struct strbuf*) ;

__attribute__((used)) static int FUNC_6(struct helper_data *VAR_1,
      const char *VAR_2,
      struct string_list *VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3->nr; VAR_5++) {
  FUNC_2(&VAR_4, "option %s ", VAR_2);
  FUNC_0(VAR_3->items[VAR_5].string, &VAR_4, ((void*)0), 0);
  FUNC_1(&VAR_4, '\n');

  if ((VAR_6 = FUNC_5(VAR_1, &VAR_4)))
   break;
  FUNC_4(&VAR_4);
 }
 FUNC_3(&VAR_4);
 return VAR_6;
}

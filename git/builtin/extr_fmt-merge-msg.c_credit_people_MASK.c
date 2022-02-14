
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {int dummy; } ;
struct TYPE_2__ {int string; } ;


 int VAR_0 ;
 int FUNC_0 (struct strbuf*,struct string_list*) ;
 int VAR_1 ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char const*,int ,char const**) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (struct strbuf*,char*,int ,char const*) ;

__attribute__((used)) static void FUNC_6(struct strbuf *VAR_2,
     struct string_list *VAR_3,
     int VAR_4)
{
 const char *VAR_5;
 const char *VAR_6;

 if (VAR_4 == 'a') {
  VAR_5 = "By";
  VAR_6 = FUNC_1(VAR_0);
 } else {
  VAR_5 = "Via";
  VAR_6 = FUNC_2(VAR_0);
 }

 if (!VAR_3->nr ||
     (VAR_3->nr == 1 &&
      VAR_6 &&
      FUNC_3(VAR_6, VAR_3->items->string, &VAR_6) &&
      FUNC_4(VAR_6, " <")))
  return;
 FUNC_5(VAR_2, "\n%c %s ", VAR_1, VAR_5);
 FUNC_0(VAR_2, VAR_3);
}

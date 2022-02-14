
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {int buf; } ;
struct TYPE_2__ {int string; } ;


 struct strbuf VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct strbuf*,char*,int ) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static void FUNC_4(struct string_list *VAR_2,
         const char *VAR_3,
         const char *VAR_4,
         int *VAR_5)
{
 if (VAR_2->nr) {
  int VAR_6;
  struct strbuf VAR_7 = VAR_0;

  FUNC_2(&VAR_7, VAR_3);
  for (VAR_6 = 0; VAR_6 < VAR_2->nr; VAR_6++)
   FUNC_1(&VAR_7,
        "\n    %s",
        VAR_2->items[VAR_6].string);
  if (VAR_1)
   FUNC_2(&VAR_7, VAR_4);
  *VAR_5 = FUNC_0("%s", VAR_7.buf);
  FUNC_3(&VAR_7);
 }
}

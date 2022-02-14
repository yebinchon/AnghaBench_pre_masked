
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_2__ {int len; } ;
struct json_writer {struct strbuf json; scalar_t__ pretty; TYPE_1__ open_stack; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,struct json_writer const*,int) ;
 int FUNC_1 (struct strbuf*,struct json_writer const*) ;
 int FUNC_2 (struct strbuf*,struct strbuf*) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static void FUNC_4(struct json_writer *VAR_1,
     const struct json_writer *VAR_2)
{
 if (VAR_1->pretty && VAR_1->open_stack.len && VAR_2->pretty) {
  struct strbuf VAR_3 = VAR_0;
  FUNC_0(&VAR_3, VAR_2, VAR_1->open_stack.len * 2);
  FUNC_2(&VAR_1->json, &VAR_3);
  FUNC_3(&VAR_3);
  return;
 }
 if (!VAR_1->pretty && VAR_2->pretty) {
  struct strbuf VAR_4 = VAR_0;
  FUNC_1(&VAR_4, VAR_2);
  FUNC_2(&VAR_1->json, &VAR_4);
  FUNC_3(&VAR_4);
  return;
 }

 FUNC_2(&VAR_1->json, &VAR_2->json);
}

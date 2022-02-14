
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int buf; } ;
struct TYPE_3__ {int len; char* buf; } ;
struct json_writer {int need_comma; TYPE_2__ json; scalar_t__ pretty; TYPE_1__ open_stack; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct json_writer*) ;
 int FUNC_2 (TYPE_2__*,char) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(struct json_writer *VAR_0)
{
 char VAR_1;
 int VAR_2;

 if (!VAR_0->open_stack.len)
  FUNC_0("json-writer: too many jw_end(): '%s'", VAR_0->json.buf);

 VAR_2 = VAR_0->open_stack.len - 1;
 VAR_1 = VAR_0->open_stack.buf[VAR_2];

 FUNC_3(&VAR_0->open_stack, VAR_2);
 VAR_0->need_comma = 1;

 if (VAR_0->pretty) {
  FUNC_2(&VAR_0->json, '\n');
  FUNC_1(VAR_0);
 }

 if (VAR_1 == '{')
  FUNC_2(&VAR_0->json, '}');
 else
  FUNC_2(&VAR_0->json, ']');
}

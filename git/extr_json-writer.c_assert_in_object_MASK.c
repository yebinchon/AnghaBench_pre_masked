
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; char* buf; } ;
struct json_writer {TYPE_1__ open_stack; } ;


 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static void FUNC_1(const struct json_writer *VAR_0, const char *VAR_1)
{
 if (!VAR_0->open_stack.len)
  FUNC_0("json-writer: object: missing jw_object_begin(): '%s'", VAR_1);
 if (VAR_0->open_stack.buf[VAR_0->open_stack.len - 1] != '{')
  FUNC_0("json-writer: object: not in object: '%s'", VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; char* buf; } ;
struct json_writer {TYPE_1__ open_stack; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(const struct json_writer *VAR_0)
{
 if (!VAR_0->open_stack.len)
  FUNC_0("json-writer: array: missing jw_array_begin()");
 if (VAR_0->open_stack.buf[VAR_0->open_stack.len - 1] != '[')
  FUNC_0("json-writer: array: not in array");
}

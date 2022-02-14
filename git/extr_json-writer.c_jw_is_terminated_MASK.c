
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct json_writer {TYPE_1__ open_stack; } ;



int FUNC_0(const struct json_writer *VAR_0)
{
 return !VAR_0->open_stack.len;
}

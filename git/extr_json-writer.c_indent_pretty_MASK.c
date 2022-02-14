
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct json_writer {int json; TYPE_1__ open_stack; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct json_writer *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->open_stack.len; VAR_1++)
  FUNC_0(&VAR_0->json, "  ");
}

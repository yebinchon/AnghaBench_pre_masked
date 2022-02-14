
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct json_writer {scalar_t__ pretty; scalar_t__ need_comma; int open_stack; int json; } ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(struct json_writer *VAR_0)
{
 FUNC_0(&VAR_0->json, 0);
 FUNC_0(&VAR_0->open_stack, 0);
 VAR_0->need_comma = 0;
 VAR_0->pretty = 0;
}

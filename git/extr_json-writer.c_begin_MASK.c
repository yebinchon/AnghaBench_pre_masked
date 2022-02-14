
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct json_writer {int pretty; scalar_t__ need_comma; int open_stack; int json; } ;


 int FUNC_0 (int *,char) ;

__attribute__((used)) static void FUNC_1(struct json_writer *VAR_0, char VAR_1, int VAR_2)
{
 VAR_0->pretty = VAR_2;

 FUNC_0(&VAR_0->json, VAR_1);

 FUNC_0(&VAR_0->open_stack, VAR_1);
 VAR_0->need_comma = 0;
}

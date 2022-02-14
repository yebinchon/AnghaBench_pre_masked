
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct json_writer {int need_comma; int json; } ;


 int FUNC_0 (int *,char) ;

__attribute__((used)) static void FUNC_1(struct json_writer *VAR_0)
{
 if (VAR_0->need_comma)
  FUNC_0(&VAR_0->json, ',');
 else
  VAR_0->need_comma = 1;
}

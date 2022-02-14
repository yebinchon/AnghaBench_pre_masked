
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct json_writer {int json; scalar_t__ pretty; } ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (struct json_writer*,char const*) ;
 int FUNC_2 (struct json_writer*) ;
 int FUNC_3 (struct json_writer*) ;
 int FUNC_4 (int *,char) ;

__attribute__((used)) static void FUNC_5(struct json_writer *VAR_0, const char *VAR_1)
{
 FUNC_1(VAR_0, VAR_1);
 FUNC_3(VAR_0);

 if (VAR_0->pretty) {
  FUNC_4(&VAR_0->json, '\n');
  FUNC_2(VAR_0);
 }

 FUNC_0(&VAR_0->json, VAR_1);
 FUNC_4(&VAR_0->json, ':');
 if (VAR_0->pretty)
  FUNC_4(&VAR_0->json, ' ');
}

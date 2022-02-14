
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int* value; int long_name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char const**) ;

__attribute__((used)) static int FUNC_4(const struct option *VAR_0,
       const char *VAR_1, int VAR_2)
{
 int *VAR_3 = VAR_0->value;
 int VAR_4, VAR_5;

 FUNC_0(VAR_2);
 if (!VAR_1)
  VAR_1 = "";
 VAR_4 = FUNC_3(&VAR_1);
 if (*VAR_1 == 0)
  VAR_5 = 0;
 else if (*VAR_1 != '/')
  return FUNC_2(FUNC_1("%s expects <n>/<m> form"), VAR_0->long_name);
 else {
  VAR_1++;
  VAR_5 = FUNC_3(&VAR_1);
 }
 if (*VAR_1 != 0)
  return FUNC_2(FUNC_1("%s expects <n>/<m> form"), VAR_0->long_name);
 *VAR_3 = VAR_4 | (VAR_5 << 16);
 return 0;
}

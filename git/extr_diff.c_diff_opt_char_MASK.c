
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* value; int long_name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,char const*) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_0,
    const char *VAR_1, int VAR_2)
{
 char *VAR_3 = VAR_0->value;

 FUNC_0(VAR_2);
 if (VAR_1[1])
  return FUNC_2(FUNC_1("%s expects a character, got '%s'"),
        VAR_0->long_name, VAR_1);
 *VAR_3 = VAR_1[0];
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jailparam {int jp_name; } ;


 char* FUNC_0 (int ,char) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const struct jailparam *VAR_2, *VAR_3;
 char *VAR_4, *VAR_5;


 VAR_2 = VAR_0;
 VAR_3 = VAR_1;
 VAR_4 = FUNC_0(VAR_2->jp_name, '.');
 VAR_5 = FUNC_0(VAR_3->jp_name, '.');
 if (VAR_4 && !VAR_5)
  return (1);
 if (VAR_5 && !VAR_4)
  return (-1);
 return (FUNC_1(VAR_2->jp_name, VAR_3->jp_name));
}

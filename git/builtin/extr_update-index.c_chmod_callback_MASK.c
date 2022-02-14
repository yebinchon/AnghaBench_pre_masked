
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* value; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_0,
    const char *VAR_1, int VAR_2)
{
 char *VAR_3 = VAR_0->value;
 FUNC_0(VAR_2);
 if ((VAR_1[0] != '-' && VAR_1[0] != '+') || VAR_1[1] != 'x' || VAR_1[2])
  return FUNC_1("option 'chmod' expects \"+x\" or \"-x\"");
 *VAR_3 = VAR_1[0];
 return 0;
}

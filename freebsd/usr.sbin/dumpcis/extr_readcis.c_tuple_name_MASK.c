
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuple_info {char const* name; } ;


 struct tuple_info* FUNC_0 (unsigned char) ;

const char *
FUNC_1(unsigned char VAR_0)
{
 struct tuple_info *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return (VAR_1->name);
 return ("Unknown");
}

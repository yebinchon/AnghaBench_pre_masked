
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const** argv; } ;
struct tmp_objdir {TYPE_1__ env; } ;



const char **FUNC_0(const struct tmp_objdir *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);
 return VAR_0->env.argv;
}

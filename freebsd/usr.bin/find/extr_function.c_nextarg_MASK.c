
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
typedef TYPE_1__ OPTION ;


 int FUNC_0 (int,char*,int ) ;

__attribute__((used)) static char *
FUNC_1(OPTION *VAR_0, char ***VAR_1)
{
 char *VAR_2;

 if ((VAR_2 = **VAR_1) == ((void*)0))
  FUNC_0(1, "%s: requires additional arguments", VAR_0->name);
 (*VAR_1)++;
 return VAR_2;
}

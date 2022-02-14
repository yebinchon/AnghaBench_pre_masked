
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agent {scalar_t__ type; int name; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
    struct agent const *VAR_2 = *((struct agent const **)VAR_0);
 struct agent const *VAR_3 = *((struct agent const **)VAR_1);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->name, VAR_3->name);
 if (VAR_4 == 0) {
  if (VAR_2->type == VAR_3->type)
   VAR_4 = 0;
  else if (VAR_2->type < VAR_3->type)
   VAR_4 = -1;
  else
   VAR_4 = 1;
 }

 return (VAR_4);
}

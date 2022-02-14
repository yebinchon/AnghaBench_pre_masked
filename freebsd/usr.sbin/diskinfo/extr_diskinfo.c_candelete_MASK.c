
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ i; } ;
struct diocgattr_arg {int len; TYPE_1__ value; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,struct diocgattr_arg*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static bool
FUNC_2(int VAR_1)
{
 struct diocgattr_arg VAR_2;

 FUNC_1(VAR_2.name, "GEOM::candelete", sizeof(VAR_2.name));
 VAR_2.len = sizeof(VAR_2.value.i);
 if (FUNC_0(VAR_1, VAR_0, &VAR_2) == 0)
  return (VAR_2.value.i != 0);
 else
  return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
typedef TYPE_1__ git_reference ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(git_reference *VAR_2)
{
 if (VAR_2->type == VAR_1)
  return 0;

 FUNC_0(VAR_0, "cannot set OID on symbolic reference");
 return -1;
}

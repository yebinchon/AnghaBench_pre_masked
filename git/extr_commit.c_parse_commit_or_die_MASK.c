
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct commit*) ;

void FUNC_3(struct commit *VAR_0)
{
 if (FUNC_2(VAR_0))
  FUNC_0("unable to parse commit %s",
      VAR_0 ? FUNC_1(&VAR_0->object.oid) : "(null)");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct blob {TYPE_1__ object; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct blob *VAR_1)
{
 if (!VAR_1)
  return;
 if (VAR_1->object.flags & VAR_0)
  return;
 VAR_1->object.flags |= VAR_0;
}

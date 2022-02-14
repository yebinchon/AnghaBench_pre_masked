
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct datalink {int name; TYPE_2__* physical; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ link; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;

void
FUNC_2(struct datalink *VAR_0, const char *VAR_1)
{
  FUNC_0(VAR_0->name);
  VAR_0->physical->link.name = VAR_0->name = FUNC_1(VAR_1);
}

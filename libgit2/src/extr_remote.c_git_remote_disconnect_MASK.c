
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* transport; } ;
typedef TYPE_1__ git_remote ;
struct TYPE_7__ {int (* close ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(git_remote *VAR_0)
{
 FUNC_0(VAR_0);

 if (FUNC_1(VAR_0))
  VAR_0->transport->close(VAR_0->transport);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int opercnt; } ;
typedef TYPE_1__ hil_mlc ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(hil_mlc *VAR_1, int VAR_2)
{

 if (VAR_1->opercnt == 0)
  VAR_0 = 0;
 VAR_1->opercnt = 1;

 FUNC_0(VAR_1);

 if (!VAR_0)
  return 0;
 VAR_0 = 0;
 VAR_1->opercnt = 0;
 return 1;
}

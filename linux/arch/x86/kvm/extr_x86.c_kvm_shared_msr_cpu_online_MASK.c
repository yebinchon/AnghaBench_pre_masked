
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int nr; int * msrs; } ;


 int FUNC_0 (unsigned int,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
 unsigned VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0.nr; ++VAR_1)
  FUNC_0(VAR_1, VAR_0.msrs[VAR_1]);
}

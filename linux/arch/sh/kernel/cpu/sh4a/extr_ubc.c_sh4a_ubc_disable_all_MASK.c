
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_events; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1.num_events; VAR_2++)
  FUNC_2(FUNC_1(FUNC_0(VAR_2)) & ~VAR_0,
        FUNC_0(VAR_2));
}

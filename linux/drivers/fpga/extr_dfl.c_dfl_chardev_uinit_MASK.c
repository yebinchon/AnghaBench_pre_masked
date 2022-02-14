
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (FUNC_0(VAR_2[VAR_3].devt)) {
   FUNC_2(VAR_2[VAR_3].devt,
       VAR_1 + 1);
   VAR_2[VAR_3].devt = FUNC_1(0, 0);
  }
}

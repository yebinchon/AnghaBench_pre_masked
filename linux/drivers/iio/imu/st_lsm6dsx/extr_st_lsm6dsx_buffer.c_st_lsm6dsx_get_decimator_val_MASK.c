
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ decimator; int val; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(u8 VAR_1)
{
 const int VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (VAR_0[VAR_3].decimator == VAR_1)
   break;

 return VAR_3 == VAR_2 ? 0 : VAR_0[VAR_3].val;
}

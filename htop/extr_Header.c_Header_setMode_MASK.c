
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_3__ {int ** columns; } ;
typedef int MeterModeId ;
typedef int Meter ;
typedef TYPE_1__ Header ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(Header* VAR_0, int VAR_1, MeterModeId VAR_2, int VAR_3) {
   Vector* VAR_4 = VAR_0->columns[VAR_3];

   if (VAR_1 >= FUNC_2(VAR_4))
      return;
   Meter* VAR_5 = (Meter*) FUNC_1(VAR_4, VAR_1);
   FUNC_0(VAR_5, VAR_2);
}

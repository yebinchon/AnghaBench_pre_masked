
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_5__ {int ** columns; } ;
struct TYPE_4__ {int mode; } ;
typedef int MeterModeId ;
typedef TYPE_1__ Meter ;
typedef TYPE_2__ Header ;


 scalar_t__ FUNC_0 (int *,int) ;

MeterModeId FUNC_1(Header* VAR_0, int VAR_1, int VAR_2) {
   Vector* VAR_3 = VAR_0->columns[VAR_2];

   Meter* VAR_4 = (Meter*) FUNC_0(VAR_3, VAR_1);
   return VAR_4->mode;
}

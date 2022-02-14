
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_3__ {int pl; int ** columns; } ;
typedef int MeterClass ;
typedef int Meter ;
typedef TYPE_1__ Header ;


 int * FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int *,int *) ;

Meter* FUNC_2(Header* VAR_0, MeterClass* VAR_1, int VAR_2, int VAR_3) {
   Vector* VAR_4 = VAR_0->columns[VAR_3];

   Meter* VAR_5 = FUNC_0(VAR_0->pl, VAR_2, VAR_1);
   FUNC_1(VAR_4, VAR_5);
   return VAR_5;
}

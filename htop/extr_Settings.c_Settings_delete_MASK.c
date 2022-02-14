
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* columns; struct TYPE_6__* fields; struct TYPE_6__* filename; } ;
struct TYPE_5__ {TYPE_2__* modes; int names; } ;
typedef TYPE_2__ Settings ;
typedef int MeterColumnSettings ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(Settings* VAR_0) {
   FUNC_1(VAR_0->filename);
   FUNC_1(VAR_0->fields);
   for (unsigned int VAR_1 = 0; VAR_1 < (sizeof(VAR_0->columns)/sizeof(MeterColumnSettings)); VAR_1++) {
      FUNC_0(VAR_0->columns[VAR_1].names);
      FUNC_1(VAR_0->columns[VAR_1].modes);
   }
   FUNC_1(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_11__ {int pl; int ** columns; } ;
struct TYPE_10__ {int mode; } ;
struct TYPE_9__ {int name; } ;
typedef int MeterModeId ;
typedef TYPE_1__ MeterClass ;
typedef TYPE_2__ Meter ;
typedef TYPE_3__ Header ;


 TYPE_2__* FUNC_0 (int ,int,TYPE_1__*) ;
 TYPE_1__** VAR_0 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (char*,char*,int*) ;
 char* FUNC_4 (char*,char) ;

MeterModeId FUNC_5(Header* VAR_2, char* VAR_3, int VAR_4) {
   Vector* VAR_5 = VAR_2->columns[VAR_4];

   char* VAR_6 = FUNC_4(VAR_3, '(');
   int VAR_7 = 0;
   if (VAR_6) {
      int VAR_8 = FUNC_3(VAR_6, "(%10d)", &VAR_7);
      if (!VAR_8) VAR_7 = 0;
      *VAR_6 = '\0';
   }
   MeterModeId VAR_9 = VAR_1;
   for (MeterClass** VAR_10 = VAR_0; *VAR_10; VAR_10++) {
      if (FUNC_1(VAR_3, (*VAR_10)->name)) {
         Meter* VAR_11 = FUNC_0(VAR_2->pl, VAR_7, *VAR_10);
         FUNC_2(VAR_5, VAR_11);
         VAR_9 = VAR_11->mode;
         break;
      }
   }
   return VAR_9;
}

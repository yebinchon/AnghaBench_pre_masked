
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_7__ {int numColumns; TYPE_1__* columnInfo; } ;
typedef TYPE_2__ listBoxDef_t ;
struct TYPE_8__ {scalar_t__ typeData; } ;
typedef TYPE_3__ itemDef_t ;
struct TYPE_6__ {int pos; int width; int maxChars; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int*) ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_2( itemDef_t *VAR_3, int VAR_4 ) {
 int VAR_5, VAR_6;
 listBoxDef_t *VAR_7;

 FUNC_0(VAR_3);
 if (!VAR_3->typeData)
  return VAR_1;
 VAR_7 = (listBoxDef_t*)VAR_3->typeData;
 if (FUNC_1(VAR_4, &VAR_5)) {
  if (VAR_5 > VAR_0) {
   VAR_5 = VAR_0;
  }
  VAR_7->numColumns = VAR_5;
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   int VAR_8, VAR_9, VAR_10;

   if (FUNC_1(VAR_4, &VAR_8) && FUNC_1(VAR_4, &VAR_9) && FUNC_1(VAR_4, &VAR_10)) {
    VAR_7->columnInfo[VAR_6].pos = VAR_8;
    VAR_7->columnInfo[VAR_6].width = VAR_9;
    VAR_7->columnInfo[VAR_6].maxChars = VAR_10;
   } else {
    return VAR_1;
   }
  }
 } else {
  return VAR_1;
 }
 return VAR_2;
}

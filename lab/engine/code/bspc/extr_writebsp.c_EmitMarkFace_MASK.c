
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int outputnumber; struct TYPE_5__** split; struct TYPE_5__* merged; } ;
typedef TYPE_1__ face_t ;
struct TYPE_6__ {int firstleafface; } ;
typedef TYPE_2__ dleaf_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1 (dleaf_t *VAR_4, face_t *VAR_5)
{
 int VAR_6;
 int VAR_7;

 while (VAR_5->merged)
  VAR_5 = VAR_5->merged;

 if (VAR_5->split[0])
 {
  FUNC_1 (VAR_4, VAR_5->split[0]);
  FUNC_1 (VAR_4, VAR_5->split[1]);
  return;
 }

 VAR_7 = VAR_5->outputnumber;
 if (VAR_7 == -1)
  return;

 if (VAR_7 < 0 || VAR_7 >= VAR_2)
  FUNC_0 ("Bad leafface");
 for (VAR_6=VAR_4->firstleafface ; VAR_6<VAR_3 ; VAR_6++)
  if (VAR_1[VAR_6] == VAR_7)
   break;
 if (VAR_6 == VAR_3)
 {
  if (VAR_3 >= VAR_0)
   FUNC_0 ("MAX_MAP_LEAFFACES");

  VAR_1[VAR_3] = VAR_7;
  VAR_3++;
 }

}

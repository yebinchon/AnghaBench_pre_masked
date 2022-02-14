
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_4__ {scalar_t__ res; scalar_t__ pass; size_t pri; int lineno; } ;
typedef TYPE_1__ collpri_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 size_t VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int32_t
FUNC_2(int32_t VAR_8)
{
 collpri_t *VAR_9;
 static int32_t VAR_10 = 0;

 VAR_9 = FUNC_1(VAR_8);
 VAR_10++;
 while (VAR_9->res == VAR_1) {
  if (VAR_9->pass == VAR_10) {

   VAR_4 = VAR_9->lineno;
   FUNC_0(VAR_7,"circular reference in order list");
   return (-1);
  }
  if ((VAR_9->pri < 0) || (VAR_9->pri >= VAR_5)) {
   VAR_0;
   return (-1);
  }
  VAR_9->pass = VAR_10;
  VAR_9 = &VAR_6[VAR_9->pri];
 }

 if (VAR_9->res == VAR_3) {
  return (-1);
 }
 if (VAR_9->res != VAR_2)
  VAR_0;

 return (VAR_9->pri);
}

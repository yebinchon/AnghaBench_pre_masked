
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
typedef int collpri_t ;
struct TYPE_4__ {scalar_t__ pass; scalar_t__ pri; int res; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int) ;
 int VAR_4 ;

__attribute__((used)) static int32_t
FUNC_2(void)
{
 int VAR_5;

 if (VAR_2 >= VAR_1) {
  VAR_1 = VAR_1 ? VAR_1 * 2 : 1024;
  VAR_3 = FUNC_1(VAR_3, sizeof (collpri_t) * VAR_1);
  if (VAR_3 == ((void*)0)) {
   FUNC_0(VAR_4,"out of memory");
   return (-1);
  }
  for (VAR_5 = VAR_2; VAR_5 < VAR_1; VAR_5++) {
   VAR_3[VAR_5].res = VAR_0;
   VAR_3[VAR_5].pri = 0;
   VAR_3[VAR_5].pass = 0;
  }
 }
 return (VAR_2++);
}

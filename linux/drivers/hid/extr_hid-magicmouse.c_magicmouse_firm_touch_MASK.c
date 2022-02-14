
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct magicmouse_sc {int ntouches; int* tracking_ids; TYPE_1__* touches; } ;
struct TYPE_2__ {int size; } ;



__attribute__((used)) static int FUNC_0(struct magicmouse_sc *VAR_0)
{
 int VAR_1 = -1;
 int VAR_2;




 for (VAR_2 = 0; VAR_2 < VAR_0->ntouches; VAR_2++) {
  int VAR_3 = VAR_0->tracking_ids[VAR_2];
  if (VAR_0->touches[VAR_3].size < 8) {

  } else if (VAR_1 >= 0) {
   VAR_1 = -1;
   break;
  } else {
   VAR_1 = VAR_3;
  }
 }

 return VAR_1;
}

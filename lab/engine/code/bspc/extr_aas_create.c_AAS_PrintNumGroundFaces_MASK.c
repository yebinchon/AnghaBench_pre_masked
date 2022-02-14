
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int faceflags; struct TYPE_3__* l_next; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_4__ {TYPE_1__* faces; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 TYPE_2__ VAR_1 ;

void FUNC_1(void)
{
 tmp_face_t *VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = VAR_1.faces; VAR_2; VAR_2 = VAR_2->l_next)
 {
  if (VAR_2->faceflags & VAR_0)
  {
   VAR_3++;
  }
 }
 FUNC_0("%6d ground faces\n", VAR_3);
}

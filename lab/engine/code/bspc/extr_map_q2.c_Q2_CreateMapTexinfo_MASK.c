
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nexttexinfo; int texture; int value; int flags; int vecs; } ;
struct TYPE_3__ {int texture; int value; int flags; int vecs; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_2 ;

void FUNC_2(void)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 {
  FUNC_0(VAR_0[VAR_3].vecs, VAR_2[VAR_3].vecs, sizeof(float) * 2 * 4);
  VAR_0[VAR_3].flags = VAR_2[VAR_3].flags;
  VAR_0[VAR_3].value = VAR_2[VAR_3].value;
  FUNC_1(VAR_0[VAR_3].texture, VAR_2[VAR_3].texture);
  VAR_0[VAR_3].nexttexinfo = 0;
 }
}

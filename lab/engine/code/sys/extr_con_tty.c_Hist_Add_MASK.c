
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cursor; } ;
typedef TYPE_1__ field_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_1(field_t *VAR_4)
{
 int VAR_5;


 if (!VAR_4->cursor)
  return;

 FUNC_0(VAR_1 <= VAR_0);
 FUNC_0(VAR_1 >= 0);
 FUNC_0(VAR_2 >= -1);
 FUNC_0(VAR_2 <= VAR_1);

 for (VAR_5=VAR_0-1; VAR_5>0; VAR_5--)
 {
  VAR_3[VAR_5] = VAR_3[VAR_5-1];
 }
 VAR_3[0] = *VAR_4;
 if (VAR_1<VAR_0)
 {
  VAR_1++;
 }
 VAR_2 = -1;
}

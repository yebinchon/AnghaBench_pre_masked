
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct fixed31_32 {int dummy; } ;
struct TYPE_2__ {int x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct fixed31_32*) ;
 TYPE_1__* VAR_2 ;
 struct fixed31_32 FUNC_1 (int) ;
 int FUNC_2 (struct fixed31_32,struct fixed31_32) ;
 int VAR_3 ;
 int * VAR_4 ;

void FUNC_3(void)
{
 int VAR_5;
 struct fixed31_32 VAR_6;
 uint32_t VAR_7, VAR_8;

 struct fixed31_32 VAR_9 = FUNC_1(125);




 VAR_7 = 13 * VAR_1;
 VAR_8 = VAR_7 + 12 * VAR_1;

 for (VAR_5 = 0; VAR_5 <= VAR_7; VAR_5++)
  VAR_4[VAR_5] = VAR_3;

 for (; VAR_5 <= VAR_8; VAR_5++) {
  FUNC_0(VAR_2[VAR_5].x, &VAR_6);
  VAR_4[VAR_5] = FUNC_2(VAR_6, VAR_9);
 }

 for (; VAR_5 <= VAR_0; VAR_5++)
  VAR_4[VAR_5] = VAR_4[VAR_5-1];
}

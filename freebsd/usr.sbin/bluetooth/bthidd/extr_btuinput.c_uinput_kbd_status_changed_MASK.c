
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct input_event {int type; int value; int code; } ;
typedef int int32_t ;
typedef int ie ;
typedef TYPE_1__* bthid_session_p ;
struct TYPE_3__ {scalar_t__ vkbd; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,...) ;
 int * VAR_2 ;
 int FUNC_2 (struct input_event*,int *,int) ;
 size_t FUNC_3 (int *) ;

int32_t
FUNC_4(bthid_session_p VAR_3, uint8_t *VAR_4, int32_t VAR_5)
{
 struct input_event VAR_6;
 int32_t VAR_7, VAR_8;
 size_t VAR_9;

 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_3->vkbd >= 0);
 FUNC_0(VAR_5 == sizeof(struct input_event));

 FUNC_2(&VAR_6, VAR_4, sizeof(VAR_6));
 switch (VAR_6.type) {
 case 129:
  FUNC_1(VAR_3->vkbd, VAR_0, &VAR_8);
  VAR_7 = VAR_8;
  for (VAR_9 = 0; VAR_9 < FUNC_3(VAR_2); VAR_9++) {
   if (VAR_2[VAR_9] == VAR_6.code) {
    if (VAR_6.value)
     VAR_7 |= 1 << VAR_9;
    else
     VAR_7 &= ~(1 << VAR_9);
    if (VAR_7 != VAR_8)
     FUNC_1(VAR_3->vkbd, VAR_1, VAR_7);
    break;
   }
  }
  break;
 case 128:

 default:
  break;
 }

 return (0);
}

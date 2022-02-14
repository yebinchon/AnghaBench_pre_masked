
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {unsigned char* data; TYPE_1__* shared; scalar_t__ touch_input; } ;
struct TYPE_2__ {int touch_down; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct wacom_wac*,unsigned char*) ;
 int FUNC_2 (struct wacom_wac*,unsigned char*) ;
 int FUNC_3 (struct wacom_wac*) ;

__attribute__((used)) static int FUNC_4(struct wacom_wac *VAR_0)
{
 unsigned char *VAR_1 = VAR_0->data;
 int VAR_2 = VAR_1[1] & 0x07;
 int VAR_3 = 0, VAR_4;

 if (VAR_1[0] != 0x02)
     return 0;


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  int VAR_5 = (8 * VAR_4) + 2;
  int VAR_6 = VAR_1[VAR_5];

  if (VAR_6 >= 2 && VAR_6 <= 17) {
   FUNC_2(VAR_0, VAR_1 + VAR_5);
   VAR_3++;
  } else if (VAR_6 == 128)
   FUNC_1(VAR_0, VAR_1 + VAR_5);

 }


 if (VAR_0->touch_input && VAR_3) {
  FUNC_0(VAR_0->touch_input);
  VAR_0->shared->touch_down = FUNC_3(VAR_0);
 }

 return 1;
}

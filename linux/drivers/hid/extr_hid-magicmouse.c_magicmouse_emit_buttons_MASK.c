
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct magicmouse_sc {int scroll_accel; TYPE_2__* input; TYPE_1__* touches; } ;
struct TYPE_4__ {int key; } ;
struct TYPE_3__ {int x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (struct magicmouse_sc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct magicmouse_sc *VAR_7, int VAR_8)
{
 int VAR_9 = FUNC_2(VAR_0, VAR_7->input->key) << 0 |
  FUNC_2(VAR_2, VAR_7->input->key) << 1 |
  FUNC_2(VAR_1, VAR_7->input->key) << 2;

 if (VAR_4) {
  int VAR_10;





  if (VAR_8 == 0) {

  } else if (VAR_9 != 0) {
   VAR_8 = VAR_9;
  } else if ((VAR_10 = FUNC_1(VAR_7)) >= 0) {
   int VAR_11 = VAR_7->touches[VAR_10].x;
   if (VAR_11 < VAR_5)
    VAR_8 = 1;
   else if (VAR_11 > VAR_6)
    VAR_8 = 2;
   else
    VAR_8 = 4;
  }

  FUNC_0(VAR_7->input, VAR_1, VAR_8 & 4);
 }

 FUNC_0(VAR_7->input, VAR_0, VAR_8 & 1);
 FUNC_0(VAR_7->input, VAR_2, VAR_8 & 2);

 if (VAR_8 != VAR_9)
  VAR_7->scroll_accel = VAR_3;
}

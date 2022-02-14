
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* press_str; char* repeat_str; } ;
struct TYPE_4__ {int press_data; int (* press_fct ) (int ) ;} ;
struct TYPE_6__ {TYPE_2__ kbd; TYPE_1__ std; } ;
struct logical_input {int mask; int value; scalar_t__ type; int high_timer; scalar_t__ fall_timer; int state; TYPE_3__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct logical_input *VAR_10)
{
 if ((VAR_8 & VAR_10->mask) == VAR_10->value) {
  if ((VAR_10->type == VAR_3) &&
      (VAR_10->high_timer == 0)) {
   VAR_10->high_timer++;
   if (VAR_10->u.std.press_fct)
    VAR_10->u.std.press_fct(VAR_10->u.std.press_data);
  } else if (VAR_10->type == VAR_2) {

   VAR_7 = 1;

   if (VAR_10->high_timer == 0) {
    char *VAR_11 = VAR_10->u.kbd.press_str;

    if (VAR_11[0]) {
     int VAR_12 = sizeof(VAR_10->u.kbd.press_str);

     FUNC_0(VAR_11, VAR_12);
    }
   }

   if (VAR_10->u.kbd.repeat_str[0]) {
    char *VAR_13 = VAR_10->u.kbd.repeat_str;

    if (VAR_10->high_timer >= VAR_5) {
     int VAR_14 = sizeof(VAR_10->u.kbd.repeat_str);

     VAR_10->high_timer -= VAR_4;
     FUNC_0(VAR_13, VAR_14);
    }

    VAR_6 = 0;
   }

   if (VAR_10->high_timer < 255)
    VAR_10->high_timer++;
  }
  return 1;
 }


 VAR_10->state = VAR_0;
 VAR_10->fall_timer = 0;

 return 0;
}

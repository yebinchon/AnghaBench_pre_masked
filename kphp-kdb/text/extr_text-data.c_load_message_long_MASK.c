
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int user_id; } ;
struct imessage_long {TYPE_1__ builtin_msg; } ;
struct imessage {int dummy; } ;


 int FUNC_0 (struct imessage*,int,int,int) ;
 int FUNC_1 (struct imessage_long*,int,int) ;

int FUNC_2 (struct imessage_long *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4) {
  int VAR_5 = FUNC_0 ((struct imessage *) VAR_0, VAR_1, VAR_2, 1);
  if (VAR_5 <= 0) {
    return VAR_5;
  }
  VAR_0->builtin_msg.user_id = VAR_1;
  FUNC_1 (VAR_0, VAR_3, VAR_4);

  return VAR_5;
}

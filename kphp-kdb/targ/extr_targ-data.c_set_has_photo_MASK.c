
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int has_photo; int uid; } ;
typedef TYPE_1__ user_t ;
struct lev_generic {int type; int a; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,int) ;

int FUNC_2 (struct lev_generic *VAR_3) {
  user_t *VAR_4 = FUNC_0 (VAR_3->a);
  if (!VAR_4) { return 0; }
  int VAR_5 = VAR_3->type & 0xff;
  FUNC_1 (VAR_4->uid, VAR_0, (VAR_4->has_photo & 0x81) == 1, (VAR_5 & 0x81) == 1);
  FUNC_1 (VAR_4->uid, VAR_2, (VAR_4->has_photo & 0x82) == 2, (VAR_5 & 0x82) == 2);
  FUNC_1 (VAR_4->uid, VAR_1, (VAR_4->has_photo & 0x84) == 4, (VAR_5 & 0x84) == 4);
  VAR_4->has_photo = VAR_5;
  return 1;
}

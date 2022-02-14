
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int active_ads; int user_id; } ;
typedef TYPE_1__ user_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3 (user_t *VAR_9, int VAR_10) {
  FUNC_0 (VAR_10 && (unsigned) VAR_10 < VAR_1);
  VAR_5 = VAR_10;
  VAR_7 = VAR_9->user_id;
  VAR_6 = VAR_9;
  VAR_3++;
  VAR_4 = (FUNC_2 () + 0x40000000) | 1;
  VAR_2 = 0;
  return FUNC_1 (VAR_0, VAR_9->active_ads, VAR_8);
}

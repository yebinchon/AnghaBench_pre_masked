
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * metafile; } ;
typedef TYPE_1__ user ;
struct TYPE_7__ {int user_cnt; } ;


 int * VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,TYPE_1__*) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

void FUNC_2 (user *VAR_5) {
  if (VAR_4 > 2) {
    FUNC_1 (VAR_2, "bind user metafile local id = %d (%p)\n", (int)(VAR_5 - VAR_3), VAR_5);
  }
  int VAR_6 = (int)(VAR_5 - VAR_3);

  if (VAR_5->metafile == ((void*)0) || VAR_5->metafile == VAR_0) {
    return;
  }

  FUNC_0 (1 <= VAR_6 && VAR_6 <= VAR_1.user_cnt);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* next_used; TYPE_1__* prev_used; } ;
typedef TYPE_3__ user ;
struct TYPE_7__ {TYPE_1__* prev_used; } ;
struct TYPE_6__ {TYPE_2__* next_used; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*,char*,int) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;

void FUNC_4 (user *VAR_3) {
  if (VAR_2 > 3) {
    char VAR_4[100];
    FUNC_3 (VAR_4, "?(-%d)", FUNC_2 (&VAR_0, (int)(VAR_3 - VAR_1)));
    FUNC_1 (VAR_4, -FUNC_2 (&VAR_0, (int)(VAR_3 - VAR_1)));
  }
  FUNC_0 (VAR_3->prev_used != ((void*)0));
  FUNC_0 (VAR_3->next_used != ((void*)0));

  VAR_3->next_used->prev_used = VAR_3->prev_used;
  VAR_3->prev_used->next_used = VAR_3->next_used;

  VAR_3->prev_used = ((void*)0);
  VAR_3->next_used = ((void*)0);
  if (VAR_2 > 3) {
    FUNC_1 ("!", 0);
  }
}

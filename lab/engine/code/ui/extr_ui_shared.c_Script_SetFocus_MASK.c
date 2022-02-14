
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
struct TYPE_10__ {scalar_t__ onFocus; TYPE_1__ window; int parent; } ;
typedef TYPE_3__ itemDef_t ;
struct TYPE_9__ {scalar_t__ itemFocusSound; } ;
struct TYPE_11__ {TYPE_2__ Assets; int (* startLocalSound ) (scalar_t__,int ) ;} ;


 int VAR_0 ;
 TYPE_7__* VAR_1 ;
 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char**,char const**) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__,int ) ;

void FUNC_5(itemDef_t *VAR_4, char **VAR_5) {
  const char *VAR_6;
  itemDef_t *VAR_7;

  if (FUNC_3(VAR_5, &VAR_6)) {
    VAR_7 = FUNC_2(VAR_4->parent, VAR_6);
    if (VAR_7 && !(VAR_7->window.flags & VAR_2) && !(VAR_7->window.flags & VAR_3)) {
      FUNC_1(VAR_4->parent);
      VAR_7->window.flags |= VAR_3;
      if (VAR_7->onFocus) {
        FUNC_0(VAR_7, VAR_7->onFocus);
      }
      if (VAR_1->Assets.itemFocusSound) {
        VAR_1->startLocalSound( VAR_1->Assets.itemFocusSound, VAR_0 );
      }
    }
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int checked; int windows; } ;
typedef TYPE_1__ uiMenuItem ;
struct menuItemWindow {int signal; } ;
typedef scalar_t__ gpointer ;
typedef int gboolean ;
typedef int GHashTableIter ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(uiMenuItem *VAR_0, gboolean VAR_1)
{
 GHashTableIter VAR_2;
 gpointer VAR_3;
 gpointer VAR_4;
 struct menuItemWindow *VAR_5;

 VAR_0->checked = VAR_1;
 FUNC_1(&VAR_2, VAR_0->windows);
 while (FUNC_2(&VAR_2, &VAR_3, &VAR_4)) {
  VAR_5 = (struct menuItemWindow *) VAR_4;
  FUNC_3(FUNC_0(VAR_3), VAR_0->checked, VAR_5->signal);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int disabled; int windows; } ;
typedef TYPE_1__ uiMenuItem ;
typedef int gpointer ;
typedef int gboolean ;
typedef int GHashTableIter ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(uiMenuItem *VAR_0, gboolean VAR_1)
{
 GHashTableIter VAR_2;
 gpointer VAR_3;

 VAR_0->disabled = !VAR_1;
 FUNC_1(&VAR_2, VAR_0->windows);
 while (FUNC_2(&VAR_2, &VAR_3, ((void*)0)))
  FUNC_3(FUNC_0(VAR_3), VAR_1);
}

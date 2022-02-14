
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fin; } ;
typedef TYPE_1__ WSFrame ;
struct TYPE_7__ {TYPE_1__* frame; } ;
typedef TYPE_2__ WSClient ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int,int *) ;

__attribute__((used)) static void
FUNC_2 (WSClient * VAR_3)
{
  WSFrame **VAR_4 = &VAR_3->frame;

  if (!(*VAR_4)->fin) {
    FUNC_1 (VAR_3, VAR_1, VAR_2 | VAR_0, ((void*)0));
    return;
  }
  FUNC_0 (VAR_3);
}

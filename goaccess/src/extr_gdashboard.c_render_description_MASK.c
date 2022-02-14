
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_3__ {int pos_y; int desc; } ;
typedef TYPE_1__ GDashModule ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int,int ,int,int ) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void
FUNC_2 (WINDOW * VAR_1, GDashModule * VAR_2, int *VAR_3)
{
  int VAR_4, VAR_5;

  FUNC_1 (VAR_1, VAR_5, VAR_4);
  (void) VAR_5;

  FUNC_0 (VAR_1, VAR_2->desc, " %s", (*VAR_3), 0, VAR_4, VAR_0);

  VAR_2->pos_y = (*VAR_3);
  (*VAR_3)++;
  (*VAR_3)++;
}

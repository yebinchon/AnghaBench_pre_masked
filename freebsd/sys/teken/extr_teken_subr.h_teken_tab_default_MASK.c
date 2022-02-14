
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t_tabstops; } ;
typedef TYPE_1__ teken_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static void
FUNC_2(teken_t *VAR_1)
{
 unsigned int VAR_2;

 FUNC_0(VAR_1->t_tabstops, 0, VAR_0 / 8);

 for (VAR_2 = 8; VAR_2 < VAR_0; VAR_2 += 8)
  FUNC_1(VAR_1, VAR_2);
}

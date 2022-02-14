
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ curr_nr; scalar_t__ min_nr; } ;
typedef TYPE_1__ mempool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(mempool_t *VAR_1)
{
 while (VAR_1->curr_nr < VAR_1->min_nr)
  FUNC_1(FUNC_0(VAR_1, VAR_0), VAR_1);
}

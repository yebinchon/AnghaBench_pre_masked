
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ on_disk; int entries; } ;
typedef TYPE_1__ git_index ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__**,char*) ;
 int FUNC_5 (int *) ;

void FUNC_6(void)
{
   git_index *VAR_0;

   FUNC_1(FUNC_4(&VAR_0, "in-memory-index"));
   FUNC_0(VAR_0->on_disk == 0);

   FUNC_0(FUNC_2(VAR_0) == 0);
   FUNC_0(FUNC_5(&VAR_0->entries));

   FUNC_3(VAR_0);
}

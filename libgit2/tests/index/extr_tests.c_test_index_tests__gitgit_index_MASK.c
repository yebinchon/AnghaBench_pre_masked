
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int on_disk; int * tree; int entries; } ;
typedef TYPE_1__ git_index ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__**,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;

void FUNC_6(void)
{
   git_index *VAR_2;

   FUNC_1(FUNC_4(&VAR_2, VAR_0));
   FUNC_0(VAR_2->on_disk);

   FUNC_0(FUNC_2(VAR_2) == VAR_1);
   FUNC_0(FUNC_5(&VAR_2->entries));
   FUNC_0(VAR_2->tree != ((void*)0));

   FUNC_3(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int on_disk; } ;
typedef TYPE_1__ git_index ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__**,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*) ;

void FUNC_8(void)
{
   git_index *VAR_1;

   FUNC_2(VAR_0, "index_rewrite");

   FUNC_1(FUNC_5(&VAR_1, "index_rewrite"));
   FUNC_0(VAR_1->on_disk);

   FUNC_1(FUNC_6(VAR_1));
   FUNC_3(VAR_0, "index_rewrite");

   FUNC_4(VAR_1);

   FUNC_7("index_rewrite");
}

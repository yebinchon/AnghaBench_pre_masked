
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* slb_entries; struct slbtnode** ua_child; } ;
struct slbtnode {scalar_t__ ua_level; TYPE_2__ u; } ;
struct TYPE_3__ {int slbv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct slbtnode*) ;

__attribute__((used)) static void
FUNC_2(struct slbtnode *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  if (VAR_3->ua_level != VAR_1) {
   if (VAR_3->u.ua_child[VAR_4] != ((void*)0))
    FUNC_2(VAR_3->u.ua_child[VAR_4]);
  } else {
   if (VAR_3->u.slb_entries[VAR_4].slbv != 0)
    FUNC_0(VAR_3->u.slb_entries[VAR_4].slbv
        >> VAR_0);
  }
 }

 FUNC_1(VAR_2, VAR_3);
}

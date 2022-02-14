
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zone ;
typedef TYPE_1__* uma_zone_t ;
struct TYPE_8__ {scalar_t__ td_critnest; } ;
struct TYPE_7__ {int uz_name; } ;


 int FUNC_0 (int ,char*,TYPE_5__*,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 int FUNC_3 (TYPE_1__**,int,int ) ;
 int FUNC_4 (TYPE_1__*,void*,void*,int ) ;

void
FUNC_5(uma_zone_t VAR_4, void *VAR_5, void *VAR_6)
{


 FUNC_3(&VAR_4, sizeof(VAR_4), VAR_1);

 FUNC_0(VAR_0, "uma_zfree_domain thread %x zone %s", VAR_3,
     VAR_4->uz_name);

 FUNC_1(VAR_3->td_critnest == 0 || FUNC_2(),
     ("uma_zfree_domain: called with spinlock or critical section held"));


        if (VAR_5 == ((void*)0))
                return;
 FUNC_4(VAR_4, VAR_5, VAR_6, VAR_2);
}

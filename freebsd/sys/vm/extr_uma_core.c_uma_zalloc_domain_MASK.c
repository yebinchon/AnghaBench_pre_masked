
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zone ;
typedef TYPE_1__* uma_zone_t ;
struct TYPE_9__ {scalar_t__ td_critnest; } ;
struct TYPE_8__ {int uz_name; } ;


 int FUNC_0 (int ,char*,TYPE_5__*,int ,TYPE_1__*,int,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,int *,char*,int ) ;
 TYPE_5__* VAR_5 ;
 int FUNC_4 (TYPE_1__**,int,int ) ;
 void* FUNC_5 (TYPE_1__*,void*,int,int) ;

void *
FUNC_6(uma_zone_t VAR_6, void *VAR_7, int VAR_8, int VAR_9)
{


 FUNC_4(&VAR_6, sizeof(VAR_6), VAR_2);


 FUNC_0(VAR_0,
     "uma_zalloc_domain thread %x zone %s(%p) domain %d flags %d",
     VAR_5, VAR_6->uz_name, VAR_6, VAR_8, VAR_9);

 if (VAR_9 & VAR_1) {
  FUNC_3(VAR_3 | VAR_4, ((void*)0),
      "uma_zalloc_domain: zone \"%s\"", VAR_6->uz_name);
 }
 FUNC_1(VAR_5->td_critnest == 0 || FUNC_2(),
     ("uma_zalloc_domain: called with spinlock or critical section held"));

 return (FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9));
}

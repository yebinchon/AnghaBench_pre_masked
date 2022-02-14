
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_7__ {int oflags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(vm_page_t VAR_2)
{

 FUNC_1(VAR_2);
 FUNC_0(!FUNC_4(VAR_2) && (VAR_2->oflags & VAR_1) == 0,
     ("page %p already unswappable", VAR_2));

 FUNC_2(VAR_2);
 FUNC_3(VAR_2, VAR_0);
}

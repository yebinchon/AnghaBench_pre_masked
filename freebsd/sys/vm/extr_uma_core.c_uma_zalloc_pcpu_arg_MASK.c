
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
struct TYPE_4__ {int uz_flags; int uz_size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,int ) ;
 int VAR_2 ;
 void* FUNC_2 (TYPE_1__*,void*,int) ;
 void* FUNC_3 (void*,int) ;

void *
FUNC_4(uma_zone_t VAR_3, void *VAR_4, int VAR_5)
{
 void *VAR_6;





 VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5 & ~VAR_0);
 if (VAR_6 != ((void*)0) && (VAR_5 & VAR_0)) {




  FUNC_1(VAR_6, VAR_3->uz_size);

 }
 return (VAR_6);
}

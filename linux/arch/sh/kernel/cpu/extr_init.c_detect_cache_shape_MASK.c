
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int flags; TYPE_2__ scache; TYPE_2__ icache; TYPE_2__ dcache; } ;


 void* FUNC_0 (TYPE_2__) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(void)
{
 VAR_3 = FUNC_0(VAR_2.dcache);

 if (VAR_2.dcache.flags & VAR_1)
  VAR_4 = VAR_3;
 else
  VAR_4 = FUNC_0(VAR_2.icache);

 if (VAR_2.flags & VAR_0)
  VAR_5 = FUNC_0(VAR_2.scache);
 else
  VAR_5 = -1;
}

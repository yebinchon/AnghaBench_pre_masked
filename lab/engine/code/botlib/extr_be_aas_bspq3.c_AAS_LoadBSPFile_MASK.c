
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* BSPEntityData ) () ;} ;
struct TYPE_3__ {char* dentdata; int loaded; scalar_t__ entdatasize; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7(void)
{
 FUNC_0();
 VAR_2.entdatasize = FUNC_4(VAR_1.BSPEntityData()) + 1;
 VAR_2.dentdata = (char *) FUNC_3(VAR_2.entdatasize);
 FUNC_2(VAR_2.dentdata, VAR_1.BSPEntityData(), VAR_2.entdatasize);
 FUNC_1();
 VAR_2.loaded = VAR_3;
 return VAR_0;
}

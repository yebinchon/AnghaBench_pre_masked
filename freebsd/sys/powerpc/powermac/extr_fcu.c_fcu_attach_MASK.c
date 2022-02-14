
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ich_arg; int ich_func; } ;
struct fcu_softc {TYPE_1__ enum_hook; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 struct fcu_softc* FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
 struct fcu_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_2);

 VAR_3->enum_hook.ich_func = VAR_1;
 VAR_3->enum_hook.ich_arg = VAR_2;
 if (FUNC_0(&VAR_3->enum_hook) != 0)
  return (VAR_0);

 return (0);
}

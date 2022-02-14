
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int t_softc; TYPE_1__* t_funcs; } ;
typedef TYPE_2__ teken_t ;
struct TYPE_4__ {int (* tf_pre_input ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void
FUNC_1(const teken_t *VAR_0)
{

 if (VAR_0->t_funcs->tf_pre_input != ((void*)0))
  VAR_0->t_funcs->tf_pre_input(VAR_0->t_softc);
}

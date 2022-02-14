
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int t_softc; TYPE_1__* t_funcs; } ;
typedef TYPE_2__ teken_t ;
struct TYPE_4__ {int (* tf_param ) (int ,int,unsigned int) ;} ;


 int FUNC_0 (int ,int,unsigned int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(const teken_t *VAR_0, int VAR_1, unsigned int VAR_2)
{

 FUNC_1(VAR_0->t_funcs->tf_param != ((void*)0));
 VAR_0->t_funcs->tf_param(VAR_0->t_softc, VAR_1, VAR_2);
}

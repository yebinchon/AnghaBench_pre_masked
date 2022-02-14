
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int t_softc; TYPE_1__* t_funcs; } ;
typedef TYPE_2__ teken_t ;
struct TYPE_4__ {int (* tf_respond ) (int ,void const*,size_t) ;} ;


 int FUNC_0 (int ,void const*,size_t) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(const teken_t *VAR_0, const void *VAR_1, size_t VAR_2)
{

 FUNC_1(VAR_0->t_funcs->tf_respond != ((void*)0));
 VAR_0->t_funcs->tf_respond(VAR_0->t_softc, VAR_1, VAR_2);
}

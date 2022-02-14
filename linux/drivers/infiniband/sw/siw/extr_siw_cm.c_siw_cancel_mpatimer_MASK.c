
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siw_cep {int lock; TYPE_1__* mpa_timer; } ;
struct TYPE_2__ {int work; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct siw_cep*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct siw_cep *VAR_0)
{
 FUNC_3(&VAR_0->lock);
 if (VAR_0->mpa_timer) {
  if (FUNC_0(&VAR_0->mpa_timer->work)) {
   FUNC_2(VAR_0);
   FUNC_1(VAR_0->mpa_timer);
  }
  VAR_0->mpa_timer = ((void*)0);
 }
 FUNC_4(&VAR_0->lock);
}

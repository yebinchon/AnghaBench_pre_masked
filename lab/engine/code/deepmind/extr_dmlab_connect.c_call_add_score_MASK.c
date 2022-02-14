
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* add_score ) (int ,int,double) ;} ;
struct TYPE_5__ {int userdata; TYPE_1__ hooks; } ;
typedef TYPE_2__ DeepmindContext ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int ,int,double) ;

__attribute__((used)) static void FUNC_2(int VAR_0, double VAR_1) {
  DeepmindContext* VAR_2 = FUNC_0();
  VAR_2->hooks.add_score(VAR_2->userdata, VAR_0, VAR_1);
}

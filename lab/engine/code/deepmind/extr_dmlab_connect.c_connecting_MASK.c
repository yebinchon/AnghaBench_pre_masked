
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; } ;
struct TYPE_4__ {int is_server; } ;
typedef TYPE_1__ GameContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static int FUNC_2(GameContext* VAR_3) {
  int VAR_4 = !VAR_3->is_server && VAR_2.state < VAR_0 ? VAR_1 : 0;
  FUNC_1();
  FUNC_0();
  return VAR_4;
}

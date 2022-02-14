
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_1__ uv_handle_t ;
struct TYPE_6__ {scalar_t__ pongs; } ;
typedef TYPE_2__ pinger_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(uv_handle_t* VAR_2) {
  pinger_t* VAR_3 = (pinger_t*)VAR_2->data;

  FUNC_0(VAR_0 == VAR_3->pongs);

  FUNC_1(VAR_3);

  VAR_1++;
}

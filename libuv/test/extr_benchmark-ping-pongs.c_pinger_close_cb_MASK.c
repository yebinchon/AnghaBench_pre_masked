
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_1__ uv_handle_t ;
struct TYPE_6__ {int pongs; } ;
typedef TYPE_2__ pinger_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(uv_handle_t* VAR_3) {
  pinger_t* VAR_4;

  VAR_4 = (pinger_t*)VAR_3->data;
  FUNC_1(VAR_2, "ping_pongs: %d roundtrips/s\n", (1000 * VAR_4->pongs) / VAR_0);
  FUNC_0(VAR_2);

  FUNC_2(VAR_4);

  VAR_1++;
}

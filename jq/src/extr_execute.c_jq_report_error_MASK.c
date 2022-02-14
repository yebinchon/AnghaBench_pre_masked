
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jv ;
struct TYPE_3__ {int err_cb_data; int (* err_cb ) (int ,int ) ;} ;
typedef TYPE_1__ jq_state ;


 int FUNC_0 (int (*) (int ,int )) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(jq_state *VAR_0, jv VAR_1) {
  FUNC_0(VAR_0->err_cb);

  VAR_0->err_cb(VAR_0->err_cb_data, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* resp_biov; scalar_t__ resp_size; scalar_t__ resp_off; TYPE_1__* req_op; int resp_error; } ;
struct TYPE_5__ {scalar_t__ iov_len; } ;
struct TYPE_4__ {int (* op_result ) (TYPE_2__**) ;} ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (TYPE_2__**) ;

__attribute__((used)) static void
FUNC_1(void)
{

 VAR_0.resp_error = (*VAR_0.req_op->op_result)(&VAR_0.resp_biov);


 VAR_0.resp_off = 0;
 if (VAR_0.resp_biov == ((void*)0)) {
  VAR_0.resp_size = 0;
 } else {
  VAR_0.resp_size = VAR_0.resp_biov[0].iov_len;
 }
}

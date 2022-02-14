
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int req_size; TYPE_1__* req_op; } ;
struct TYPE_3__ {int (* op_data ) (int ,int) ;} ;


 int FUNC_0 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(uint32_t VAR_1)
{


 if (VAR_0.req_size <= sizeof(uint32_t))
  VAR_0.req_size = 0;
 else
  VAR_0.req_size -= sizeof(uint32_t);

 (*VAR_0.req_op->op_data)(VAR_1, VAR_0.req_size);

 if (VAR_0.req_size < sizeof(uint32_t)) {
  FUNC_0();
  return (1);
 }

 return (0);
}

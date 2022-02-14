
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* op_start ) (scalar_t__) ;} ;
struct TYPE_4__ {scalar_t__ req_size; size_t req_type; TYPE_2__* req_op; } ;


 size_t VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_2__** VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(void)
{
 int VAR_4;


 VAR_3.req_size -= 12;

 VAR_3.req_op = &VAR_1;
 if (VAR_3.req_type <= VAR_0 && VAR_2[VAR_3.req_type] != ((void*)0))
  VAR_3.req_op = VAR_2[VAR_3.req_type];

 VAR_4 = (*VAR_3.req_op->op_start)(VAR_3.req_size);

 if (VAR_4) {
  FUNC_0(VAR_4);
  VAR_3.req_op = &VAR_1;
 }


 if (VAR_3.req_size == 0) {
  FUNC_1();
  return (1);
 }

 return (0);
}

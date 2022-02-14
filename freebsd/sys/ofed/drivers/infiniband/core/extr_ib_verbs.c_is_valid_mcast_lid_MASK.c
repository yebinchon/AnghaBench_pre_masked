
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ib_qp_init_attr {int dummy; } ;
struct ib_qp_attr {scalar_t__ qp_state; int port_num; } ;
struct ib_qp {TYPE_1__* device; } ;
struct TYPE_2__ {int phys_port_cnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ib_qp*,struct ib_qp_attr*,int,struct ib_qp_init_attr*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static bool FUNC_3(struct ib_qp *VAR_6, u16 VAR_7)
{
 struct ib_qp_init_attr VAR_8 = {};
 struct ib_qp_attr VAR_9 = {};
 int VAR_10 = 0;
 int VAR_11;




 if (!FUNC_1(VAR_6, &VAR_9, VAR_5 | VAR_4, &VAR_8)) {
  if (VAR_9.qp_state >= VAR_3) {
   if (FUNC_2(VAR_6->device, VAR_9.port_num) !=
       VAR_1)
    return 1;
   goto lid_check;
  }
 }


 for (VAR_11 = 0; VAR_11 < VAR_6->device->phys_port_cnt; VAR_11++)
  if (FUNC_2(VAR_6->device, VAR_11) !=
      VAR_1)
   VAR_10++;





 if (VAR_10)
  return 1;


lid_check:
 return !(VAR_7 < FUNC_0(VAR_2) ||
   VAR_7 == FUNC_0(VAR_0));
}

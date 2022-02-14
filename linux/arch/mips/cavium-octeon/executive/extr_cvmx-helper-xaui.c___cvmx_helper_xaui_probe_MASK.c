
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int qos_mask; int eid; int pid; scalar_t__ static_p; } ;
union cvmx_pko_mem_port_ptrs {scalar_t__ u64; TYPE_1__ s; } ;
struct TYPE_4__ {int en; } ;
union cvmx_gmxx_inf_mode {scalar_t__ u64; TYPE_2__ s; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;

int FUNC_5(int VAR_1)
{
 int VAR_2;
 union cvmx_gmxx_inf_mode VAR_3;






 VAR_3.u64 = FUNC_3(FUNC_0(VAR_1));
 VAR_3.s.en = 1;
 FUNC_4(FUNC_0(VAR_1), VAR_3.u64);

 FUNC_1(VAR_1, 1);







 for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
  union cvmx_pko_mem_port_ptrs VAR_4;
  VAR_4.u64 = 0;




  VAR_4.s.static_p = 0;
  VAR_4.s.qos_mask = 0xff;

  VAR_4.s.eid = VAR_1 * 4;
  VAR_4.s.pid = VAR_1 * 16 + VAR_2;
  FUNC_4(VAR_0, VAR_4.u64);
 }
 return FUNC_2(VAR_1);
}

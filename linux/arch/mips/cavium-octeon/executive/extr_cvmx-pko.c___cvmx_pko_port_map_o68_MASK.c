
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int eid; int ipid; int qos_mask; int crc; int min_pkt; int intr; int pipe; } ;
union cvmx_pko_mem_iport_ptrs {scalar_t__ u64; TYPE_1__ s; } ;
typedef scalar_t__ cvmx_helper_interface_mode_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_3;
 int VAR_4, VAR_5;
 cvmx_helper_interface_mode_t VAR_6;
 union cvmx_pko_mem_iport_ptrs VAR_7;




 VAR_7.u64 = 0;
 VAR_7.s.eid = 31;
 for (VAR_3 = 0; VAR_3 < 128; VAR_3++) {
  VAR_7.s.ipid = VAR_3;
  FUNC_4(VAR_2, VAR_7.u64);
 }




 for (VAR_3 = 0; VAR_3 < 48; VAR_3++) {
  VAR_4 = FUNC_2(VAR_3);
  VAR_5 = FUNC_1(VAR_3);
  VAR_6 = FUNC_3(VAR_4);
  if (VAR_6 == VAR_0)
   continue;

  VAR_7.s.ipid = VAR_3;
  VAR_7.s.qos_mask = 0xff;
  VAR_7.s.crc = 1;
  VAR_7.s.min_pkt = 1;
  VAR_7.s.intr = FUNC_0(VAR_4, VAR_5);
  VAR_7.s.eid = VAR_7.s.intr;
  VAR_7.s.pipe = (VAR_6 == VAR_1) ?
   VAR_5 : VAR_3;
  FUNC_4(VAR_2, VAR_7.u64);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pid; int rate_lim; } ;
union cvmx_pko_mem_port_rate1 {scalar_t__ u64; TYPE_2__ s; } ;
struct TYPE_4__ {int pid; int rate_pkt; int rate_word; } ;
union cvmx_pko_mem_port_rate0 {scalar_t__ u64; TYPE_1__ s; } ;
typedef int uint64_t ;
struct TYPE_6__ {int cpu_clock_hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__) ;

int FUNC_2(int VAR_2, uint64_t VAR_3, int VAR_4)
{
 union cvmx_pko_mem_port_rate0 VAR_5;
 union cvmx_pko_mem_port_rate1 VAR_6;
 uint64_t VAR_7 = FUNC_0()->cpu_clock_hz;
 uint64_t VAR_8 = VAR_7 * 16 / VAR_3;

 VAR_5 = 0;
 VAR_5 = VAR_2;






 VAR_5 = (12 + 8 + 4) * 8 * VAR_8 / 256;

 VAR_5 = 64 * VAR_8;

 VAR_6 = 0;
 VAR_6 = VAR_2;
 VAR_6 = VAR_8 * VAR_4 / 256;

 FUNC_1(VAR_0, VAR_5);
 FUNC_1(VAR_1, VAR_6);
 return 0;
}

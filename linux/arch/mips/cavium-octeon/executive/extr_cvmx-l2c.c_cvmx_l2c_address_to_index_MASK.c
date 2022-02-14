
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int disidxalias; } ;
union cvmx_l2c_ctl {TYPE_2__ s; void* u64; } ;
struct TYPE_3__ {int idxalias; } ;
union cvmx_l2c_cfg {TYPE_1__ s; void* u64; } ;
typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 void* FUNC_2 (int ) ;

uint32_t FUNC_3(uint64_t VAR_9)
{
 uint64_t VAR_10 = VAR_9 >> VAR_3;
 int VAR_11 = 0;

 if (FUNC_0(VAR_8)) {
  union cvmx_l2c_ctl VAR_12;

  VAR_12.u64 = FUNC_2(VAR_2);
  VAR_11 = !VAR_12.s.disidxalias;
 } else {
  union cvmx_l2c_cfg VAR_13;

  VAR_13.u64 = FUNC_2(VAR_1);
  VAR_11 = VAR_13.s.idxalias;
 }

 if (VAR_11) {
  if (FUNC_0(VAR_7)) {
   uint32_t VAR_14 = (VAR_10 / (VAR_5/(1<<VAR_3))) & 0x7;

   VAR_10 ^= VAR_10 / FUNC_1();
   VAR_10 ^= VAR_14;
  } else {
   VAR_10 ^= ((VAR_9 & VAR_0) >> VAR_6);
  }
 }
 VAR_10 &= VAR_4;
 return VAR_10;
}

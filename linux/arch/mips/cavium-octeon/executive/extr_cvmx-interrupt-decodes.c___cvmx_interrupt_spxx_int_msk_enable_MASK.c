
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int calerr; int syncerr; int diperr; int tpaovr; int rsverr; int drwnng; int clserr; int spiovr; int abnorm; int prtnxa; } ;
union cvmx_spxx_int_msk {scalar_t__ u64; TYPE_1__ s; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;

void FUNC_5(int VAR_2)
{
 union cvmx_spxx_int_msk VAR_3;
 FUNC_4(FUNC_1(VAR_2),
         FUNC_3(FUNC_1(VAR_2)));
 VAR_3.u64 = 0;
 if (FUNC_2(VAR_0)) {

  VAR_3.s.calerr = 1;
  VAR_3.s.syncerr = 1;
  VAR_3.s.diperr = 1;
  VAR_3.s.tpaovr = 1;
  VAR_3.s.rsverr = 1;
  VAR_3.s.drwnng = 1;
  VAR_3.s.clserr = 1;
  VAR_3.s.spiovr = 1;

  VAR_3.s.abnorm = 1;
  VAR_3.s.prtnxa = 1;
 }
 if (FUNC_2(VAR_1)) {

  VAR_3.s.calerr = 1;
  VAR_3.s.syncerr = 1;
  VAR_3.s.diperr = 1;
  VAR_3.s.tpaovr = 1;
  VAR_3.s.rsverr = 1;
  VAR_3.s.drwnng = 1;
  VAR_3.s.clserr = 1;
  VAR_3.s.spiovr = 1;

  VAR_3.s.abnorm = 1;
  VAR_3.s.prtnxa = 1;
 }
 FUNC_4(FUNC_0(VAR_2), VAR_3.u64);
}

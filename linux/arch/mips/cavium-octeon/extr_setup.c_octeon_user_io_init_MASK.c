
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dismarkwblongto; int diswbfst; int wbthresh; int cvmsegenak; scalar_t__ cvmsegenau; scalar_t__ cvmsegenas; scalar_t__ istrnol2; scalar_t__ wbfltime; scalar_t__ mclkalwys; scalar_t__ csrckalwys; scalar_t__ didtto; scalar_t__ nomerge; scalar_t__ allsyncw; scalar_t__ xkioenau; scalar_t__ xkioenas; scalar_t__ xkmemenau; scalar_t__ xkmemenas; scalar_t__ dissyncws; scalar_t__ syncwsmarked; scalar_t__ iobdmascrmsb; scalar_t__ dismrgclrwbto; } ;
union octeon_cvmemctl {int u64; TYPE_1__ s; } ;
struct TYPE_6__ {int nw_tim; } ;
union cvmx_pow_nw_tim {scalar_t__ u64; TYPE_3__ s; } ;
struct TYPE_5__ {int tout_val; scalar_t__ tout_enb; } ;
union cvmx_iob_fau_timeout {scalar_t__ u64; TYPE_2__ s; } ;


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
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void FUNC_9(void)
{
 union octeon_cvmemctl VAR_9;


 VAR_9.u64 = FUNC_4();



 VAR_9.s.dismarkwblongto = 1;


 VAR_9.s.dismrgclrwbto = 0;



 VAR_9.s.iobdmascrmsb = 0;




 VAR_9.s.syncwsmarked = 0;

 VAR_9.s.dissyncws = 0;

 if (FUNC_0(VAR_3))
  VAR_9.s.diswbfst = 1;
 else
  VAR_9.s.diswbfst = 0;


 VAR_9.s.xkmemenas = 0;



 VAR_9.s.xkmemenau = 0;



 VAR_9.s.xkioenas = 0;



 VAR_9.s.xkioenau = 0;



 VAR_9.s.allsyncw = 0;



 VAR_9.s.nomerge = 0;




 VAR_9.s.didtto = 0;

 VAR_9.s.csrckalwys = 0;

 VAR_9.s.mclkalwys = 0;






 VAR_9.s.wbfltime = 0;

 VAR_9.s.istrnol2 = 0;







 if (FUNC_0(VAR_4))
  VAR_9.s.wbthresh = 4;
 else
  VAR_9.s.wbthresh = 10;






 VAR_9.s.cvmsegenak = 0;



 VAR_9.s.cvmsegenas = 0;


 VAR_9.s.cvmsegenau = 0;

 FUNC_6(VAR_9.u64);


 if (FUNC_5() == 0)
  FUNC_3("CVMSEG size: %d cache lines (%d bytes)\n",
     VAR_0,
     VAR_0 * 128);

 if (FUNC_2(VAR_8)) {
  union cvmx_iob_fau_timeout VAR_10;


  VAR_10.u64 = 0;
  VAR_10.s.tout_val = 0xfff;

  VAR_10.s.tout_enb = 0;
  FUNC_1(VAR_1, VAR_10.u64);
 }

 if ((!FUNC_0(VAR_5) &&
      !FUNC_0(VAR_7)) ||
     FUNC_0(VAR_6)) {
  union cvmx_pow_nw_tim VAR_11;

  VAR_11.u64 = 0;

  VAR_11.s.nw_tim = 3;
  FUNC_1(VAR_2, VAR_11.u64);
 }

 FUNC_8(0);
 FUNC_7(0);
}

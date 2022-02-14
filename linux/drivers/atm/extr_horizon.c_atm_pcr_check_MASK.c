
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_trafprm {unsigned int min_pcr; unsigned int max_pcr; int pcr; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int FUNC_1 (struct atm_trafprm * VAR_3, unsigned int VAR_4) {

  if (VAR_3->min_pcr == VAR_0)
    FUNC_0 (VAR_1, "luser gave min_pcr = ATM_MAX_PCR");
  else if (VAR_3->min_pcr < 0)
    FUNC_0 (VAR_1, "luser gave negative min_pcr");
  else if (VAR_3->min_pcr && VAR_3->min_pcr > VAR_4)
    FUNC_0 (VAR_1, "pcr less than min_pcr");
  else



    if ((0) && VAR_3->max_pcr == VAR_0)
      FUNC_0 (VAR_1, "luser gave max_pcr = ATM_MAX_PCR");
    else if ((VAR_3->max_pcr != VAR_0) && VAR_3->max_pcr < 0)
      FUNC_0 (VAR_1, "luser gave negative max_pcr");
    else if (VAR_3->max_pcr && VAR_3->max_pcr != VAR_0 && VAR_3->max_pcr < VAR_4)
      FUNC_0 (VAR_1, "pcr greater than max_pcr");
    else {

      FUNC_0 (VAR_1, "xBR(pcr) OK");
      return 0;
    }
  FUNC_0 (VAR_1, "pcr=%u, tp: min_pcr=%d, pcr=%d, max_pcr=%d",
   VAR_4, VAR_3->min_pcr, VAR_3->pcr, VAR_3->max_pcr);
  return -VAR_2;
}

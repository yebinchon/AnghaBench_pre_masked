
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_srtt; scalar_t__ t_rxtshift; int t_rttvar; int t_rttbest; scalar_t__ t_softerror; int t_rttmin; int t_rxtcur; scalar_t__ t_rtttime; int t_rttupdated; int t_inpcb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct tcpcb*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int) ;
 int VAR_5 ;

void
FUNC_5(struct tcpcb *VAR_6, int VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_6->t_inpcb);

 FUNC_1(VAR_5);
 VAR_6->t_rttupdated++;
 if ((VAR_6->t_srtt != 0) && (VAR_6->t_rxtshift <= VAR_3)) {







  VAR_8 = ((VAR_7 - 1) << VAR_1)
   - (VAR_6->t_srtt >> (VAR_4 - VAR_1));

  if ((VAR_6->t_srtt += VAR_8) <= 0)
   VAR_6->t_srtt = 1;
  if (VAR_8 < 0)
   VAR_8 = -VAR_8;
  VAR_8 -= VAR_6->t_rttvar >> (VAR_2 - VAR_1);
  if ((VAR_6->t_rttvar += VAR_8) <= 0)
   VAR_6->t_rttvar = 1;
  if (VAR_6->t_rttbest > VAR_6->t_srtt + VAR_6->t_rttvar)
      VAR_6->t_rttbest = VAR_6->t_srtt + VAR_6->t_rttvar;
 } else {





  VAR_6->t_srtt = VAR_7 << VAR_4;
  VAR_6->t_rttvar = VAR_7 << (VAR_2 - 1);
  VAR_6->t_rttbest = VAR_6->t_srtt + VAR_6->t_rttvar;
 }
 VAR_6->t_rtttime = 0;
 VAR_6->t_rxtshift = 0;
 FUNC_2(VAR_6->t_rxtcur, FUNC_3(VAR_6),
        FUNC_4(VAR_6->t_rttmin, VAR_7 + 2), VAR_0);
 VAR_6->t_softerror = 0;
}

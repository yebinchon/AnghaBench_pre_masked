
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rx_srtt; int rx_rttval; int rx_minrto; int rx_rto; int interval; } ;
typedef TYPE_1__ ikcpcb ;
typedef int IINT32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(ikcpcb *VAR_1, IINT32 VAR_2)
{
 IINT32 VAR_3 = 0;
 if (VAR_1->rx_srtt == 0) {
  VAR_1->rx_srtt = VAR_2;
  VAR_1->rx_rttval = VAR_2 / 2;
 } else {
  long VAR_4 = VAR_2 - VAR_1->rx_srtt;
  if (VAR_4 < 0) VAR_4 = -VAR_4;
  VAR_1->rx_rttval = (3 * VAR_1->rx_rttval + VAR_4) / 4;
  VAR_1->rx_srtt = (7 * VAR_1->rx_srtt + VAR_2) / 8;
  if (VAR_1->rx_srtt < 1) VAR_1->rx_srtt = 1;
 }
 VAR_3 = VAR_1->rx_srtt + FUNC_1(VAR_1->interval, 4 * VAR_1->rx_rttval);
 VAR_1->rx_rto = FUNC_0(VAR_1->rx_minrto, VAR_3, VAR_0);
}

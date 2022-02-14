
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * str; int * u64; } ;
struct uart_phyp_softc {size_t inbuflen; scalar_t__ protocol; int sc_mtx; TYPE_1__ phyp_inbuf; int vtermid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int *,size_t) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,size_t*,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct uart_phyp_softc *VAR_3, void *VAR_4, size_t VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;

 FUNC_3(&VAR_3->sc_mtx);
 if (VAR_3->inbuflen == 0) {
  VAR_6 = FUNC_2(VAR_1, VAR_3->vtermid,
      0, 0, 0, &VAR_3->inbuflen, &VAR_3->phyp_inbuf.u64[0],
      &VAR_3->phyp_inbuf.u64[1]);
  if (VAR_6 != VAR_2) {
   FUNC_4(&VAR_3->sc_mtx);
   return (-1);
  }
  VAR_7 = 1;
 }

 if (VAR_3->inbuflen == 0) {
  FUNC_4(&VAR_3->sc_mtx);
  return (0);
 }

 if (VAR_5 > VAR_3->inbuflen)
  VAR_5 = VAR_3->inbuflen;

 if ((VAR_3->protocol == VAR_0) && (VAR_7 == 1)) {
  VAR_3->inbuflen = VAR_3->inbuflen - 4;

  FUNC_1(&VAR_3->phyp_inbuf.str[0], &VAR_3->phyp_inbuf.str[4],
      VAR_3->inbuflen);
 }

 FUNC_0(VAR_4, VAR_3->phyp_inbuf.str, VAR_5);
 VAR_3->inbuflen -= VAR_5;
 if (VAR_3->inbuflen > 0)
  FUNC_1(&VAR_3->phyp_inbuf.str[0], &VAR_3->phyp_inbuf.str[VAR_5],
      VAR_3->inbuflen);

 FUNC_4(&VAR_3->sc_mtx);
 return (VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ipoib_dev_priv {int lock; int drain_lock; TYPE_1__* ibwc; int recv_cq; } ;
typedef int intmax_t ;
struct TYPE_4__ {scalar_t__ status; int wr_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,TYPE_1__*) ;
 int FUNC_1 (struct ipoib_dev_priv*,TYPE_1__*) ;
 int FUNC_2 (struct ipoib_dev_priv*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct ipoib_dev_priv*,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct ipoib_dev_priv *VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_5(&VAR_5->drain_lock);
 do {
  VAR_7 = FUNC_0(VAR_5->recv_cq, VAR_2, VAR_5->ibwc);
  for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6) {





   if (VAR_5->ibwc[VAR_6].status == VAR_0)
    VAR_5->ibwc[VAR_6].status = VAR_1;

   if ((VAR_5->ibwc[VAR_6].wr_id & VAR_4) == 0)
    FUNC_4("ipoib_drain_cq:  Bad wrid 0x%jX\n",
        (intmax_t)VAR_5->ibwc[VAR_6].wr_id);
   if (VAR_5->ibwc[VAR_6].wr_id & VAR_3)
    FUNC_1(VAR_5, VAR_5->ibwc + VAR_6);
   else
    FUNC_2(VAR_5, VAR_5->ibwc + VAR_6);
  }
 } while (VAR_7 == VAR_2);
 FUNC_6(&VAR_5->drain_lock);

 FUNC_5(&VAR_5->lock);
 while (FUNC_3(VAR_5, 1))
  ;

 FUNC_6(&VAR_5->lock);
}

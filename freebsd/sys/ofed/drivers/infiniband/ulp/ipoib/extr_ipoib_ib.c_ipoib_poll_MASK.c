
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int recv_cq; int drain_lock; struct ib_wc* ibwc; } ;
struct ib_wc {int wr_id; } ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,struct ib_wc*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (struct ipoib_dev_priv*,struct ib_wc*) ;
 int FUNC_3 (struct ipoib_dev_priv*,struct ib_wc*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct ipoib_dev_priv *VAR_5)
{
 int VAR_6, VAR_7;

poll_more:
 FUNC_5(&VAR_5->drain_lock);
 for (;;) {
  VAR_6 = FUNC_0(VAR_5->recv_cq, VAR_2, VAR_5->ibwc);
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   struct ib_wc *VAR_8 = VAR_5->ibwc + VAR_7;

   if ((VAR_8->wr_id & VAR_4) == 0)
    FUNC_4("ipoib_poll: Bad wr_id 0x%jX\n",
        (intmax_t)VAR_8->wr_id);
   if (VAR_8->wr_id & VAR_3)
    FUNC_2(VAR_5, VAR_8);
   else
    FUNC_3(VAR_5, VAR_8);
  }

  if (VAR_6 != VAR_2)
   break;
 }
 FUNC_6(&VAR_5->drain_lock);

 if (FUNC_1(VAR_5->recv_cq,
     VAR_0 | VAR_1) > 0)
  goto poll_more;
}

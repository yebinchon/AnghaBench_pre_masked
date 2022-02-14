
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int dev; struct ib_wc* send_wc; int send_cq; } ;
struct ib_wc {int wr_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,struct ib_wc*) ;
 int FUNC_1 (struct ipoib_dev_priv*,struct ib_wc*) ;
 int FUNC_2 (struct ipoib_dev_priv*,struct ib_wc*) ;
 int FUNC_3 (int ,struct ipoib_dev_priv*) ;

int
FUNC_4(struct ipoib_dev_priv *VAR_2, bool VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_2->send_cq, VAR_1, VAR_2->send_wc);
 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
  struct ib_wc *VAR_6 = VAR_2->send_wc + VAR_5;
  if (VAR_6->wr_id & VAR_0)
   FUNC_1(VAR_2, VAR_6);
  else
   FUNC_2(VAR_2, VAR_6);
 }

 if (VAR_3 && VAR_4 != 0)
  FUNC_3(VAR_2->dev, VAR_2);

 return VAR_4 == VAR_1;
}

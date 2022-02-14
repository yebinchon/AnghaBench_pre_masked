
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {struct ib_wc* send_wc; int dev; int send_cq; } ;
struct ib_wc {int wr_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,struct ib_wc*) ;
 int FUNC_1 (int ,struct ib_wc*) ;
 int FUNC_2 (int ,struct ib_wc*) ;

__attribute__((used)) static int FUNC_3(struct ipoib_dev_priv *VAR_2)
{
 int VAR_3, VAR_4;
 struct ib_wc *VAR_5;

 VAR_3 = FUNC_0(VAR_2->send_cq, VAR_1, VAR_2->send_wc);
 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
  VAR_5 = VAR_2->send_wc + VAR_4;
  if (VAR_5->wr_id & VAR_0)
   FUNC_1(VAR_2->dev, VAR_2->send_wc + VAR_4);
  else
   FUNC_2(VAR_2->dev, VAR_2->send_wc + VAR_4);
 }
 return VAR_3 == VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int dummy; } ;
struct ipoib_cm_rx {int qp; int dev; } ;
struct ib_cm_id {struct ipoib_cm_rx* context; } ;
struct ib_cm_event {int event; } ;





 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct ib_cm_id*,int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct ib_cm_id*,struct ib_cm_event const*) ;
 struct ipoib_dev_priv* FUNC_3 (int ) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*) ;

__attribute__((used)) static int FUNC_5(struct ib_cm_id *VAR_2,
          const struct ib_cm_event *VAR_3)
{
 struct ipoib_cm_rx *VAR_4;
 struct ipoib_dev_priv *VAR_5;

 switch (VAR_3->event) {
 case 128:
  return FUNC_2(VAR_2, VAR_3);
 case 130:
  FUNC_1(VAR_2, ((void*)0), 0);

 case 129:
  VAR_4 = VAR_2->context;
  VAR_5 = FUNC_3(VAR_4->dev);
  if (FUNC_0(VAR_4->qp, &VAR_1, VAR_0))
   FUNC_4(VAR_5, "unable to move qp to error state\n");

 default:
  return 0;
 }
}

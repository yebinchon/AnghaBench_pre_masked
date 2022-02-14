
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int pkey; int flags; int ah_reap_task; int pkey_index; int port; int ca; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (struct ipoib_dev_priv*) ;
 int FUNC_3 (struct ipoib_dev_priv*,int) ;
 int FUNC_4 (struct ipoib_dev_priv*) ;
 int FUNC_5 (struct ipoib_dev_priv*) ;
 int FUNC_6 (struct ipoib_dev_priv*,char*,int) ;
 int VAR_4 ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int ,int *) ;

int FUNC_9(struct ipoib_dev_priv *VAR_5)
{
 int VAR_6;

 if (FUNC_1(VAR_5->ca, VAR_5->port, VAR_5->pkey, &VAR_5->pkey_index)) {
  FUNC_6(VAR_5, "P_Key 0x%04x not found\n", VAR_5->pkey);
  FUNC_0(VAR_2, &VAR_5->flags);
  return -1;
 }
 FUNC_8(VAR_2, &VAR_5->flags);

 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6) {
  FUNC_6(VAR_5, "ipoib_init_qp returned %d\n", VAR_6);
  return -1;
 }

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6) {
  FUNC_6(VAR_5, "ipoib_ib_post_receives returned %d\n", VAR_6);
  FUNC_3(VAR_5, 1);
  return -1;
 }

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6) {
  FUNC_6(VAR_5, "ipoib_cm_dev_open returned %d\n", VAR_6);
  FUNC_3(VAR_5, 1);
  return -1;
 }

 FUNC_0(VAR_3, &VAR_5->flags);
 FUNC_7(VAR_4, &VAR_5->ah_reap_task, VAR_0);

 FUNC_8(VAR_1, &VAR_5->flags);

 return 0;
}

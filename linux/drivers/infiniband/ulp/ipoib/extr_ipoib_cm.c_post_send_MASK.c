
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipoib_tx_buf {int dummy; } ;
struct TYPE_4__ {unsigned int wr_id; } ;
struct TYPE_3__ {TYPE_2__ wr; } ;
struct ipoib_dev_priv {TYPE_1__ tx_wr; } ;
struct ipoib_cm_tx {int qp; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int *) ;
 int FUNC_1 (struct ipoib_dev_priv*,struct ipoib_tx_buf*) ;

__attribute__((used)) static inline int FUNC_2(struct ipoib_dev_priv *VAR_1,
       struct ipoib_cm_tx *VAR_2,
       unsigned int VAR_3,
       struct ipoib_tx_buf *VAR_4)
{
 FUNC_1(VAR_1, VAR_4);

 VAR_1->tx_wr.wr.wr_id = VAR_3 | VAR_0;

 return FUNC_0(VAR_2->qp, &VAR_1->tx_wr.wr, ((void*)0));
}

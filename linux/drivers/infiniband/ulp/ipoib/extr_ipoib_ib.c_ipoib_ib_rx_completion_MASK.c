
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int recv_napi; } ;
struct ib_cq {int dummy; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ib_cq *VAR_0, void *VAR_1)
{
 struct ipoib_dev_priv *VAR_2 = VAR_1;

 FUNC_0(&VAR_2->recv_napi);
}

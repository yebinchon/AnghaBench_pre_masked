
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ipoib_dev_priv {int flags; int pkey; int port; int ca; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ipoib_dev_priv *VAR_1)
{
 u16 VAR_2 = 0;

 if (FUNC_1(VAR_1->ca, VAR_1->port, VAR_1->pkey, &VAR_2))
  FUNC_0(VAR_0, &VAR_1->flags);
 else
  FUNC_2(VAR_0, &VAR_1->flags);
}

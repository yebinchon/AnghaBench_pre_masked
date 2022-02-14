
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipoib_dev_priv {int flags; } ;
struct ifnet {struct ipoib_dev_priv* if_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static u32 FUNC_1(struct ifnet *VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = VAR_2->if_softc;
 return FUNC_0(VAR_1, &VAR_3->flags) &&
  !FUNC_0(VAR_0, &VAR_3->flags);
}

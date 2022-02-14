
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tap_priv {int mevp; } ;
struct net_backend {scalar_t__ opaque; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct net_backend *VAR_0)
{
 struct tap_priv *VAR_1 = (struct tap_priv *)VAR_0->opaque;

 FUNC_0(VAR_1->mevp);
}

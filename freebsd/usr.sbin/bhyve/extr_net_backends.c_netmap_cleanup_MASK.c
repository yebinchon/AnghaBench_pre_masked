
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_priv {scalar_t__ nmd; scalar_t__ mevp; } ;
struct net_backend {int fd; scalar_t__ opaque; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct net_backend *VAR_0)
{
 struct netmap_priv *VAR_1 = (struct netmap_priv *)VAR_0->opaque;

 if (VAR_1->mevp) {
  FUNC_0(VAR_1->mevp);
 }
 if (VAR_1->nmd) {
  FUNC_1(VAR_1->nmd);
 }
 VAR_0->fd = -1;
}

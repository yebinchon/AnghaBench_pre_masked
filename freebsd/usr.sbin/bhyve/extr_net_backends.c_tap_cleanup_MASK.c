
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tap_priv {scalar_t__ mevp; } ;
struct net_backend {int fd; scalar_t__ opaque; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct net_backend *VAR_0)
{
 struct tap_priv *VAR_1 = (struct tap_priv *)VAR_0->opaque;

 if (VAR_1->mevp) {
  FUNC_1(VAR_1->mevp);
 }
 if (VAR_0->fd != -1) {
  FUNC_0(VAR_0->fd);
  VAR_0->fd = -1;
 }
}

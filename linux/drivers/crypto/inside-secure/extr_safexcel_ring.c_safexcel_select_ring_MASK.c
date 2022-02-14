
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rings; } ;
struct safexcel_crypto_priv {TYPE_1__ config; int ring_used; } ;


 int FUNC_0 (int *) ;

inline int FUNC_1(struct safexcel_crypto_priv *VAR_0)
{
 return (FUNC_0(&VAR_0->ring_used) % VAR_0->config.rings);
}

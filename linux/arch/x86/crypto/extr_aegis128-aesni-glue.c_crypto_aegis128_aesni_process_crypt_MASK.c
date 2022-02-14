
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {int nbytes; TYPE_4__ dst; TYPE_2__ src; } ;
struct aegis_state {int dummy; } ;
struct aegis_crypt_ops {int (* crypt_tail ) (struct aegis_state*,int,int ,int ) ;int (* crypt_blocks ) (struct aegis_state*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct skcipher_walk*,int) ;
 int FUNC_2 (struct aegis_state*,int ,int ,int ) ;
 int FUNC_3 (struct aegis_state*,int,int ,int ) ;

__attribute__((used)) static void FUNC_4(
  struct aegis_state *VAR_1, struct skcipher_walk *VAR_2,
  const struct aegis_crypt_ops *VAR_3)
{
 while (VAR_2->nbytes >= VAR_0) {
  VAR_3->crypt_blocks(VAR_1,
      FUNC_0(VAR_2->nbytes, VAR_0),
      VAR_2->src.virt.addr, VAR_2->dst.virt.addr);
  FUNC_1(VAR_2, VAR_2->nbytes % VAR_0);
 }

 if (VAR_2->nbytes) {
  VAR_3->crypt_tail(VAR_1, VAR_2->nbytes, VAR_2->src.virt.addr,
    VAR_2->dst.virt.addr);
  FUNC_1(VAR_2, 0);
 }
}

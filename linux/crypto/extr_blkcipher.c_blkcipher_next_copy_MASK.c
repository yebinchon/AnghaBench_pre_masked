
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int * addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {TYPE_4__ dst; TYPE_2__ src; int nbytes; int * page; } ;


 int FUNC_0 (struct blkcipher_walk*) ;
 int FUNC_1 (struct blkcipher_walk*) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static inline int FUNC_3(struct blkcipher_walk *VAR_0)
{
 u8 *VAR_1 = VAR_0->page;

 FUNC_0(VAR_0);
 FUNC_2(VAR_1, VAR_0->src.virt.addr, VAR_0->nbytes);
 FUNC_1(VAR_0);

 VAR_0->src.virt.addr = VAR_1;
 VAR_0->dst.virt.addr = VAR_1;

 return 0;
}

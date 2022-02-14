
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {unsigned long page; int addr; } ;
struct TYPE_8__ {unsigned long offset; void* page; } ;
struct TYPE_13__ {TYPE_5__ virt; TYPE_1__ phys; } ;
struct TYPE_10__ {unsigned long page; int addr; } ;
struct TYPE_9__ {unsigned long offset; void* page; } ;
struct TYPE_11__ {TYPE_3__ virt; TYPE_2__ phys; } ;
struct TYPE_14__ {int offset; } ;
struct skcipher_walk {int flags; TYPE_6__ src; TYPE_4__ dst; TYPE_7__ out; TYPE_7__ in; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (struct skcipher_walk*) ;
 int FUNC_3 (struct skcipher_walk*) ;

__attribute__((used)) static int FUNC_4(struct skcipher_walk *VAR_2)
{
 unsigned long VAR_3;

 VAR_2->src.phys.page = FUNC_1(&VAR_2->in);
 VAR_2->src.phys.offset = FUNC_0(VAR_2->in.offset);
 VAR_2->dst.phys.page = FUNC_1(&VAR_2->out);
 VAR_2->dst.phys.offset = FUNC_0(VAR_2->out.offset);

 if (VAR_2->flags & VAR_1)
  return 0;

 VAR_3 = VAR_2->src.phys.offset - VAR_2->dst.phys.offset;
 VAR_3 |= VAR_2->src.virt.page - VAR_2->dst.virt.page;

 FUNC_3(VAR_2);
 VAR_2->dst.virt.addr = VAR_2->src.virt.addr;

 if (VAR_3) {
  VAR_2->flags |= VAR_0;
  FUNC_2(VAR_2);
 }

 return 0;
}

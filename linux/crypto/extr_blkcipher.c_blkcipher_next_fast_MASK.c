
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
struct blkcipher_walk {int flags; TYPE_6__ src; TYPE_4__ dst; TYPE_7__ out; TYPE_7__ in; } ;
struct blkcipher_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct blkcipher_walk*) ;
 int FUNC_1 (struct blkcipher_walk*) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (TYPE_7__*) ;

__attribute__((used)) static inline int FUNC_4(struct blkcipher_desc *VAR_2,
          struct blkcipher_walk *VAR_3)
{
 unsigned long VAR_4;

 VAR_3->src.phys.page = FUNC_3(&VAR_3->in);
 VAR_3->src.phys.offset = FUNC_2(VAR_3->in.offset);
 VAR_3->dst.phys.page = FUNC_3(&VAR_3->out);
 VAR_3->dst.phys.offset = FUNC_2(VAR_3->out.offset);

 if (VAR_3->flags & VAR_1)
  return 0;

 VAR_4 = VAR_3->src.phys.offset - VAR_3->dst.phys.offset;
 VAR_4 |= VAR_3->src.virt.page - VAR_3->dst.virt.page;

 FUNC_1(VAR_3);
 VAR_3->dst.virt.addr = VAR_3->src.virt.addr;

 if (VAR_4) {
  VAR_3->flags |= VAR_0;
  FUNC_0(VAR_3);
 }

 return 0;
}

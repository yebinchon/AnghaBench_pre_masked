
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct skcipher_walk_buffer {unsigned int len; int * buffer; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {int flags; unsigned int alignmask; unsigned int nbytes; int in; TYPE_4__ src; TYPE_2__ dst; int * buffer; int * page; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 void* FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int ,int *,unsigned int,int ) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (struct skcipher_walk*,struct skcipher_walk_buffer*) ;
 int FUNC_6 (struct skcipher_walk*,int ) ;
 int FUNC_7 (struct skcipher_walk*) ;

__attribute__((used)) static int FUNC_8(struct skcipher_walk *VAR_3, unsigned int VAR_4)
{
 bool VAR_5 = VAR_3->flags & VAR_1;
 unsigned VAR_6 = VAR_3->alignmask;
 struct skcipher_walk_buffer *VAR_7;
 unsigned VAR_8;
 unsigned VAR_9;
 u8 *VAR_10;
 void *VAR_11;

 if (!VAR_5) {
  if (!VAR_3->buffer)
   VAR_3->buffer = VAR_3->page;
  VAR_10 = VAR_3->buffer;
  if (VAR_10)
   goto ok;
 }


 VAR_8 = FUNC_1() - 1;
 VAR_9 = VAR_4;

 if (VAR_5) {

  VAR_8 &= (sizeof(*VAR_7) ^ (sizeof(*VAR_7) - 1)) >> 1;
  VAR_9 += sizeof(*VAR_7);
 }


 VAR_9 += VAR_6 & ~VAR_8;


 VAR_9 += (VAR_4 - 1) & ~(VAR_6 | VAR_8);

 VAR_11 = FUNC_2(VAR_9, FUNC_7(VAR_3));
 if (!VAR_11)
  return FUNC_6(VAR_3, -VAR_0);

 if (VAR_5) {
  VAR_7 = VAR_11;
  VAR_7->len = VAR_4;
  FUNC_5(VAR_3, VAR_7);
  VAR_10 = VAR_7->buffer;
 } else {
  VAR_3->buffer = VAR_11;
  VAR_10 = VAR_11;
 }

ok:
 VAR_3->dst.virt.addr = FUNC_0(VAR_10, VAR_6 + 1);
 VAR_3->dst.virt.addr = FUNC_4(VAR_3->dst.virt.addr, VAR_4);
 VAR_3->src.virt.addr = VAR_3->dst.virt.addr;

 FUNC_3(VAR_3->src.virt.addr, &VAR_3->in, VAR_4, 0);

 VAR_3->nbytes = VAR_4;
 VAR_3->flags |= VAR_2;

 return 0;
}

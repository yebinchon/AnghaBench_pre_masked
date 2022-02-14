
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ addr; } ;
struct TYPE_4__ {TYPE_1__ virt; } ;
struct skcipher_walk {unsigned int nbytes; unsigned int total; int flags; scalar_t__ page; scalar_t__ buffer; scalar_t__ iv; scalar_t__ oiv; unsigned int ivsize; int out; int in; TYPE_2__ dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int *,int,unsigned int) ;
 unsigned int FUNC_7 (struct skcipher_walk*,unsigned int) ;
 int FUNC_8 (struct skcipher_walk*) ;
 int FUNC_9 (struct skcipher_walk*) ;
 int FUNC_10 (struct skcipher_walk*) ;
 int FUNC_11 (struct skcipher_walk*) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct skcipher_walk *VAR_7, int VAR_8)
{
 unsigned int VAR_9 = VAR_7->nbytes;
 unsigned int VAR_10 = 0;

 if (!VAR_9)
  goto finish;

 if (FUNC_3(VAR_8 >= 0)) {
  VAR_9 -= VAR_8;
  VAR_10 = VAR_7->total - VAR_9;
 }

 if (FUNC_3(!(VAR_7->flags & (VAR_4 |
        VAR_6 |
        VAR_2 |
        VAR_3)))) {
unmap_src:
  FUNC_10(VAR_7);
 } else if (VAR_7->flags & VAR_3) {
  FUNC_9(VAR_7);
  goto unmap_src;
 } else if (VAR_7->flags & VAR_2) {
  FUNC_8(VAR_7);
  FUNC_4(VAR_7->dst.virt.addr, VAR_7->page, VAR_9);
  FUNC_9(VAR_7);
 } else if (FUNC_12(VAR_7->flags & VAR_6)) {
  if (VAR_8 > 0) {






   VAR_8 = -VAR_1;
   VAR_10 = 0;
  } else
   VAR_9 = FUNC_7(VAR_7, VAR_9);
 }

 if (VAR_8 > 0)
  VAR_8 = 0;

 VAR_7->total = VAR_10;
 VAR_7->nbytes = 0;

 FUNC_5(&VAR_7->in, VAR_9);
 FUNC_5(&VAR_7->out, VAR_9);
 FUNC_6(&VAR_7->in, 0, VAR_10);
 FUNC_6(&VAR_7->out, 1, VAR_10);

 if (VAR_10) {
  FUNC_0(VAR_7->flags & VAR_5 ?
        VAR_0 : 0);
  return FUNC_11(VAR_7);
 }

finish:

 if (!((unsigned long)VAR_7->buffer | (unsigned long)VAR_7->page))
  goto out;

 if (VAR_7->flags & VAR_4)
  goto out;

 if (VAR_7->iv != VAR_7->oiv)
  FUNC_4(VAR_7->oiv, VAR_7->iv, VAR_7->ivsize);
 if (VAR_7->buffer != VAR_7->page)
  FUNC_2(VAR_7->buffer);
 if (VAR_7->page)
  FUNC_1((unsigned long)VAR_7->page);

out:
 return VAR_8;
}

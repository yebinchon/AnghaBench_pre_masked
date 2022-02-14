
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct skcipher_walk_buffer {scalar_t__ len; int * data; } ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int * addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {scalar_t__ nbytes; int flags; scalar_t__ stride; int * page; TYPE_4__ dst; TYPE_2__ src; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct skcipher_walk_buffer* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct skcipher_walk*) ;
 int FUNC_4 (struct skcipher_walk*,struct skcipher_walk_buffer*) ;
 int FUNC_5 (struct skcipher_walk*) ;
 int FUNC_6 (struct skcipher_walk*) ;

__attribute__((used)) static int FUNC_7(struct skcipher_walk *VAR_3)
{
 struct skcipher_walk_buffer *VAR_4;
 u8 *VAR_5 = VAR_3->page;

 FUNC_3(VAR_3);
 FUNC_1(VAR_5, VAR_3->src.virt.addr, VAR_3->nbytes);
 FUNC_5(VAR_3);

 VAR_3->src.virt.addr = VAR_5;
 VAR_3->dst.virt.addr = VAR_5;

 if (!(VAR_3->flags & VAR_2))
  return 0;

 VAR_4 = FUNC_0(sizeof(*VAR_4), FUNC_6(VAR_3));
 if (!VAR_4)
  return -VAR_0;

 VAR_4->data = VAR_3->page;
 VAR_4->len = VAR_3->nbytes;
 FUNC_4(VAR_3, VAR_4);

 if (FUNC_2(VAR_3->page) + VAR_3->nbytes + VAR_3->stride >
     VAR_1)
  VAR_3->page = ((void*)0);
 else
  VAR_3->page += VAR_3->nbytes;

 return 0;
}

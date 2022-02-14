
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sg; } ;
struct blkcipher_walk {unsigned long alignmask; int * page; TYPE_1__ out; TYPE_1__ in; scalar_t__ iv; int * buffer; int total; int nbytes; } ;
struct blkcipher_desc {scalar_t__ info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct blkcipher_walk*) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (unsigned long) ;

__attribute__((used)) static int FUNC_6(struct blkcipher_desc *VAR_1,
    struct blkcipher_walk *VAR_2)
{
 if (FUNC_0(FUNC_3()))
  return -VAR_0;

 VAR_2->iv = VAR_1->info;
 VAR_2->nbytes = VAR_2->total;
 if (FUNC_5(!VAR_2->total))
  return 0;

 VAR_2->buffer = ((void*)0);
 if (FUNC_5(((unsigned long)VAR_2->iv & VAR_2->alignmask))) {
  int VAR_3 = FUNC_1(VAR_2);
  if (VAR_3)
   return VAR_3;
 }

 FUNC_4(&VAR_2->in, VAR_2->in.sg);
 FUNC_4(&VAR_2->out, VAR_2->out.sg);
 VAR_2->page = ((void*)0);

 return FUNC_2(VAR_1, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blkcipher_walk {int nbytes; scalar_t__ total; int flags; scalar_t__ iv; scalar_t__ buffer; scalar_t__ page; int ivsize; int out; int in; } ;
struct blkcipher_desc {scalar_t__ info; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct blkcipher_walk*,unsigned int) ;
 int FUNC_2 (struct blkcipher_walk*,unsigned int) ;
 int FUNC_3 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (scalar_t__,scalar_t__,int ) ;
 int FUNC_9 (int *,int,int) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct blkcipher_desc *VAR_2,
   struct blkcipher_walk *VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 bool VAR_6;

 if (FUNC_10(VAR_4 < 0))
  goto finish;

 VAR_5 = VAR_3->nbytes - VAR_4;
 VAR_3->total -= VAR_5;
 VAR_6 = (VAR_3->total != 0);

 if (FUNC_7(!(VAR_3->flags & VAR_0))) {
  FUNC_1(VAR_3, VAR_5);
 } else {
  if (FUNC_0(VAR_4)) {

   VAR_4 = -VAR_1;
   goto finish;
  }
  FUNC_2(VAR_3, VAR_5);
 }

 FUNC_9(&VAR_3->in, 0, VAR_6);
 FUNC_9(&VAR_3->out, 1, VAR_6);

 if (VAR_6) {
  FUNC_4(VAR_2->flags);
  return FUNC_3(VAR_2, VAR_3);
 }
 VAR_4 = 0;
finish:
 VAR_3->nbytes = 0;
 if (VAR_3->iv != VAR_2->info)
  FUNC_8(VAR_2->info, VAR_3->iv, VAR_3->ivsize);
 if (VAR_3->buffer != VAR_3->page)
  FUNC_6(VAR_3->buffer);
 if (VAR_3->page)
  FUNC_5((unsigned long)VAR_3->page);
 return VAR_4;
}

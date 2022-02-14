
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_hash_reqctx {int finup; int total; int bufcnt; int skip; int sg_len; int sgl; int sg; TYPE_1__* dd; scalar_t__ buffer; } ;
struct ahash_request {int nbytes; int src; } ;
struct TYPE_2__ {scalar_t__ xmit_buf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 struct s5p_hash_reqctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (struct s5p_hash_reqctx*,int ,int,int) ;
 int FUNC_4 (scalar_t__,int ,int,int,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct ahash_request *VAR_1, bool VAR_2)
{
 struct s5p_hash_reqctx *VAR_3 = FUNC_1(VAR_1);
 bool VAR_4 = VAR_3->finup;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8;

 if (VAR_2)
  VAR_7 = VAR_1->nbytes;
 else
  VAR_7 = 0;

 VAR_3->total = VAR_7 + VAR_3->bufcnt;
 if (!VAR_3->total)
  return 0;

 if (VAR_7 && (!FUNC_0(VAR_3->bufcnt, VAR_0))) {

  int VAR_9 = VAR_0 - VAR_3->bufcnt % VAR_0;

  if (VAR_9 > VAR_7)
   VAR_9 = VAR_7;

  FUNC_4(VAR_3->buffer + VAR_3->bufcnt, VAR_1->src,
      0, VAR_9, 0);
  VAR_3->bufcnt += VAR_9;
  VAR_7 -= VAR_9;
  VAR_3->skip = VAR_9;
 } else {
  VAR_3->skip = 0;
 }

 if (VAR_3->bufcnt)
  FUNC_2(VAR_3->dd->xmit_buf, VAR_3->buffer, VAR_3->bufcnt);

 VAR_5 = VAR_3->total;
 if (VAR_4) {
  VAR_6 = 0;
 } else {
  if (FUNC_0(VAR_5, VAR_0))
   VAR_5 -= VAR_0;
  else
   VAR_5 -= VAR_5 & (VAR_0 - 1);

  VAR_6 = VAR_3->total - VAR_5;


  FUNC_4(VAR_3->buffer, VAR_1->src,
      VAR_1->nbytes - VAR_6,
      VAR_6, 0);
 }

 if (VAR_5 > VAR_0) {
  VAR_8 = FUNC_3(VAR_3, VAR_1->src, VAR_7 - VAR_6,
        VAR_4);
  if (VAR_8)
   return VAR_8;
 } else {

  if (FUNC_7(!VAR_3->bufcnt)) {

   FUNC_4(VAR_3->dd->xmit_buf, VAR_1->src,
       0, VAR_5, 0);
  }

  FUNC_5(VAR_3->sgl, 1);
  FUNC_6(VAR_3->sgl, VAR_3->dd->xmit_buf, VAR_5);

  VAR_3->sg = VAR_3->sgl;
  VAR_3->sg_len = 1;
 }

 VAR_3->bufcnt = VAR_6;
 if (!VAR_4)
  VAR_3->total = VAR_5;

 return 0;
}

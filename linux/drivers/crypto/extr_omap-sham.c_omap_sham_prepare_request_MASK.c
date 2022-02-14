
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_sham_reqctx {int flags; int total; int bufcnt; int offset; int sg_len; scalar_t__ buffer; int sgl; int sg; TYPE_1__* dd; } ;
struct ahash_request {int nbytes; int src; } ;
struct TYPE_2__ {scalar_t__ xmit_buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 struct omap_sham_reqctx* FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (struct omap_sham_reqctx*) ;
 int FUNC_5 (scalar_t__,scalar_t__,int) ;
 int FUNC_6 (int ,int,int,int,struct omap_sham_reqctx*) ;
 int FUNC_7 (scalar_t__,int ,int,int,int ) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_11(struct ahash_request *VAR_1, bool VAR_2)
{
 struct omap_sham_reqctx *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;
 int VAR_5;
 int VAR_6;
 bool VAR_7 = VAR_3->flags & FUNC_0(VAR_0);
 int VAR_8, VAR_9;

 VAR_4 = FUNC_4(VAR_3);

 if (VAR_2)
  VAR_6 = VAR_1->nbytes;
 else
  VAR_6 = 0;

 VAR_3->total = VAR_6 + VAR_3->bufcnt;

 if (!VAR_3->total)
  return 0;

 if (VAR_6 && (!FUNC_2(VAR_3->bufcnt, VAR_4))) {
  int VAR_10 = VAR_4 - VAR_3->bufcnt % VAR_4;

  if (VAR_10 > VAR_6)
   VAR_10 = VAR_6;
  FUNC_7(VAR_3->buffer + VAR_3->bufcnt, VAR_1->src,
      0, VAR_10, 0);
  VAR_3->bufcnt += VAR_10;
  VAR_6 -= VAR_10;
  VAR_3->offset = VAR_10;
 }

 if (VAR_3->bufcnt)
  FUNC_5(VAR_3->dd->xmit_buf, VAR_3->buffer, VAR_3->bufcnt);

 VAR_5 = FUNC_6(VAR_1->src, VAR_6, VAR_4, VAR_7, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_8 = VAR_3->total;

 if (!FUNC_2(VAR_8, VAR_4)) {
  if (VAR_7)
   VAR_8 = FUNC_1(VAR_8, VAR_4) * VAR_4;
  else
   VAR_8 = VAR_8 / VAR_4 * VAR_4;
 } else if (!VAR_7) {
  VAR_8 -= VAR_4;
 }

 VAR_9 = VAR_3->total - VAR_8;
 if (VAR_9 < 0)
  VAR_9 = 0;

 if (VAR_3->bufcnt && VAR_6) {

  FUNC_9(VAR_3->sgl, 2);
  FUNC_10(VAR_3->sgl, VAR_3->dd->xmit_buf, VAR_3->bufcnt);

  FUNC_8(VAR_3->sgl, 2, VAR_1->src);

  VAR_3->sg = VAR_3->sgl;

  VAR_3->sg_len++;
 } else if (VAR_3->bufcnt) {

  FUNC_9(VAR_3->sgl, 1);
  FUNC_10(VAR_3->sgl, VAR_3->dd->xmit_buf, VAR_8);

  VAR_3->sg = VAR_3->sgl;

  VAR_3->sg_len = 1;
 }

 if (VAR_9) {
  int VAR_11 = 0;

  if (VAR_9 > VAR_1->nbytes) {
   FUNC_5(VAR_3->buffer, VAR_3->buffer + VAR_8,
          VAR_9 - VAR_1->nbytes);
   VAR_11 = VAR_9 - VAR_1->nbytes;
  }

  if (VAR_1->nbytes) {
   FUNC_7(VAR_3->buffer + VAR_11,
       VAR_1->src,
       VAR_11 + VAR_1->nbytes -
       VAR_9, VAR_9, 0);
  }

  VAR_3->bufcnt = VAR_9;
 } else {
  VAR_3->bufcnt = 0;
 }

 if (!VAR_7)
  VAR_3->total = VAR_8;

 return 0;
}

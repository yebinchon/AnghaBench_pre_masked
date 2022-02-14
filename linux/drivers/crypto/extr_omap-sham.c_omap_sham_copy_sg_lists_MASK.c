
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int length; int offset; } ;
struct omap_sham_reqctx {int offset; int bufcnt; TYPE_1__* dd; scalar_t__ sg_len; struct scatterlist* sg; } ;
struct TYPE_2__ {int flags; int xmit_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct scatterlist* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct scatterlist*,int) ;
 int FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct scatterlist*) ;
 struct scatterlist* FUNC_5 (struct scatterlist*) ;
 int FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (struct scatterlist*,int ,int ) ;
 int FUNC_8 (struct scatterlist*,int ,int,int ) ;

__attribute__((used)) static int FUNC_9(struct omap_sham_reqctx *VAR_3,
       struct scatterlist *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = FUNC_4(VAR_4);
 struct scatterlist *VAR_8;
 int VAR_9 = VAR_3->offset;

 if (VAR_3->bufcnt)
  VAR_7++;

 VAR_3->sg = FUNC_0(VAR_7, sizeof(*VAR_4), VAR_2);
 if (!VAR_3->sg)
  return -VAR_0;

 FUNC_2(VAR_3->sg, VAR_7);

 VAR_8 = VAR_3->sg;

 VAR_3->sg_len = 0;

 if (VAR_3->bufcnt) {
  FUNC_7(VAR_8, VAR_3->dd->xmit_buf, VAR_3->bufcnt);
  VAR_8 = FUNC_5(VAR_8);
  VAR_3->sg_len++;
 }

 while (VAR_4 && VAR_6) {
  int VAR_10 = VAR_4->length - VAR_9;

  if (VAR_9) {
   VAR_9 -= VAR_4->length;
   if (VAR_9 < 0)
    VAR_9 = 0;
  }

  if (VAR_6 < VAR_10)
   VAR_10 = VAR_6;

  if (VAR_10 > 0) {
   VAR_6 -= VAR_10;
   FUNC_8(VAR_8, FUNC_6(VAR_4), VAR_10, VAR_4->offset);
   if (VAR_6 <= 0)
    FUNC_3(VAR_8);
   VAR_8 = FUNC_5(VAR_8);
   VAR_3->sg_len++;
  }

  VAR_4 = FUNC_5(VAR_4);
 }

 FUNC_1(VAR_1, &VAR_3->dd->flags);

 VAR_3->bufcnt = 0;

 return 0;
}

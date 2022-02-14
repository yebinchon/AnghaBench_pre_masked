
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct omap_sham_reqctx {int bufcnt; int sg_len; int offset; TYPE_1__* dd; int sgl; int sg; scalar_t__ total; } ;
struct TYPE_2__ {int flags; int xmit_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (void*,struct scatterlist*,int ,scalar_t__,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,void*,int) ;

__attribute__((used)) static int FUNC_8(struct omap_sham_reqctx *VAR_3,
         struct scatterlist *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 void *VAR_8;
 int VAR_9;

 VAR_9 = VAR_6 + VAR_3->bufcnt;

 VAR_7 = FUNC_1(VAR_3->total);

 VAR_8 = (void *)FUNC_0(VAR_2, VAR_7);
 if (!VAR_8) {
  FUNC_3("Couldn't allocate pages for unaligned cases.\n");
  return -VAR_0;
 }

 if (VAR_3->bufcnt)
  FUNC_2(VAR_8, VAR_3->dd->xmit_buf, VAR_3->bufcnt);

 FUNC_4(VAR_8 + VAR_3->bufcnt, VAR_4, VAR_3->offset,
     VAR_3->total - VAR_3->bufcnt, 0);
 FUNC_6(VAR_3->sgl, 1);
 FUNC_7(VAR_3->sgl, VAR_8, VAR_9);
 VAR_3->sg = VAR_3->sgl;
 FUNC_5(VAR_1, &VAR_3->dd->flags);
 VAR_3->sg_len = 1;
 VAR_3->bufcnt = 0;
 VAR_3->offset = 0;

 return 0;
}

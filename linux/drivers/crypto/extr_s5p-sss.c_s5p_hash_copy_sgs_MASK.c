
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct s5p_hash_reqctx {unsigned int bufcnt; int error; int sg_len; TYPE_1__* dd; int skip; int sgl; int sg; } ;
struct TYPE_2__ {int hash_flags; int xmit_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (void*,int ,int) ;
 int FUNC_4 (void*,struct scatterlist*,int ,unsigned int,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,void*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct s5p_hash_reqctx *VAR_3,
        struct scatterlist *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6, VAR_7;
 void *VAR_8;

 VAR_7 = VAR_5 + VAR_3->bufcnt;
 VAR_6 = FUNC_2(VAR_7);

 VAR_8 = (void *)FUNC_0(VAR_1, VAR_6);
 if (!VAR_8) {
  FUNC_1(VAR_3->dd->dev, "alloc pages for unaligned case.\n");
  VAR_3->error = 1;
  return -VAR_0;
 }

 if (VAR_3->bufcnt)
  FUNC_3(VAR_8, VAR_3->dd->xmit_buf, VAR_3->bufcnt);

 FUNC_4(VAR_8 + VAR_3->bufcnt, VAR_4, VAR_3->skip,
     VAR_5, 0);
 FUNC_6(VAR_3->sgl, 1);
 FUNC_7(VAR_3->sgl, VAR_8, VAR_7);
 VAR_3->sg = VAR_3->sgl;
 VAR_3->sg_len = 1;
 VAR_3->bufcnt = 0;
 VAR_3->skip = 0;
 FUNC_5(VAR_2, &VAR_3->dd->hash_flags);

 return 0;
}

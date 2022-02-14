
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {unsigned int length; } ;
struct s5p_hash_reqctx {unsigned int skip; unsigned int sg_len; struct scatterlist* sg; struct scatterlist* sgl; scalar_t__ bufcnt; TYPE_1__* dd; } ;
struct TYPE_2__ {int xmit_buf; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct s5p_hash_reqctx*,struct scatterlist*,unsigned int) ;
 int FUNC_2 (struct s5p_hash_reqctx*,struct scatterlist*,unsigned int) ;
 int FUNC_3 (struct scatterlist*,int,struct scatterlist*) ;
 int FUNC_4 (struct scatterlist*,int) ;
 struct scatterlist* FUNC_5 (struct scatterlist*) ;
 int FUNC_6 (struct scatterlist*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct s5p_hash_reqctx *VAR_1,
    struct scatterlist *VAR_2,
    unsigned int VAR_3, bool VAR_4)
{
 unsigned int VAR_5 = VAR_1->skip, VAR_6 = VAR_3, VAR_7 = 0;
 bool VAR_8 = 1, VAR_9 = 1;
 struct scatterlist *VAR_10 = VAR_2;

 if (!VAR_2 || !VAR_2->length || !VAR_3)
  return 0;

 if (VAR_5 || !VAR_4)
  VAR_9 = 0;

 while (VAR_6 > 0 && VAR_10) {
  VAR_7++;
  if (VAR_5 >= VAR_10->length) {
   VAR_5 -= VAR_10->length;
   if (!VAR_10->length) {
    VAR_8 = 0;
    break;
   }
  } else {
   if (!FUNC_0(VAR_10->length - VAR_5, VAR_0)) {
    VAR_8 = 0;
    break;
   }

   if (VAR_6 < VAR_10->length - VAR_5) {
    VAR_9 = 0;
    break;
   }

   VAR_6 -= VAR_10->length - VAR_5;
   VAR_5 = 0;
  }

  VAR_10 = FUNC_5(VAR_10);
 }

 if (!VAR_8)
  return FUNC_2(VAR_1, VAR_2, VAR_3);
 else if (!VAR_9)
  return FUNC_1(VAR_1, VAR_2, VAR_3);





 if (VAR_1->bufcnt) {
  VAR_1->sg_len = VAR_7;
  FUNC_4(VAR_1->sgl, 2);
  FUNC_6(VAR_1->sgl, VAR_1->dd->xmit_buf, VAR_1->bufcnt);
  FUNC_3(VAR_1->sgl, 2, VAR_2);
  VAR_1->sg = VAR_1->sgl;
  VAR_1->sg_len++;
 } else {
  VAR_1->sg = VAR_2;
  VAR_1->sg_len = VAR_7;
 }

 return 0;
}

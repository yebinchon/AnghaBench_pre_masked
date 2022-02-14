
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct scatterlist {int dummy; } ;
struct img_hash_request_ctx {size_t offset; int bufcnt; TYPE_1__* sg; scalar_t__ sent; scalar_t__ buffer; int nents; int sgfirst; int flags; } ;
struct img_hash_dev {scalar_t__ err; int dev; int req; } ;
struct TYPE_3__ {size_t length; } ;


 int VAR_0 ;
 struct img_hash_request_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct img_hash_dev*) ;
 int FUNC_3 (struct img_hash_dev*,int *,size_t,int ) ;
 scalar_t__ FUNC_4 (struct img_hash_dev*,struct scatterlist*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct scatterlist*,int *,size_t) ;
 void* FUNC_7 (TYPE_1__*) ;
 void* FUNC_8 (int ,int ,scalar_t__,size_t,scalar_t__) ;
 int * FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_1)
{
 struct img_hash_dev *VAR_2 = (struct img_hash_dev *)VAR_1;
 struct img_hash_request_ctx *VAR_3 = FUNC_0(VAR_2->req);
 u8 *VAR_4;
 size_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 struct scatterlist VAR_10;

 if (!VAR_2->req || !VAR_3->sg)
  return;

 VAR_4 = FUNC_9(VAR_3->sg);
 VAR_5 = VAR_3->sg->length - VAR_3->offset;
 VAR_6 = VAR_5 % 4;
 VAR_7 = (VAR_5 / 4);

 if (VAR_7) {
  FUNC_6(&VAR_10, VAR_4 + VAR_3->offset, VAR_7 * 4);
  if (FUNC_4(VAR_2, &VAR_10)) {
   FUNC_1(VAR_2->dev, "DMA failed, falling back to CPU");
   VAR_3->flags |= VAR_0;
   VAR_2->err = 0;
   FUNC_3(VAR_2, VAR_4 + VAR_3->offset,
       VAR_7 * 4, 0);
   VAR_3->sent += VAR_7 * 4;
   VAR_7 = 0;
  } else {
   VAR_3->sent += VAR_7 * 4;
  }
 }

 if (VAR_6) {
  VAR_3->bufcnt = FUNC_8(VAR_3->sgfirst, VAR_3->nents,
       VAR_3->buffer, VAR_6, VAR_3->sent);
  VAR_9 = 0;
  VAR_3->sg = FUNC_7(VAR_3->sg);
  while (VAR_3->sg && (VAR_3->bufcnt < 4)) {
   VAR_8 = VAR_3->sg->length;
   if (FUNC_5(VAR_8 > (4 - VAR_3->bufcnt)))
    VAR_8 = 4 - VAR_3->bufcnt;
   VAR_9 = FUNC_8(VAR_3->sgfirst, VAR_3->nents,
       VAR_3->buffer + VAR_3->bufcnt, VAR_8,
     VAR_3->sent + VAR_3->bufcnt);
   VAR_3->bufcnt += VAR_9;
   if (VAR_9 >= VAR_3->sg->length) {
    VAR_3->sg = FUNC_7(VAR_3->sg);
    VAR_9 = 0;
   }
  }

  VAR_3->sent += VAR_3->bufcnt;
  VAR_3->offset = VAR_9;

  if (!VAR_7)
   FUNC_2(VAR_2);
 } else {
  VAR_3->offset = 0;
  VAR_3->sg = FUNC_7(VAR_3->sg);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mtk_sha_reqctx {scalar_t__ bufcnt; scalar_t__ total; size_t offset; scalar_t__ buffer; TYPE_1__* sg; } ;
struct TYPE_4__ {size_t length; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (size_t,scalar_t__) ;
 int FUNC_1 (scalar_t__,TYPE_1__*,size_t,size_t,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct mtk_sha_reqctx *VAR_1)
{
 size_t VAR_2;

 while ((VAR_1->bufcnt < VAR_0) && VAR_1->total) {
  VAR_2 = FUNC_0(VAR_1->sg->length - VAR_1->offset, VAR_1->total);
  VAR_2 = FUNC_0(VAR_2, VAR_0 - VAR_1->bufcnt);

  if (VAR_2 <= 0) {






   if ((VAR_1->sg->length == 0) && !FUNC_2(VAR_1->sg)) {
    VAR_1->sg = FUNC_3(VAR_1->sg);
    continue;
   } else {
    break;
   }
  }

  FUNC_1(VAR_1->buffer + VAR_1->bufcnt, VAR_1->sg,
      VAR_1->offset, VAR_2, 0);

  VAR_1->bufcnt += VAR_2;
  VAR_1->offset += VAR_2;
  VAR_1->total -= VAR_2;

  if (VAR_1->offset == VAR_1->sg->length) {
   VAR_1->sg = FUNC_3(VAR_1->sg);
   if (VAR_1->sg)
    VAR_1->offset = 0;
   else
    VAR_1->total = 0;
  }
 }

 return 0;
}

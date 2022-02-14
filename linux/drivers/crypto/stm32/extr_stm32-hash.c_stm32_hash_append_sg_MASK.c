
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stm32_hash_request_ctx {scalar_t__ bufcnt; scalar_t__ buflen; scalar_t__ total; size_t offset; scalar_t__ buffer; TYPE_1__* sg; } ;
struct TYPE_4__ {size_t length; } ;


 size_t FUNC_0 (size_t,scalar_t__) ;
 int FUNC_1 (scalar_t__,TYPE_1__*,size_t,size_t,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct stm32_hash_request_ctx *VAR_0)
{
 size_t VAR_1;

 while ((VAR_0->bufcnt < VAR_0->buflen) && VAR_0->total) {
  VAR_1 = FUNC_0(VAR_0->sg->length - VAR_0->offset, VAR_0->total);
  VAR_1 = FUNC_0(VAR_1, VAR_0->buflen - VAR_0->bufcnt);

  if (VAR_1 <= 0) {
   if ((VAR_0->sg->length == 0) && !FUNC_2(VAR_0->sg)) {
    VAR_0->sg = FUNC_3(VAR_0->sg);
    continue;
   } else {
    break;
   }
  }

  FUNC_1(VAR_0->buffer + VAR_0->bufcnt, VAR_0->sg,
      VAR_0->offset, VAR_1, 0);

  VAR_0->bufcnt += VAR_1;
  VAR_0->offset += VAR_1;
  VAR_0->total -= VAR_1;

  if (VAR_0->offset == VAR_0->sg->length) {
   VAR_0->sg = FUNC_3(VAR_0->sg);
   if (VAR_0->sg)
    VAR_0->offset = 0;
   else
    VAR_0->total = 0;
  }
 }
}

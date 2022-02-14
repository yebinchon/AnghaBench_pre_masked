
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int length; } ;
struct TYPE_2__ {struct scatterlist* dst; struct scatterlist* src; } ;
struct brcm_message {TYPE_1__ spu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct scatterlist* FUNC_0 (struct scatterlist*) ;

__attribute__((used)) static bool FUNC_1(struct brcm_message *VAR_4)
{
 struct scatterlist *VAR_5;

 if (!VAR_4->spu.src || !VAR_4->spu.dst)
  return 0;
 for (VAR_5 = VAR_4->spu.src; VAR_5; VAR_5 = FUNC_0(VAR_5)) {
  if (VAR_5->length & 0xf) {
   if (VAR_5->length > VAR_3)
    return 0;
  } else {
   if (VAR_5->length > (VAR_2 * 16))
    return 0;
  }
 }
 for (VAR_5 = VAR_4->spu.dst; VAR_5; VAR_5 = FUNC_0(VAR_5)) {
  if (VAR_5->length & 0xf) {
   if (VAR_5->length > VAR_0)
    return 0;
  } else {
   if (VAR_5->length > (VAR_1 * 16))
    return 0;
  }
 }

 return 1;
}

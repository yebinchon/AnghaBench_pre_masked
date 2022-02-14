
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scatterlist {unsigned int length; } ;
struct TYPE_2__ {struct scatterlist* dst; struct scatterlist* src; } ;
struct brcm_message {TYPE_1__ spu; } ;


 unsigned int VAR_0 ;
 struct scatterlist* FUNC_0 (struct scatterlist*) ;

__attribute__((used)) static u32 FUNC_1(struct brcm_message *VAR_1)
{
 u32 VAR_2 = 0;
 unsigned int VAR_3 = 0;
 struct scatterlist *VAR_4 = VAR_1->spu.src, *VAR_5 = VAR_1->spu.dst;

 while (VAR_4 || VAR_5) {
  if (VAR_4) {
   VAR_2++;
   VAR_3 = VAR_4->length;
   VAR_4 = FUNC_0(VAR_4);
  } else
   VAR_3 = VAR_0;

  while (VAR_3 && VAR_5) {
   VAR_2++;
   if (VAR_5->length < VAR_3)
    VAR_3 -= VAR_5->length;
   else
    VAR_3 = 0;
   VAR_5 = FUNC_0(VAR_5);
  }
 }

 return VAR_2;
}

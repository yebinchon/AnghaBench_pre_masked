
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct scatterlist {int dummy; } ;
struct TYPE_2__ {struct scatterlist* dst; struct scatterlist* src; } ;
struct brcm_message {TYPE_1__ spu; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,int ,void**,scalar_t__*,void*,void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (void*,int ) ;
 int FUNC_8 (struct scatterlist*) ;
 unsigned int FUNC_9 (struct scatterlist*) ;
 struct scatterlist* FUNC_10 (struct scatterlist*) ;
 int FUNC_11 () ;

__attribute__((used)) static void *FUNC_12(struct brcm_message *VAR_1, u32 VAR_2,
         u32 VAR_3, void *VAR_4, u32 VAR_5,
         void *VAR_6, void *VAR_7)
{
 u64 VAR_8;
 u32 VAR_9 = 0;
 void *VAR_10 = VAR_4;
 unsigned int VAR_11 = 0;
 struct scatterlist *VAR_12 = VAR_1->spu.src, *VAR_13 = VAR_1->spu.dst;

 while (VAR_12 || VAR_13) {
  if (VAR_12) {
   if (FUNC_9(VAR_12) & 0xf)
    VAR_8 = FUNC_6(FUNC_8(VAR_12),
           FUNC_9(VAR_12));
   else
    VAR_8 = FUNC_4(FUNC_8(VAR_12),
            FUNC_9(VAR_12)/16);
   FUNC_1(VAR_9, VAR_2, VAR_3,
          VAR_8, &VAR_4, &VAR_5,
          VAR_6, VAR_7);
   VAR_9++;
   VAR_11 = FUNC_9(VAR_12);
   VAR_12 = FUNC_10(VAR_12);
  } else
   VAR_11 = VAR_0;

  while (VAR_11 && VAR_13) {
   if (FUNC_9(VAR_13) & 0xf)
    VAR_8 = FUNC_0(FUNC_8(VAR_13),
           FUNC_9(VAR_13));
   else
    VAR_8 = FUNC_3(FUNC_8(VAR_13),
            FUNC_9(VAR_13)/16);
   FUNC_1(VAR_9, VAR_2, VAR_3,
          VAR_8, &VAR_4, &VAR_5,
          VAR_6, VAR_7);
   VAR_9++;
   if (FUNC_9(VAR_13) < VAR_11)
    VAR_11 -= FUNC_9(VAR_13);
   else
    VAR_11 = 0;
   VAR_13 = FUNC_10(VAR_13);
  }
 }


 FUNC_7(VAR_4, FUNC_5(!VAR_5));


 FUNC_11();


 FUNC_2(VAR_10);

 return VAR_4;
}

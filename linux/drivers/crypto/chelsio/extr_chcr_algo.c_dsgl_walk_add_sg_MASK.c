
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct dsgl_walk {unsigned int nents; int last_sg_len; struct scatterlist* last_sg; TYPE_1__* to; } ;
struct TYPE_2__ {int * addr; int * len; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int ,unsigned int,int) ;
 scalar_t__ FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct scatterlist*) ;
 struct scatterlist* FUNC_5 (struct scatterlist*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct dsgl_walk *VAR_2,
      struct scatterlist *VAR_3,
         unsigned int VAR_4,
         unsigned int VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7 = VAR_4, VAR_8 = 0;
 unsigned int VAR_9 = VAR_2->nents;
 int VAR_10, VAR_11;

 if (!VAR_4)
  return;
 while (VAR_3 && VAR_5) {
  if (FUNC_4(VAR_3) <= VAR_5) {
   VAR_5 -= FUNC_4(VAR_3);
   VAR_6 = 0;
   VAR_3 = FUNC_5(VAR_3);
  } else {
   VAR_6 = VAR_5;
   VAR_5 = 0;
  }
 }

 while (VAR_7 && VAR_3) {
  VAR_8 = FUNC_2(VAR_1, VAR_7, FUNC_4(VAR_3) - VAR_6);
  VAR_10 = 0;
  while (VAR_8) {
   VAR_11 = FUNC_2(VAR_1, VAR_8, VAR_0);
   VAR_2->to->len[VAR_9 % 8] = FUNC_1(VAR_11);
   VAR_2->to->addr[VAR_9 % 8] = FUNC_0(FUNC_3(VAR_3) +
            VAR_10 + VAR_6);
   VAR_10 += VAR_11;
   VAR_8 -= VAR_11;
   VAR_9++;
   if ((VAR_9 % 8) == 0)
    VAR_2->to++;
  }
  VAR_2->last_sg = VAR_3;
  VAR_2->last_sg_len = FUNC_2(VAR_1, VAR_7, FUNC_4(VAR_3) -
       VAR_6) + VAR_6;
  VAR_7 -= FUNC_2(VAR_1, VAR_7, FUNC_4(VAR_3) - VAR_6);
  VAR_6 = 0;
  VAR_3 = FUNC_5(VAR_3);
 }
 VAR_2->nents = VAR_9;
}

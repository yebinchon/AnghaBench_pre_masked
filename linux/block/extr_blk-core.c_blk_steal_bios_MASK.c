
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {scalar_t__ __data_len; TYPE_1__* biotail; int * bio; } ;
struct bio_list {TYPE_1__* tail; int * head; } ;
struct TYPE_2__ {int * bi_next; } ;



void FUNC_0(struct bio_list *VAR_0, struct request *VAR_1)
{
 if (VAR_1->bio) {
  if (VAR_0->tail)
   VAR_0->tail->bi_next = VAR_1->bio;
  else
   VAR_0->head = VAR_1->bio;
  VAR_0->tail = VAR_1->biotail;

  VAR_1->bio = ((void*)0);
  VAR_1->biotail = ((void*)0);
 }

 VAR_1->__data_len = 0;
}

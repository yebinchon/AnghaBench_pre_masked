
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_queue {unsigned long head; unsigned long tail; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static int FUNC_0(struct spu_queue *VAR_2)
{
 unsigned long VAR_3 = VAR_2->head;
 unsigned long VAR_4 = VAR_2->tail;
 unsigned long VAR_5 = (VAR_0 * VAR_1);
 unsigned long VAR_6;

 if (VAR_3 > VAR_4)
  VAR_6 = VAR_3 - VAR_4;
 else
  VAR_6 = (VAR_5 - VAR_4) + VAR_3;

 return (VAR_6 / VAR_0) - 1;
}

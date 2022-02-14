
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_queue {int q; unsigned long tail; int qhandle; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct spu_queue*,void*) ;
 unsigned long FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_2(struct spu_queue *VAR_1, void *VAR_2)
{
 unsigned long VAR_3, VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2 - VAR_1->q);

 VAR_3 = FUNC_1(VAR_1->qhandle, VAR_4);
 if (VAR_3 == VAR_0)
  VAR_1->tail = VAR_4;
 return VAR_3;
}

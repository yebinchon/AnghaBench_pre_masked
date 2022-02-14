
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidma_lldev {int lock; scalar_t__ trca; int tre_write_offset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,scalar_t__) ;

void FUNC_3(struct hidma_lldev *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_1->lock, VAR_2);
 FUNC_2(VAR_1->tre_write_offset, VAR_1->trca + VAR_0);
 FUNC_1(&VAR_1->lock, VAR_2);
}

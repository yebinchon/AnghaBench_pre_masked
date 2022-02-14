
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_tracker {int lock; int in_flight; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct io_tracker *VAR_0, sector_t VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_0->lock, VAR_2);
 VAR_0->in_flight += VAR_1;
 FUNC_1(&VAR_0->lock, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_tracker {int lock; } ;


 int FUNC_0 (struct io_tracker*,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_3(struct io_tracker *VAR_0, unsigned long VAR_1)
{
 bool VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->lock, VAR_3);

 return VAR_2;
}

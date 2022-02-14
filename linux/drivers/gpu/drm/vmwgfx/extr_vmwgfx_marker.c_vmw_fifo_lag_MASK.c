
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vmw_marker_queue {scalar_t__ lag; int lock; scalar_t__ lag_time; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static u64 FUNC_3(struct vmw_marker_queue *VAR_0)
{
 u64 VAR_1;

 FUNC_1(&VAR_0->lock);
 VAR_1 = FUNC_0();
 VAR_0->lag += VAR_1 - VAR_0->lag_time;
 VAR_0->lag_time = VAR_1;
 FUNC_2(&VAR_0->lock);
 return VAR_0->lag;
}

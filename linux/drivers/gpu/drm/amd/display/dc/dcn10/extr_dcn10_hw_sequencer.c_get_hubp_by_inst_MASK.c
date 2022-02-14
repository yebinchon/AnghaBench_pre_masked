
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_pool {int pipe_count; struct hubp** hubps; } ;
struct hubp {int inst; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static struct hubp *FUNC_1(struct resource_pool *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->pipe_count; VAR_2++) {
  if (VAR_0->hubps[VAR_2]->inst == VAR_1)
   return VAR_0->hubps[VAR_2];
 }
 FUNC_0(0);
 return ((void*)0);
}

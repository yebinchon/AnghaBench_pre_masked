
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_rcache {int cpu_rcaches; } ;
struct iova_domain {struct iova_rcache* rcaches; } ;
struct iova_cpu_rcache {int lock; int prev; int loaded; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct iova_domain*) ;
 struct iova_cpu_rcache* FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(unsigned int VAR_1, struct iova_domain *VAR_2)
{
 struct iova_cpu_rcache *VAR_3;
 struct iova_rcache *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
  VAR_4 = &VAR_2->rcaches[VAR_6];
  VAR_3 = FUNC_1(VAR_4->cpu_rcaches, VAR_1);
  FUNC_2(&VAR_3->lock, VAR_5);
  FUNC_0(VAR_3->loaded, VAR_2);
  FUNC_0(VAR_3->prev, VAR_2);
  FUNC_3(&VAR_3->lock, VAR_5);
 }
}

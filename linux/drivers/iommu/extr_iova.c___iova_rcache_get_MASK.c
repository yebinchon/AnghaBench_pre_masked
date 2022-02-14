
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_rcache {size_t depot_size; int lock; int * depot; int cpu_rcaches; } ;
struct iova_cpu_rcache {int lock; int loaded; int prev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ,unsigned long) ;
 struct iova_cpu_rcache* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static unsigned long FUNC_9(struct iova_rcache *VAR_0,
           unsigned long VAR_1)
{
 struct iova_cpu_rcache *VAR_2;
 unsigned long VAR_3 = 0;
 bool VAR_4 = 0;
 unsigned long VAR_5;

 VAR_2 = FUNC_3(VAR_0->cpu_rcaches);
 FUNC_5(&VAR_2->lock, VAR_5);

 if (!FUNC_0(VAR_2->loaded)) {
  VAR_4 = 1;
 } else if (!FUNC_0(VAR_2->prev)) {
  FUNC_8(VAR_2->prev, VAR_2->loaded);
  VAR_4 = 1;
 } else {
  FUNC_4(&VAR_0->lock);
  if (VAR_0->depot_size > 0) {
   FUNC_1(VAR_2->loaded);
   VAR_2->loaded = VAR_0->depot[--VAR_0->depot_size];
   VAR_4 = 1;
  }
  FUNC_6(&VAR_0->lock);
 }

 if (VAR_4)
  VAR_3 = FUNC_2(VAR_2->loaded, VAR_1);

 FUNC_7(&VAR_2->lock, VAR_5);

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_rcache {scalar_t__ depot_size; int lock; struct iova_magazine** depot; int cpu_rcaches; } ;
struct iova_magazine {int dummy; } ;
struct iova_domain {int dummy; } ;
struct iova_cpu_rcache {int lock; struct iova_magazine* loaded; struct iova_magazine* prev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct iova_magazine* FUNC_0 (int ) ;
 int FUNC_1 (struct iova_magazine*) ;
 int FUNC_2 (struct iova_magazine*,struct iova_domain*) ;
 int FUNC_3 (struct iova_magazine*) ;
 int FUNC_4 (struct iova_magazine*,unsigned long) ;
 struct iova_cpu_rcache* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct iova_magazine*,struct iova_magazine*) ;

__attribute__((used)) static bool FUNC_11(struct iova_domain *VAR_2,
     struct iova_rcache *VAR_3,
     unsigned long VAR_4)
{
 struct iova_magazine *VAR_5 = ((void*)0);
 struct iova_cpu_rcache *VAR_6;
 bool VAR_7 = 0;
 unsigned long VAR_8;

 VAR_6 = FUNC_5(VAR_3->cpu_rcaches);
 FUNC_7(&VAR_6->lock, VAR_8);

 if (!FUNC_3(VAR_6->loaded)) {
  VAR_7 = 1;
 } else if (!FUNC_3(VAR_6->prev)) {
  FUNC_10(VAR_6->prev, VAR_6->loaded);
  VAR_7 = 1;
 } else {
  struct iova_magazine *VAR_9 = FUNC_0(VAR_0);

  if (VAR_9) {
   FUNC_6(&VAR_3->lock);
   if (VAR_3->depot_size < VAR_1) {
    VAR_3->depot[VAR_3->depot_size++] =
      VAR_6->loaded;
   } else {
    VAR_5 = VAR_6->loaded;
   }
   FUNC_8(&VAR_3->lock);

   VAR_6->loaded = VAR_9;
   VAR_7 = 1;
  }
 }

 if (VAR_7)
  FUNC_4(VAR_6->loaded, VAR_4);

 FUNC_9(&VAR_6->lock, VAR_8);

 if (VAR_5) {
  FUNC_2(VAR_5, VAR_2);
  FUNC_1(VAR_5);
 }

 return VAR_7;
}

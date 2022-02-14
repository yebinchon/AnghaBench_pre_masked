
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int lock; int deferred_bios; } ;
struct bio_list {int dummy; } ;


 int FUNC_0 (struct bio_list*) ;
 int FUNC_1 (int *,struct bio_list*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct cache*) ;

__attribute__((used)) static void FUNC_5(struct cache *VAR_0, struct bio_list *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->lock, VAR_2);
 FUNC_1(&VAR_0->deferred_bios, VAR_1);
 FUNC_0(VAR_1);
 FUNC_3(&VAR_0->lock, VAR_2);

 FUNC_4(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clone {int lock; int deferred_bios; } ;
struct bio_list {int dummy; } ;


 struct bio_list VAR_0 ;
 scalar_t__ FUNC_0 (struct bio_list*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bio_list*,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct bio_list*) ;

__attribute__((used)) static void FUNC_6(struct clone *VAR_1)
{
 unsigned long VAR_2;
 struct bio_list VAR_3 = VAR_0;

 FUNC_3(&VAR_1->lock, VAR_2);
 FUNC_2(&VAR_3, &VAR_1->deferred_bios);
 FUNC_1(&VAR_1->deferred_bios);
 FUNC_4(&VAR_1->lock, VAR_2);

 if (FUNC_0(&VAR_3))
  return;

 FUNC_5(&VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_list {int head; } ;
struct mirror_set {int lock; struct bio_list reads; struct bio_list writes; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio_list*,struct bio*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct mirror_set*) ;

__attribute__((used)) static void FUNC_4(struct mirror_set *VAR_1, struct bio *VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = 0;
 struct bio_list *VAR_6;

 VAR_6 = (VAR_3 == VAR_0) ? &VAR_1->writes : &VAR_1->reads;
 FUNC_1(&VAR_1->lock, VAR_4);
 VAR_5 = !(VAR_6->head);
 FUNC_0(VAR_6, VAR_2);
 FUNC_2(&VAR_1->lock, VAR_4);

 if (VAR_5)
  FUNC_3(VAR_1);
}

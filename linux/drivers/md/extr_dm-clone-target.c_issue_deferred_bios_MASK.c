
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clone {int lock; int deferred_flush_bios; int deferred_bios; } ;
struct bio_list {int dummy; } ;
struct bio {int dummy; } ;


 struct bio_list VAR_0 ;
 int FUNC_0 (struct bio_list*,struct bio*) ;
 scalar_t__ FUNC_1 (struct bio_list*) ;
 int FUNC_2 (int *,struct bio_list*) ;
 struct bio* FUNC_3 (struct bio_list*) ;
 scalar_t__ FUNC_4 (struct clone*,struct bio*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct clone*) ;

__attribute__((used)) static void FUNC_8(struct clone *VAR_1, struct bio_list *VAR_2)
{
 struct bio *VAR_3;
 unsigned long VAR_4;
 struct bio_list VAR_5 = VAR_0;
 struct bio_list VAR_6 = VAR_0;

 if (FUNC_1(VAR_2))
  return;

 while ((VAR_3 = FUNC_3(VAR_2))) {
  if (FUNC_4(VAR_1, VAR_3))
   FUNC_0(&VAR_5, VAR_3);
  else
   FUNC_0(&VAR_6, VAR_3);
 }

 FUNC_5(&VAR_1->lock, VAR_4);
 FUNC_2(&VAR_1->deferred_bios, &VAR_6);
 FUNC_2(&VAR_1->deferred_flush_bios, &VAR_5);
 FUNC_6(&VAR_1->lock, VAR_4);

 FUNC_7(VAR_1);
}

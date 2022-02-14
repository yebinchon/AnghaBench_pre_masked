
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mirror_set {scalar_t__ log_failure; int rh; scalar_t__ in_sync; } ;
struct bio_list {int head; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 struct bio* FUNC_2 (struct bio_list*) ;
 int FUNC_3 (int ,struct bio*) ;
 scalar_t__ FUNC_4 (struct mirror_set*) ;
 int FUNC_5 (struct mirror_set*) ;
 int FUNC_6 (struct mirror_set*,struct bio*) ;
 scalar_t__ FUNC_7 (struct mirror_set*) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct mirror_set *VAR_0, struct bio_list *VAR_1)
{
 struct bio *VAR_2;

 if (FUNC_8(!VAR_1->head))
  return;
 while ((VAR_2 = FUNC_2(VAR_1))) {
  if (!VAR_0->log_failure) {
   VAR_0->in_sync = 0;
   FUNC_3(VAR_0->rh, VAR_2);
  }
  if (FUNC_9(!FUNC_5(VAR_0) || (FUNC_7(VAR_0) && VAR_0->log_failure)))
   FUNC_1(VAR_2);
  else if (FUNC_4(VAR_0) && !FUNC_7(VAR_0))
   FUNC_6(VAR_0, VAR_2);
  else
   FUNC_0(VAR_2);
 }
}

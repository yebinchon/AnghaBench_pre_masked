
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_gang {int mutex; int contexts; int aff_flags; } ;
struct spu_context {int gang_list; int aff_list; struct spu_gang* gang; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spu_gang*) ;

void FUNC_6(struct spu_gang *VAR_1, struct spu_context *VAR_2)
{
 FUNC_3(&VAR_1->mutex);
 FUNC_0(VAR_2->gang != VAR_1);
 if (!FUNC_2(&VAR_2->aff_list)) {
  FUNC_1(&VAR_2->aff_list);
  VAR_1->aff_flags &= ~VAR_0;
 }
 FUNC_1(&VAR_2->gang_list);
 VAR_1->contexts--;
 FUNC_4(&VAR_1->mutex);

 FUNC_5(VAR_1);
}

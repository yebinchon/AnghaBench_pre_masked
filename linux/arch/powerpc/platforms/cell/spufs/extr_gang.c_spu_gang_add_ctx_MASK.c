
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_gang {int mutex; int contexts; int list; } ;
struct spu_context {int gang_list; int gang; } ;


 int FUNC_0 (struct spu_gang*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct spu_gang *VAR_0, struct spu_context *VAR_1)
{
 FUNC_2(&VAR_0->mutex);
 VAR_1->gang = FUNC_0(VAR_0);
 FUNC_1(&VAR_1->gang_list, &VAR_0->list);
 VAR_0->contexts++;
 FUNC_3(&VAR_0->mutex);
}

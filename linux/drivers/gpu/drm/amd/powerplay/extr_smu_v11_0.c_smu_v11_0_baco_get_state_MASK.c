
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_baco_context {int state; int mutex; } ;
struct smu_context {struct smu_baco_context smu_baco; } ;
typedef enum smu_baco_state { ____Placeholder_smu_baco_state } smu_baco_state ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static enum smu_baco_state FUNC_2(struct smu_context *VAR_0)
{
 struct smu_baco_context *VAR_1 = &VAR_0->smu_baco;
 enum smu_baco_state VAR_2;

 FUNC_0(&VAR_1->mutex);
 VAR_2 = VAR_1->state;
 FUNC_1(&VAR_1->mutex);

 return VAR_2;
}

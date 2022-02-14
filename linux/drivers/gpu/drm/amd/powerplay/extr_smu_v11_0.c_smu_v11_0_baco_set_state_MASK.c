
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_baco_context {int state; int mutex; } ;
struct smu_context {struct smu_baco_context smu_baco; } ;
typedef enum smu_baco_state { ____Placeholder_smu_baco_state } smu_baco_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct smu_context*,int ) ;
 int FUNC_3 (struct smu_context*,int ,int ) ;
 int FUNC_4 (struct smu_context*) ;

__attribute__((used)) static int FUNC_5(struct smu_context *VAR_4, enum smu_baco_state VAR_5)
{

 struct smu_baco_context *VAR_6 = &VAR_4->smu_baco;
 int VAR_7 = 0;

 if (FUNC_4(VAR_4) == VAR_5)
  return 0;

 FUNC_0(&VAR_6->mutex);

 if (VAR_5 == VAR_1)
  VAR_7 = FUNC_3(VAR_4, VAR_2, VAR_0);
 else
  VAR_7 = FUNC_2(VAR_4, VAR_3);
 if (VAR_7)
  goto out;

 VAR_6->state = VAR_5;
out:
 FUNC_1(&VAR_6->mutex);
 return VAR_7;
}

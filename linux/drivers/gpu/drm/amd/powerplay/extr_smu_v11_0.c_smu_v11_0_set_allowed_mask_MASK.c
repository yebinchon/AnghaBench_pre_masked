
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_feature {int feature_num; int mutex; int allowed; } ;
struct smu_context {struct smu_feature smu_feature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct smu_context*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct smu_context *VAR_3)
{
 struct smu_feature *VAR_4 = &VAR_3->smu_feature;
 int VAR_5 = 0;
 uint32_t VAR_6[2];

 FUNC_2(&VAR_4->mutex);
 if (FUNC_1(VAR_4->allowed, VAR_0) || VAR_4->feature_num < 64)
  goto failed;

 FUNC_0((unsigned long *)VAR_6, VAR_4->allowed, 64);

 VAR_5 = FUNC_4(VAR_3, VAR_1,
       VAR_6[1]);
 if (VAR_5)
  goto failed;

 VAR_5 = FUNC_4(VAR_3, VAR_2,
       VAR_6[0]);
 if (VAR_5)
  goto failed;

failed:
 FUNC_3(&VAR_4->mutex);
 return VAR_5;
}

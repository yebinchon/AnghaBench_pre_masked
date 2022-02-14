
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct smu_context*,int ) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(&VAR_1->mutex);
 VAR_2 = FUNC_2(VAR_1, VAR_0);
 FUNC_1(&VAR_1->mutex);

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct smu_context {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct smu_context*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_3,
         uint32_t VAR_4)
{
 int VAR_5 = 0;
 FUNC_0(&(VAR_3->mutex));
 VAR_5 = FUNC_2(VAR_3,
       VAR_0,
       VAR_4 ? VAR_1 : VAR_2);
 FUNC_1(&(VAR_3->mutex));
 return VAR_5;
}

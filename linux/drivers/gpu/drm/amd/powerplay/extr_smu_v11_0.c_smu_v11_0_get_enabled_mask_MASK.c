
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smu_context*,int*) ;
 int FUNC_1 (struct smu_context*,int ) ;

__attribute__((used)) static int FUNC_2(struct smu_context *VAR_3,
          uint32_t *VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6 = 0, VAR_7 = 0;
 int VAR_8 = 0;

 if (!VAR_4 || VAR_5 < 2)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_3, VAR_1);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_0(VAR_3, &VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_2);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_0(VAR_3, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_4[0] = VAR_7;
 VAR_4[1] = VAR_6;

 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct smu_context {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct smu_context*,scalar_t__*,int) ;

__attribute__((used)) static bool FUNC_1(struct smu_context *VAR_1)
{
 int VAR_2 = 0;
 uint32_t VAR_3[2];
 unsigned long VAR_4;
 VAR_2 = FUNC_0(VAR_1, VAR_3, 2);
 VAR_4 = (unsigned long)((uint64_t)VAR_3[0] |
      ((uint64_t)VAR_3[1] << 32));
 return !!(VAR_4 & VAR_0);
}

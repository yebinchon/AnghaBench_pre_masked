
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qce_device {int dummy; } ;


 int FUNC_0 (struct qce_device*,scalar_t__,scalar_t__ const) ;

__attribute__((used)) static inline void FUNC_1(struct qce_device *VAR_0, u32 VAR_1,
       const u32 *VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_0(VAR_0, VAR_1 + VAR_4 * sizeof(u32), VAR_2[VAR_4]);
}

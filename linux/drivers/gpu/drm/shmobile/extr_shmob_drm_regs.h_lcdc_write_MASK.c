
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct shmob_drm_device {scalar_t__ mmio; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct shmob_drm_device *VAR_1, u32 VAR_2, u32 VAR_3)
{
 FUNC_0(VAR_3, VAR_1->mmio + VAR_2);
 if (FUNC_1(VAR_2))
  FUNC_0(VAR_3, VAR_1->mmio + VAR_2 + VAR_0);
}

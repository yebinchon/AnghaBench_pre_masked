
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct shmob_drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct shmob_drm_device*,int) ;
 unsigned long FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static inline int FUNC_4(struct shmob_drm_device *VAR_2, u32 VAR_3,
    u32 VAR_4, u32 VAR_5)
{
 unsigned long VAR_6 = VAR_1 + FUNC_2(5);

 while ((FUNC_1(VAR_2, VAR_3) & VAR_4) != VAR_5) {
  if (FUNC_3(VAR_1, VAR_6))
   return -VAR_0;
  FUNC_0();
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_msm_timespec {int tv_nsec; int tv_sec; } ;
typedef int ktime_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline ktime_t FUNC_1(struct drm_msm_timespec VAR_0)
{
 return FUNC_0(VAR_0.tv_sec, VAR_0.tv_nsec);
}

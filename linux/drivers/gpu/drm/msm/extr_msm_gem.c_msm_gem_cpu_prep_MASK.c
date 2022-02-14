
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_gem_object {int resv; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long FUNC_0 (int ,int,int,unsigned long) ;
 unsigned long FUNC_1 (int *) ;

int FUNC_2(struct drm_gem_object *VAR_4, uint32_t VAR_5, ktime_t *VAR_6)
{
 bool VAR_7 = !!(VAR_5 & VAR_3);
 unsigned long VAR_8 =
  VAR_5 & VAR_2 ? 0 : FUNC_1(VAR_6);
 long VAR_9;

 VAR_9 = FUNC_0(VAR_4->resv, VAR_7,
        1, VAR_8);
 if (VAR_9 == 0)
  return VAR_8 == 0 ? -VAR_0 : -VAR_1;
 else if (VAR_9 < 0)
  return VAR_9;



 return 0;
}

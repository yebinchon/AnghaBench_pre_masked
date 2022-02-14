
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gtt_range {int gem; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int *,int) ;
 struct gtt_range* FUNC_1 (struct drm_device*,int,char*,int,int ) ;

__attribute__((used)) static struct gtt_range *FUNC_2(struct drm_device *VAR_1, int VAR_2)
{
 struct gtt_range *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2, "fb", 1, VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_1, &VAR_3->gem, VAR_2);
  return VAR_3;
 }
 return ((void*)0);
}

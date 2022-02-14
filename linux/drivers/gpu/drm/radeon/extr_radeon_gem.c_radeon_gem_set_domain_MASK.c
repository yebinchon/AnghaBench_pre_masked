
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int resv; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct radeon_bo {scalar_t__ prime_shared_count; TYPE_2__ tbo; } ;
struct drm_gem_object {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 long FUNC_0 (int ,int,int,int) ;
 struct radeon_bo* FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (char*,long) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct drm_gem_object *VAR_6,
     uint32_t VAR_7, uint32_t VAR_8)
{
 struct radeon_bo *VAR_9;
 uint32_t VAR_10;
 long VAR_11;


 VAR_9 = FUNC_1(VAR_6);

 VAR_10 = VAR_8;
 if (!VAR_10) {
  VAR_10 = VAR_7;
 }
 if (!VAR_10) {

  FUNC_3("Set domain without domain !\n");
  return 0;
 }
 if (VAR_10 == VAR_4) {

  VAR_11 = FUNC_0(VAR_9->tbo.base.resv, 1, 1, 30 * VAR_3);
  if (!VAR_11)
   VAR_11 = -VAR_0;

  if (VAR_11 < 0 && VAR_11 != -VAR_1) {
   FUNC_2("Failed to wait for object: %li\n", VAR_11);
   return VAR_11;
  }
 }
 if (VAR_10 == VAR_5 && VAR_9->prime_shared_count) {

  return -VAR_2;
 }
 return 0;
}

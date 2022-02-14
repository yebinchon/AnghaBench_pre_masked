
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_master {int unique_len; int * unique; } ;
struct drm_file {struct drm_master* master; } ;
struct drm_device {int unique; scalar_t__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct drm_device*,struct drm_master*) ;
 int FUNC_3 (struct drm_device*,struct drm_master*) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_1, struct drm_file *VAR_2)
{
 struct drm_master *VAR_3 = VAR_2->master;
 int VAR_4;

 if (VAR_3->unique != ((void*)0))
  FUNC_3(VAR_1, VAR_3);

 if (VAR_1->dev && FUNC_1(VAR_1->dev)) {
  VAR_4 = FUNC_2(VAR_1, VAR_3);
  if (VAR_4) {
   FUNC_3(VAR_1, VAR_3);
   return VAR_4;
  }
 } else {
  FUNC_0(!VAR_1->unique);
  VAR_3->unique = FUNC_4(VAR_1->unique, VAR_0);
  if (VAR_3->unique)
   VAR_3->unique_len = FUNC_5(VAR_1->unique);
 }

 return 0;
}

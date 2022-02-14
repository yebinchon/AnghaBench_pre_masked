
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;
struct detailed_mode_closure {int modes; struct edid* edid; struct drm_connector* connector; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct detailed_mode_closure*) ;
 scalar_t__ FUNC_1 (struct edid*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct drm_connector *VAR_1, struct edid *VAR_2)
{
 struct detailed_mode_closure VAR_3 = {
  .connector = VAR_1,
  .edid = VAR_2,
 };

 if (FUNC_1(VAR_2, 1, 2))
  FUNC_0((u8 *)VAR_2, VAR_0, &VAR_3);



 return VAR_3.modes;
}

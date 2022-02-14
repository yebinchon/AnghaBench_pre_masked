
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_6, bool VAR_7)
{
 if (VAR_7) {
  u32 VAR_8 = FUNC_0(VAR_4);
  VAR_8 |= VAR_1 | VAR_2 |
      VAR_3 | VAR_0;
  FUNC_1(VAR_4, VAR_8);
 } else {
  FUNC_1(VAR_4, 0);
  FUNC_1(VAR_5, FUNC_0(VAR_5));
 }
}

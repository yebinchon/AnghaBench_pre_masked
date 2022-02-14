
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vc4_dev {int dummy; } ;
struct drm_device {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 struct vc4_dev* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,int) ;
 int FUNC_7 (struct drm_device*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_5, void *VAR_6)
{
 struct drm_device *VAR_7 = VAR_6;
 struct vc4_dev *VAR_8 = FUNC_5(VAR_7);
 irqreturn_t VAR_9 = VAR_1;
 int VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 VAR_12 = FUNC_0(VAR_4);
 VAR_11 = FUNC_0(VAR_3);

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {

  if (VAR_12 & FUNC_3(VAR_10) &&
      VAR_11 & FUNC_2(VAR_10)) {
   FUNC_6(VAR_7, VAR_10);
   FUNC_7(VAR_7);

   VAR_9 = VAR_0;
  }
 }


 FUNC_1(VAR_4, FUNC_4(0) |
       FUNC_4(1) |
       FUNC_4(2));

 return VAR_9;
}

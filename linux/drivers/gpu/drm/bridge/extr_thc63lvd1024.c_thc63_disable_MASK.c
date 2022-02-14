
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thc63_dev {int dev; int vcc; int pdwn; int oe; } ;
struct drm_bridge {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 struct thc63_dev* FUNC_3 (struct drm_bridge*) ;

__attribute__((used)) static void FUNC_4(struct drm_bridge *VAR_0)
{
 struct thc63_dev *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_1(VAR_1->oe, 0);
 FUNC_1(VAR_1->pdwn, 1);

 VAR_2 = FUNC_2(VAR_1->vcc);
 if (VAR_2)
  FUNC_0(VAR_1->dev,
   "Failed to disable regulator \"vcc\": %d\n", VAR_2);
}

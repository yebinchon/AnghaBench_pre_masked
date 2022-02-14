
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thc63_dev {int next; } ;
struct drm_bridge {int encoder; } ;


 int FUNC_0 (int ,int ,struct drm_bridge*) ;
 struct thc63_dev* FUNC_1 (struct drm_bridge*) ;

__attribute__((used)) static int FUNC_2(struct drm_bridge *VAR_0)
{
 struct thc63_dev *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_0->encoder, VAR_1->next, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int * sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_device *VAR_2)
{
 if (FUNC_0(VAR_2, VAR_1) && VAR_2->sg &&
     FUNC_0(VAR_2, VAR_0)) {
  FUNC_1(VAR_2->sg);
  VAR_2->sg = ((void*)0);
 }
}

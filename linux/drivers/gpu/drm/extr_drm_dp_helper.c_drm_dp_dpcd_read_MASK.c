
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_aux {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct drm_dp_aux*,int ,unsigned int,void*,size_t) ;
 int FUNC_1 (struct drm_dp_aux*,int ,unsigned int,void*,int) ;

ssize_t FUNC_2(struct drm_dp_aux *VAR_2, unsigned int VAR_3,
    void *VAR_4, size_t VAR_5)
{
 int VAR_6;
 VAR_6 = FUNC_0(VAR_2, VAR_0, VAR_1, VAR_4,
     1);
 if (VAR_6 != 1)
  goto out;

 VAR_6 = FUNC_0(VAR_2, VAR_0, VAR_3, VAR_4,
     VAR_5);

out:
 FUNC_1(VAR_2, VAR_0, VAR_3, VAR_4, VAR_6);
 return VAR_6;
}

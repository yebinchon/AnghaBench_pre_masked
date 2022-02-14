
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_aux_msg {int size; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(const struct drm_dp_aux_msg *VAR_4,
       int VAR_5)
{

 return FUNC_0((VAR_2 + VAR_0 +
        VAR_4->size * VAR_1 +
        VAR_3) * 1000, VAR_5);
}

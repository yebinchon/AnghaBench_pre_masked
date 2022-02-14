
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_aux_msg {int request; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(const struct drm_dp_aux_msg *VAR_6)
{
 int VAR_7 = VAR_1 + VAR_4 + VAR_3 +
  VAR_0 + VAR_2;





 if (VAR_6->request & VAR_5)
  VAR_7 += VAR_6->size * 8;

 return VAR_7;
}

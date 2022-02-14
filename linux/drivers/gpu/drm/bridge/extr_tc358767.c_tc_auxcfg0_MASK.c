
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_dp_aux_msg {int request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t) ;

__attribute__((used)) static u32 FUNC_1(struct drm_dp_aux_msg *VAR_2, size_t VAR_3)
{
 u32 VAR_4 = VAR_2->request;

 if (VAR_3)
  VAR_4 |= FUNC_0(VAR_1, VAR_3 - 1);
 else
  VAR_4 |= VAR_0;

 return VAR_4;
}

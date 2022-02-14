
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_color_lut {int dummy; } ;
struct dc_transfer_func {int dummy; } ;
struct dc_gamma {int num_entries; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_color_lut const*,struct dc_gamma*,int) ;
 struct dc_gamma* FUNC_1 () ;
 int FUNC_2 (struct dc_gamma**) ;
 int FUNC_3 (struct dc_transfer_func*,struct dc_gamma*,int) ;

__attribute__((used)) static int FUNC_4(struct dc_transfer_func *VAR_2,
     const struct drm_color_lut *VAR_3, uint32_t VAR_4)
{
 struct dc_gamma *VAR_5 = ((void*)0);
 bool VAR_6;

 VAR_5 = FUNC_1();
 if (!VAR_5)
  return -VAR_0;

 VAR_5->type = VAR_1;
 VAR_5->num_entries = VAR_4;

 FUNC_0(VAR_3, VAR_5, 0);

 VAR_6 = FUNC_3(VAR_2, VAR_5, 1);
 FUNC_2(&VAR_5);

 return VAR_6 ? 0 : -VAR_0;
}

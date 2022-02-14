
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct drm_color_lut {int dummy; } ;
struct dc_transfer_func {int dummy; } ;
struct dc_gamma {scalar_t__ num_entries; int type; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct drm_color_lut const*,struct dc_gamma*,int) ;
 struct dc_gamma* FUNC_2 () ;
 int FUNC_3 (struct dc_transfer_func*,struct dc_gamma*,int,int,int *) ;

__attribute__((used)) static int FUNC_4(struct dc_transfer_func *VAR_3,
      const struct drm_color_lut *VAR_4, uint32_t VAR_5,
      bool VAR_6)
{
 struct dc_gamma *VAR_7 = ((void*)0);
 bool VAR_8;

 FUNC_0(VAR_4 && VAR_5 == VAR_2);

 VAR_7 = FUNC_2();
 if (!VAR_7)
  return -VAR_0;

 VAR_7->type = VAR_1;
 VAR_7->num_entries = VAR_5;
 FUNC_1(VAR_4, VAR_7, 1);

 VAR_8 = FUNC_3(VAR_3, VAR_7, 1, VAR_6,
       ((void*)0));

 return VAR_8 ? 0 : -VAR_0;
}

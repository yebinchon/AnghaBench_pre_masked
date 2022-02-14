
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct drm_color_lut {int dummy; } ;
struct dc_transfer_func {scalar_t__ tf; } ;
struct dc_gamma {int type; scalar_t__ num_entries; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct drm_color_lut const*,struct dc_gamma*,int) ;
 struct dc_gamma* FUNC_2 () ;
 int FUNC_3 (struct dc_gamma**) ;
 int FUNC_4 (struct dc_transfer_func*,struct dc_gamma*,int) ;
 int FUNC_5 (struct dc_transfer_func*,struct dc_gamma*,int,int,int *) ;

__attribute__((used)) static int FUNC_6(struct dc_transfer_func *VAR_5,
      const struct drm_color_lut *VAR_6, uint32_t VAR_7,
      bool VAR_8)
{
 struct dc_gamma *VAR_9 = ((void*)0);
 bool VAR_10;

 FUNC_0(VAR_6 && VAR_7 == VAR_3);

 VAR_9 = FUNC_2();
 if (!VAR_9)
  return -VAR_0;

 VAR_9->num_entries = VAR_7;
 FUNC_1(VAR_6, VAR_9, 0);

 if (VAR_5->tf == VAR_4) {





  VAR_9->type = VAR_2;
  VAR_10 = FUNC_4(VAR_5, VAR_9, 1);
 } else {




  VAR_9->type = VAR_1;
  VAR_10 = FUNC_5(VAR_5, VAR_9, 0,
        VAR_8, ((void*)0));
 }

 FUNC_3(&VAR_9);

 return VAR_10 ? 0 : -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct transform {int dummy; } ;
struct out_csc_color_matrix {int color_space; } ;
struct default_adjustment {int force_hw_default; int color_depth; int out_color_space; int csc_adjust_type; int in_color_space; } ;
struct dce_transform {int dummy; } ;
typedef enum grph_color_adjust_option { ____Placeholder_grph_color_adjust_option } grph_color_adjust_option ;
typedef enum csc_color_mode { ____Placeholder_csc_color_mode } csc_color_mode ;


 size_t FUNC_0 (struct out_csc_color_matrix*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dce_transform* FUNC_1 (struct transform*) ;
 int FUNC_2 (struct dce_transform*,int,int ,int ) ;
 struct out_csc_color_matrix* VAR_4 ;
 int FUNC_3 (struct dce_transform*,struct out_csc_color_matrix const*,int) ;
 int FUNC_4 (struct transform*,int ) ;
 int FUNC_5 (struct transform*,int ) ;

void FUNC_6(
 struct transform *VAR_5,
 const struct default_adjustment *VAR_6)
{
 struct dce_transform *VAR_7 = FUNC_1(VAR_5);
 enum csc_color_mode VAR_8 =
   VAR_1;

 if (VAR_6->force_hw_default == 0) {
  const struct out_csc_color_matrix *VAR_9;

  enum grph_color_adjust_option VAR_10 =
   VAR_2;
  uint32_t VAR_11;






  VAR_10 = VAR_3;

  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); ++VAR_11) {
   VAR_9 = &VAR_4[VAR_11];
   if (VAR_9->color_space != VAR_6->out_color_space)
    continue;



   FUNC_3(VAR_7, VAR_9, VAR_10);
   VAR_8 = VAR_0;
   break;
  }
 }

 FUNC_4(VAR_5, VAR_6->in_color_space);







 FUNC_2(VAR_7, VAR_8,
  VAR_6->csc_adjust_type,
  VAR_6->out_color_space);

 FUNC_5(VAR_5, VAR_6->color_depth);
}

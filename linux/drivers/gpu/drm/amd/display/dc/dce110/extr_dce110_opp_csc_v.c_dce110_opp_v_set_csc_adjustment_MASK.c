
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transform {int dummy; } ;
struct out_csc_color_matrix {int color_space; } ;
struct dce_transform {int dummy; } ;
typedef enum csc_color_mode { ____Placeholder_csc_color_mode } csc_color_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dce_transform* FUNC_0 (struct transform*) ;
 int FUNC_1 (struct dce_transform*,int,int ,int ) ;
 int FUNC_2 (struct dce_transform*,struct out_csc_color_matrix const*,int ) ;

void FUNC_3(
 struct transform *VAR_3,
 const struct out_csc_color_matrix *VAR_4)
{
 struct dce_transform *VAR_5 = FUNC_0(VAR_3);
 enum csc_color_mode VAR_6 =
   VAR_0;

 FUNC_2(
   VAR_5, VAR_4, VAR_2);


 FUNC_1(VAR_5, VAR_6, VAR_1,
   VAR_4->color_space);



}

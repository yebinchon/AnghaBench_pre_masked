
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_options {int output_format; } ;
struct rev_info {struct diff_options diffopt; } ;
struct combine_diff_path {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct combine_diff_path*,int,int,int,struct rev_info*) ;
 int FUNC_1 (struct combine_diff_path*,int,struct rev_info*) ;

void FUNC_2(struct combine_diff_path *VAR_4,
         int VAR_5,
         int VAR_6,
         struct rev_info *VAR_7)
{
 struct diff_options *VAR_8 = &VAR_7->diffopt;

 if (VAR_8->output_format & (VAR_3 |
      VAR_0 |
      VAR_1))
  FUNC_1(VAR_4, VAR_5, VAR_7);
 else if (VAR_8->output_format & VAR_2)
  FUNC_0(VAR_4, VAR_5, VAR_6, 1, VAR_7);
}
